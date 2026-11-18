// Lean compiler output
// Module: Lean.Meta.Match.MatchEqs
// Imports: public import Lean.Meta.Match.Match public import Lean.Meta.Match.MatchEqsExt import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.SplitIf import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Match.SimpH import Lean.Meta.Match.AltTelescopes import Lean.Meta.Match.NamedPatterns import Lean.Meta.SplitSparseCasesOn
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_deltaTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Overlaps_overlapping(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_simpH_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_unfoldNamedPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_modifyTargetEqLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_casesOnStuckLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_splitSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpIfTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
extern lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_eqnThmSuffixBase;
lean_object* l_Lean_Meta_Match_forallAltTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getNumEqsFromDiscrInfos(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_withMkMatcherInput___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
uint8_t l_Lean_Meta_Match_Overlaps_isEmpty(lean_object*);
lean_object* l_Lean_Meta_Match_isNamedPattern___boxed(lean_object*);
uint8_t l_Lean_Meta_Match_instBEqAltParamInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_matchEqnsExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_Meta_Match_congrEqn1ThmSuffix;
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Could not find equation "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " among "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expecting "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = " equalities, but found type"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "substSomeVar failed"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elimOffset"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(238, 85, 239, 193, 128, 115, 38, 143)}};
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 91, 22, 141, 221, 120, 153, 253)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "goal's target does not contain `Nat.Internal.elimOffset`"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "failed to generate equality theorems for `match` expression `"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`\n"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "spliIf failed"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5;
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_whnfCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6_value;
static const lean_array_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpIf failed"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchEqs"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Match"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(250, 1, 225, 180, 135, 246, 184, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 82, 91, 15, 164, 75, 57)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "proveCondEqThm.go "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Match_proveCondEqThm___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "proveCondEqThm after subst"};
static const lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "proveCondEqThm "};
static const lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__4;
static const lean_array_object l_Lean_Meta_Match_proveCondEqThm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__5 = (const lean_object*)&l_Lean_Meta_Match_proveCondEqThm___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hs: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.Match.MatchEqs"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "_private.Lean.Meta.Match.MatchEqs.0.Lean.Meta.Match.getEquationsForImpl.go"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 237, .m_capacity = 237, .m_length = 236, .m_data = "assertion violation: matchInfo.altInfos == splitterAltInfos\n      -- This match statement does not need a splitter, we can use itself for that.\n      -- (We still have to generate a declaration to satisfy the realizable constant)\n      "};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7_value;
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Match_isNamedPattern___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` is not a matcher function"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Match_getEquationsForImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "splitter"};
static const lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Match_getEquationsForImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 60, 9, 208, 120, 135, 115, 56)}};
static const lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Match_getEquationsForImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Match_getEquationsForImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to retrieve match equations for `"};
static const lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__4;
static const lean_string_object l_Lean_Meta_Match_getEquationsForImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` after realization"};
static const lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Match_getEquationsForImpl___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__6;
LEAN_EXPORT lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsForImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "heq"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 249, 62, 128, 70, 197, 241, 171)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed(lean_object**);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "_private.Lean.Meta.Match.MatchEqs.0.Lean.Meta.Match.genMatchCongrEqnsImpl.go"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: patterns.size == discrs.size\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed(lean_object**);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_congr_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqnsImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(75, 7, 62, 187, 210, 164, 110, 59)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "MatchEqs"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 108, 58, 118, 141, 255, 162, 173)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(89, 143, 139, 150, 26, 209, 69, 100)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 19, 205, 36, 112, 108, 199, 19)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value),LEAN_SCALAR_PTR_LITERAL(64, 18, 131, 232, 118, 16, 218, 224)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(149, 136, 49, 102, 95, 126, 100, 58)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(188, 148, 22, 51, 114, 213, 50, 138)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 135, 35, 122, 223, 37, 228, 228)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 16, 217, 45, 230, 145, 50, 231)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_value),LEAN_SCALAR_PTR_LITERAL(140, 51, 94, 245, 163, 3, 190, 52)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(81, 118, 58, 117, 110, 34, 2, 117)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 96, 197, 5, 210, 40, 219, 253)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
if (lean_obj_tag(v_a_50_) == 0)
{
lean_object* v___x_52_; 
v___x_52_ = l_List_reverse___redArg(v_a_51_);
return v___x_52_;
}
else
{
lean_object* v_head_53_; lean_object* v_tail_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_63_; 
v_head_53_ = lean_ctor_get(v_a_50_, 0);
v_tail_54_ = lean_ctor_get(v_a_50_, 1);
v_isSharedCheck_63_ = !lean_is_exclusive(v_a_50_);
if (v_isSharedCheck_63_ == 0)
{
v___x_56_ = v_a_50_;
v_isShared_57_ = v_isSharedCheck_63_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_tail_54_);
lean_inc(v_head_53_);
lean_dec(v_a_50_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_63_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_58_ = l_Lean_MessageData_ofExpr(v_head_53_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 1, v_a_51_);
lean_ctor_set(v___x_56_, 0, v___x_58_);
v___x_60_ = v___x_56_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v_a_51_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
v_a_50_ = v_tail_54_;
v_a_51_ = v___x_60_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0));
v___x_69_ = l_Lean_stringToMessageData(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2));
v___x_72_ = l_Lean_stringToMessageData(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4));
v___x_75_ = l_Lean_stringToMessageData(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6));
v___x_78_ = l_Lean_stringToMessageData(v___x_77_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8));
v___x_81_ = l_Lean_stringToMessageData(v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(lean_object* v_alt_82_, lean_object* v_heqs_83_, lean_object* v_numDiscrEqs_84_, lean_object* v_e_85_, lean_object* v_ty_86_, lean_object* v_i_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
uint8_t v___x_93_; 
v___x_93_ = lean_nat_dec_lt(v_i_87_, v_numDiscrEqs_84_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec_ref(v_ty_86_);
lean_dec(v_numDiscrEqs_84_);
lean_dec_ref(v_heqs_83_);
lean_dec_ref(v_alt_82_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v_e_85_);
return v___x_94_;
}
else
{
if (lean_obj_tag(v_ty_86_) == 7)
{
lean_object* v_binderName_95_; lean_object* v_binderType_96_; lean_object* v_body_97_; lean_object* v___x_98_; size_t v_sz_99_; size_t v___x_100_; lean_object* v___x_101_; 
v_binderName_95_ = lean_ctor_get(v_ty_86_, 0);
lean_inc(v_binderName_95_);
v_binderType_96_ = lean_ctor_get(v_ty_86_, 1);
lean_inc_ref_n(v_binderType_96_, 2);
v_body_97_ = lean_ctor_get(v_ty_86_, 2);
lean_inc_ref(v_body_97_);
lean_dec_ref_known(v_ty_86_, 3);
v___x_98_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0));
v_sz_99_ = lean_array_size(v_heqs_83_);
v___x_100_ = ((size_t)0ULL);
lean_inc_ref(v_heqs_83_);
v___x_101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(v_binderType_96_, v_e_85_, v_body_97_, v_i_87_, v_alt_82_, v_heqs_83_, v_numDiscrEqs_84_, v_heqs_83_, v_sz_99_, v___x_100_, v___x_98_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
lean_dec_ref(v_body_97_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_133_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_133_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_133_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_133_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v_fst_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_131_; 
v_fst_106_ = lean_ctor_get(v_a_102_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v_a_102_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v_a_102_, 1);
lean_dec(v_unused_132_);
v___x_108_ = v_a_102_;
v_isShared_109_ = v_isSharedCheck_131_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_fst_106_);
lean_dec(v_a_102_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_131_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
if (lean_obj_tag(v_fst_106_) == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
lean_del_object(v___x_104_);
v___x_110_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1);
v___x_111_ = l_Lean_MessageData_ofName(v_binderName_95_);
if (v_isShared_109_ == 0)
{
lean_ctor_set_tag(v___x_108_, 7);
lean_ctor_set(v___x_108_, 1, v___x_111_);
lean_ctor_set(v___x_108_, 0, v___x_110_);
v___x_113_ = v___x_108_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_111_);
v___x_113_ = v_reuseFailAlloc_126_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_114_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3);
v___x_115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = l_Lean_MessageData_ofExpr(v_binderType_96_);
v___x_117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5);
v___x_119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_array_to_list(v_heqs_83_);
v___x_121_ = lean_box(0);
v___x_122_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_120_, v___x_121_);
v___x_123_ = l_Lean_MessageData_ofList(v___x_122_);
v___x_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_119_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_124_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
return v___x_125_;
}
}
else
{
lean_object* v_val_127_; lean_object* v___x_129_; 
lean_del_object(v___x_108_);
lean_dec_ref(v_binderType_96_);
lean_dec(v_binderName_95_);
lean_dec_ref(v_heqs_83_);
v_val_127_ = lean_ctor_get(v_fst_106_, 0);
lean_inc(v_val_127_);
lean_dec_ref_known(v_fst_106_, 1);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v_val_127_);
v___x_129_ = v___x_104_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_val_127_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
else
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
lean_dec_ref(v_binderType_96_);
lean_dec(v_binderName_95_);
lean_dec_ref(v_heqs_83_);
v_a_134_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_101_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_101_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec_ref(v_ty_86_);
lean_dec_ref(v_e_85_);
lean_dec_ref(v_heqs_83_);
v___x_142_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7);
v___x_143_ = l_Nat_reprFast(v_numDiscrEqs_84_);
v___x_144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
v___x_145_ = l_Lean_MessageData_ofFormat(v___x_144_);
v___x_146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9);
v___x_148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = l_Lean_indentExpr(v_alt_82_);
v___x_150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_150_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(lean_object* v_binderType_152_, lean_object* v_e_153_, lean_object* v_body_154_, lean_object* v_i_155_, lean_object* v_alt_156_, lean_object* v_heqs_157_, lean_object* v_numDiscrEqs_158_, lean_object* v_as_159_, size_t v_sz_160_, size_t v_i_161_, lean_object* v_b_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
uint8_t v___x_168_; 
v___x_168_ = lean_usize_dec_lt(v_i_161_, v_sz_160_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
lean_dec(v_numDiscrEqs_158_);
lean_dec_ref(v_heqs_157_);
lean_dec_ref(v_alt_156_);
lean_dec_ref(v_e_153_);
lean_dec_ref(v_binderType_152_);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v_b_162_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_a_172_; lean_object* v___x_173_; 
lean_dec_ref(v_b_162_);
v___x_170_ = lean_box(0);
v___x_171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0));
v_a_172_ = lean_array_uget_borrowed(v_as_159_, v_i_161_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
lean_inc(v_a_172_);
v___x_173_ = lean_infer_type(v_a_172_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_175_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_173_, 1);
lean_inc_ref(v_binderType_152_);
v___x_175_ = l_Lean_Meta_isExprDefEq(v_a_174_, v_binderType_152_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; uint8_t v___x_177_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v___x_175_, 1);
v___x_177_ = lean_unbox(v_a_176_);
lean_dec(v_a_176_);
if (v___x_177_ == 0)
{
size_t v___x_178_; size_t v___x_179_; 
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_add(v_i_161_, v___x_178_);
v_i_161_ = v___x_179_;
v_b_162_ = v___x_171_;
goto _start;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec_ref(v_binderType_152_);
lean_inc(v_a_172_);
v___x_181_ = l_Lean_Expr_app___override(v_e_153_, v_a_172_);
v___x_182_ = lean_expr_instantiate1(v_body_154_, v_a_172_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_i_155_, v___x_183_);
v___x_185_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_156_, v_heqs_157_, v_numDiscrEqs_158_, v___x_181_, v___x_182_, v___x_184_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___x_184_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_195_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_195_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_190_, 0, v_a_186_);
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_170_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_185_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_185_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec(v_numDiscrEqs_158_);
lean_dec_ref(v_heqs_157_);
lean_dec_ref(v_alt_156_);
lean_dec_ref(v_e_153_);
lean_dec_ref(v_binderType_152_);
v_a_204_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_175_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_175_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
else
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
lean_dec(v_numDiscrEqs_158_);
lean_dec_ref(v_heqs_157_);
lean_dec_ref(v_alt_156_);
lean_dec_ref(v_e_153_);
lean_dec_ref(v_binderType_152_);
v_a_212_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v___x_173_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_173_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___boxed(lean_object* v_binderType_220_, lean_object* v_e_221_, lean_object* v_body_222_, lean_object* v_i_223_, lean_object* v_alt_224_, lean_object* v_heqs_225_, lean_object* v_numDiscrEqs_226_, lean_object* v_as_227_, lean_object* v_sz_228_, lean_object* v_i_229_, lean_object* v_b_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
size_t v_sz_boxed_236_; size_t v_i_boxed_237_; lean_object* v_res_238_; 
v_sz_boxed_236_ = lean_unbox_usize(v_sz_228_);
lean_dec(v_sz_228_);
v_i_boxed_237_ = lean_unbox_usize(v_i_229_);
lean_dec(v_i_229_);
v_res_238_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(v_binderType_220_, v_e_221_, v_body_222_, v_i_223_, v_alt_224_, v_heqs_225_, v_numDiscrEqs_226_, v_as_227_, v_sz_boxed_236_, v_i_boxed_237_, v_b_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec_ref(v_as_227_);
lean_dec(v_i_223_);
lean_dec_ref(v_body_222_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___boxed(lean_object* v_alt_239_, lean_object* v_heqs_240_, lean_object* v_numDiscrEqs_241_, lean_object* v_e_242_, lean_object* v_ty_243_, lean_object* v_i_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_239_, v_heqs_240_, v_numDiscrEqs_241_, v_e_242_, v_ty_243_, v_i_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_i_244_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(lean_object* v_00_u03b1_251_, lean_object* v_msg_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___boxed(lean_object* v_00_u03b1_259_, lean_object* v_msg_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(v_00_u03b1_259_, v_msg_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs(lean_object* v_alt_267_, lean_object* v_heqs_268_, lean_object* v_numDiscrEqs_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_275_; 
lean_inc(v_a_273_);
lean_inc_ref(v_a_272_);
lean_inc(v_a_271_);
lean_inc_ref(v_a_270_);
lean_inc_ref(v_alt_267_);
v___x_275_ = lean_infer_type(v_alt_267_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
v___x_277_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alt_267_);
v___x_278_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_267_, v_heqs_268_, v_numDiscrEqs_269_, v_alt_267_, v_a_276_, v___x_277_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
return v___x_278_;
}
else
{
lean_dec(v_numDiscrEqs_269_);
lean_dec_ref(v_heqs_268_);
lean_dec_ref(v_alt_267_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs___boxed(lean_object* v_alt_279_, lean_object* v_heqs_280_, lean_object* v_numDiscrEqs_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Meta_Match_mkAppDiscrEqs(v_alt_279_, v_heqs_280_, v_numDiscrEqs_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
return v_res_287_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(lean_object* v_x_288_){
_start:
{
uint8_t v___x_289_; 
v___x_289_ = 0;
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed(lean_object* v_x_290_){
_start:
{
uint8_t v_res_291_; lean_object* v_r_292_; 
v_res_291_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(v_x_290_);
lean_dec(v_x_290_);
v_r_292_ = lean_box(v_res_291_);
return v_r_292_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(lean_object* v_fvarId_293_, lean_object* v_x_294_){
_start:
{
uint8_t v___x_295_; 
v___x_295_ = l_Lean_instBEqFVarId_beq(v_fvarId_293_, v_x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_296_, lean_object* v_x_297_){
_start:
{
uint8_t v_res_298_; lean_object* v_r_299_; 
v_res_298_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(v_fvarId_296_, v_x_297_);
lean_dec(v_x_297_);
lean_dec(v_fvarId_296_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lean_box(0);
v___x_302_ = lean_unsigned_to_nat(16u);
v___x_303_ = lean_mk_array(v___x_302_, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1);
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(lean_object* v_e_307_, lean_object* v_fvarId_308_, lean_object* v___y_309_){
_start:
{
lean_object* v___f_311_; lean_object* v___f_312_; lean_object* v___x_313_; uint8_t v_fst_315_; lean_object* v_mctx_316_; lean_object* v___y_335_; lean_object* v_mctx_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v___f_311_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0));
v___f_312_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_312_, 0, v_fvarId_308_);
v___x_313_ = lean_st_ref_get(v___y_309_);
v_mctx_340_ = lean_ctor_get(v___x_313_, 0);
lean_inc_ref_n(v_mctx_340_, 2);
lean_dec(v___x_313_);
v___x_341_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v_mctx_340_);
v___x_343_ = l_Lean_Expr_hasFVar(v_e_307_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
v___x_344_ = l_Lean_Expr_hasMVar(v_e_307_);
if (v___x_344_ == 0)
{
lean_dec_ref_known(v___x_342_, 2);
lean_dec_ref(v___f_312_);
lean_dec_ref(v_e_307_);
v_fst_315_ = v___x_344_;
v_mctx_316_ = v_mctx_340_;
goto v___jp_314_;
}
else
{
lean_object* v___x_345_; 
lean_dec_ref(v_mctx_340_);
v___x_345_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_312_, v___f_311_, v_e_307_, v___x_342_);
v___y_335_ = v___x_345_;
goto v___jp_334_;
}
}
else
{
lean_object* v___x_346_; 
lean_dec_ref(v_mctx_340_);
v___x_346_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_312_, v___f_311_, v_e_307_, v___x_342_);
v___y_335_ = v___x_346_;
goto v___jp_334_;
}
v___jp_314_:
{
lean_object* v___x_317_; lean_object* v_cache_318_; lean_object* v_zetaDeltaFVarIds_319_; lean_object* v_postponed_320_; lean_object* v_diag_321_; lean_object* v_rewriteFires_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_332_; 
v___x_317_ = lean_st_ref_take(v___y_309_);
v_cache_318_ = lean_ctor_get(v___x_317_, 1);
v_zetaDeltaFVarIds_319_ = lean_ctor_get(v___x_317_, 2);
v_postponed_320_ = lean_ctor_get(v___x_317_, 3);
v_diag_321_ = lean_ctor_get(v___x_317_, 4);
v_rewriteFires_322_ = lean_ctor_get(v___x_317_, 5);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v___x_317_, 0);
lean_dec(v_unused_333_);
v___x_324_ = v___x_317_;
v_isShared_325_ = v_isSharedCheck_332_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_rewriteFires_322_);
lean_inc(v_diag_321_);
lean_inc(v_postponed_320_);
lean_inc(v_zetaDeltaFVarIds_319_);
lean_inc(v_cache_318_);
lean_dec(v___x_317_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_332_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 0, v_mctx_316_);
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_mctx_316_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_cache_318_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_zetaDeltaFVarIds_319_);
lean_ctor_set(v_reuseFailAlloc_331_, 3, v_postponed_320_);
lean_ctor_set(v_reuseFailAlloc_331_, 4, v_diag_321_);
lean_ctor_set(v_reuseFailAlloc_331_, 5, v_rewriteFires_322_);
v___x_327_ = v_reuseFailAlloc_331_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_328_ = lean_st_ref_put(v___y_309_, v___x_327_);
v___x_329_ = lean_box(v_fst_315_);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
v___jp_334_:
{
lean_object* v_snd_336_; lean_object* v_fst_337_; lean_object* v_mctx_338_; uint8_t v___x_339_; 
v_snd_336_ = lean_ctor_get(v___y_335_, 1);
lean_inc(v_snd_336_);
v_fst_337_ = lean_ctor_get(v___y_335_, 0);
lean_inc(v_fst_337_);
lean_dec_ref(v___y_335_);
v_mctx_338_ = lean_ctor_get(v_snd_336_, 1);
lean_inc_ref(v_mctx_338_);
lean_dec(v_snd_336_);
v___x_339_ = lean_unbox(v_fst_337_);
lean_dec(v_fst_337_);
v_fst_315_ = v___x_339_;
v_mctx_316_ = v_mctx_338_;
goto v___jp_314_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___boxed(lean_object* v_e_347_, lean_object* v_fvarId_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_e_347_, v_fvarId_348_, v___y_349_);
lean_dec(v___y_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(lean_object* v_e_352_, lean_object* v_fvarId_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_e_352_, v_fvarId_353_, v___y_355_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___boxed(lean_object* v_e_360_, lean_object* v_fvarId_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(v_e_360_, v_fvarId_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(lean_object* v_mvarId_368_, lean_object* v_x_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_368_, v_x_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
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
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_375_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_375_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg___boxed(lean_object* v_mvarId_392_, lean_object* v_x_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_392_, v_x_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(lean_object* v_00_u03b1_400_, lean_object* v_mvarId_401_, lean_object* v_x_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_401_, v_x_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___boxed(lean_object* v_00_u03b1_409_, lean_object* v_mvarId_410_, lean_object* v_x_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(v_00_u03b1_409_, v_mvarId_410_, v_x_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(lean_object* v_mvarId_421_, lean_object* v_as_422_, size_t v_sz_423_, size_t v_i_424_, lean_object* v_b_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
uint8_t v___x_431_; 
v___x_431_ = lean_usize_dec_lt(v_i_424_, v_sz_423_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
lean_dec(v_mvarId_421_);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v_b_425_);
return v___x_432_;
}
else
{
lean_object* v_snd_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_535_; 
v_snd_433_ = lean_ctor_get(v_b_425_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v_b_425_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; 
v_unused_536_ = lean_ctor_get(v_b_425_, 0);
lean_dec(v_unused_536_);
v___x_435_ = v_b_425_;
v_isShared_436_ = v_isSharedCheck_535_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_snd_433_);
lean_dec(v_b_425_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_535_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v_a_439_; lean_object* v_a_446_; 
v___x_437_ = lean_box(0);
v_a_446_ = lean_array_uget(v_as_422_, v_i_424_);
if (lean_obj_tag(v_a_446_) == 0)
{
v_a_439_ = v_snd_433_;
goto v___jp_438_;
}
else
{
lean_object* v_val_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_534_; 
v_val_447_ = lean_ctor_get(v_a_446_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v_a_446_);
if (v_isSharedCheck_534_ == 0)
{
v___x_449_ = v_a_446_;
v_isShared_450_ = v_isSharedCheck_534_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_val_447_);
lean_dec(v_a_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_534_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_451_ = lean_box(0);
v___x_452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0));
v___x_453_ = l_Lean_LocalDecl_type(v_val_447_);
lean_dec(v_val_447_);
v___x_454_ = l_Lean_Meta_matchEq_x3f(v___x_453_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
if (lean_obj_tag(v_a_455_) == 1)
{
lean_object* v_val_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_525_; 
v_val_456_ = lean_ctor_get(v_a_455_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v_a_455_);
if (v_isSharedCheck_525_ == 0)
{
v___x_458_ = v_a_455_;
v_isShared_459_ = v_isSharedCheck_525_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_val_456_);
lean_dec(v_a_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_525_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v_snd_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_523_; 
v_snd_460_ = lean_ctor_get(v_val_456_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_val_456_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_val_456_, 0);
lean_dec(v_unused_524_);
v___x_462_ = v_val_456_;
v_isShared_463_ = v_isSharedCheck_523_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_snd_460_);
lean_dec(v_val_456_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_523_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_522_; 
v_fst_464_ = lean_ctor_get(v_snd_460_, 0);
v_snd_465_ = lean_ctor_get(v_snd_460_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_snd_460_);
if (v_isSharedCheck_522_ == 0)
{
v___x_467_ = v_snd_460_;
v_isShared_468_ = v_isSharedCheck_522_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_inc(v_fst_464_);
lean_dec(v_snd_460_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_522_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
uint8_t v___x_469_; 
v___x_469_ = l_Lean_Expr_isFVar(v_fst_464_);
if (v___x_469_ == 0)
{
lean_del_object(v___x_467_);
lean_dec(v_snd_465_);
lean_dec(v_fst_464_);
lean_del_object(v___x_462_);
lean_del_object(v___x_458_);
lean_del_object(v___x_449_);
lean_dec(v_snd_433_);
v_a_439_ = v___x_452_;
goto v___jp_438_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = l_Lean_Expr_fvarId_x21(v_fst_464_);
lean_dec(v_fst_464_);
lean_inc(v___x_470_);
v___x_471_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_465_, v___x_470_, v___y_427_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; uint8_t v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_unbox(v_a_472_);
lean_dec(v_a_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; 
lean_inc(v_mvarId_421_);
v___x_474_ = l_Lean_Meta_subst_x3f(v_mvarId_421_, v___x_470_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_505_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_505_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_505_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_505_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
if (lean_obj_tag(v_a_475_) == 0)
{
lean_del_object(v___x_477_);
lean_del_object(v___x_467_);
lean_del_object(v___x_462_);
lean_del_object(v___x_458_);
lean_del_object(v___x_449_);
lean_dec(v_snd_433_);
v_a_439_ = v___x_452_;
goto v___jp_438_;
}
else
{
lean_object* v_val_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_504_; 
lean_del_object(v___x_435_);
lean_dec(v_mvarId_421_);
v_val_479_ = lean_ctor_get(v_a_475_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v_a_475_);
if (v_isSharedCheck_504_ == 0)
{
v___x_481_ = v_a_475_;
v_isShared_482_ = v_isSharedCheck_504_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_val_479_);
lean_dec(v_a_475_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_504_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_485_ = lean_array_push(v___x_484_, v_val_479_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v___x_485_);
v___x_487_ = v___x_481_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_503_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_489_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 1, v___x_451_);
lean_ctor_set(v___x_467_, 0, v___x_487_);
v___x_489_ = v___x_467_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v___x_451_);
v___x_489_ = v_reuseFailAlloc_502_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_491_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 0);
lean_ctor_set(v___x_449_, 0, v___x_489_);
v___x_491_ = v___x_449_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_501_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_491_);
v___x_493_ = v___x_458_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_500_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_495_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v_snd_433_);
lean_ctor_set(v___x_462_, 0, v___x_493_);
v___x_495_ = v___x_462_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_493_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_snd_433_);
v___x_495_ = v_reuseFailAlloc_499_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
lean_object* v___x_497_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_495_);
v___x_497_ = v___x_477_;
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
}
}
}
}
}
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
lean_del_object(v___x_467_);
lean_del_object(v___x_462_);
lean_del_object(v___x_458_);
lean_del_object(v___x_449_);
lean_del_object(v___x_435_);
lean_dec(v_snd_433_);
lean_dec(v_mvarId_421_);
v_a_506_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_474_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_474_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
else
{
lean_dec(v___x_470_);
lean_del_object(v___x_467_);
lean_del_object(v___x_462_);
lean_del_object(v___x_458_);
lean_del_object(v___x_449_);
lean_dec(v_snd_433_);
v_a_439_ = v___x_452_;
goto v___jp_438_;
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec(v___x_470_);
lean_del_object(v___x_467_);
lean_del_object(v___x_462_);
lean_del_object(v___x_458_);
lean_del_object(v___x_449_);
lean_del_object(v___x_435_);
lean_dec(v_snd_433_);
lean_dec(v_mvarId_421_);
v_a_514_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_471_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_471_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
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
lean_dec(v_a_455_);
lean_del_object(v___x_449_);
lean_dec(v_snd_433_);
v_a_439_ = v___x_452_;
goto v___jp_438_;
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_del_object(v___x_449_);
lean_del_object(v___x_435_);
lean_dec(v_snd_433_);
lean_dec(v_mvarId_421_);
v_a_526_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_454_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_454_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
v___jp_438_:
{
lean_object* v___x_441_; 
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v_a_439_);
lean_ctor_set(v___x_435_, 0, v___x_437_);
v___x_441_ = v___x_435_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_a_439_);
v___x_441_ = v_reuseFailAlloc_445_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
size_t v___x_442_; size_t v___x_443_; 
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_add(v_i_424_, v___x_442_);
v_i_424_ = v___x_443_;
v_b_425_ = v___x_441_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___boxed(lean_object* v_mvarId_537_, lean_object* v_as_538_, lean_object* v_sz_539_, lean_object* v_i_540_, lean_object* v_b_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
size_t v_sz_boxed_547_; size_t v_i_boxed_548_; lean_object* v_res_549_; 
v_sz_boxed_547_ = lean_unbox_usize(v_sz_539_);
lean_dec(v_sz_539_);
v_i_boxed_548_ = lean_unbox_usize(v_i_540_);
lean_dec(v_i_540_);
v_res_549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(v_mvarId_537_, v_as_538_, v_sz_boxed_547_, v_i_boxed_548_, v_b_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec_ref(v_as_538_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(lean_object* v_mvarId_550_, lean_object* v_as_551_, size_t v_sz_552_, size_t v_i_553_, lean_object* v_b_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
uint8_t v___x_560_; 
v___x_560_ = lean_usize_dec_lt(v_i_553_, v_sz_552_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; 
lean_dec(v_mvarId_550_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v_b_554_);
return v___x_561_;
}
else
{
lean_object* v_snd_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_664_; 
v_snd_562_ = lean_ctor_get(v_b_554_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_b_554_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_b_554_, 0);
lean_dec(v_unused_665_);
v___x_564_ = v_b_554_;
v_isShared_565_ = v_isSharedCheck_664_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_snd_562_);
lean_dec(v_b_554_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_664_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v_a_568_; lean_object* v_a_575_; 
v___x_566_ = lean_box(0);
v_a_575_ = lean_array_uget(v_as_551_, v_i_553_);
if (lean_obj_tag(v_a_575_) == 0)
{
v_a_568_ = v_snd_562_;
goto v___jp_567_;
}
else
{
lean_object* v_val_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_663_; 
v_val_576_ = lean_ctor_get(v_a_575_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v_a_575_);
if (v_isSharedCheck_663_ == 0)
{
v___x_578_ = v_a_575_;
v_isShared_579_ = v_isSharedCheck_663_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_val_576_);
lean_dec(v_a_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_663_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_580_ = lean_box(0);
v___x_581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0));
v___x_582_ = l_Lean_LocalDecl_type(v_val_576_);
lean_dec(v_val_576_);
v___x_583_ = l_Lean_Meta_matchEq_x3f(v___x_582_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
if (lean_obj_tag(v_a_584_) == 1)
{
lean_object* v_val_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_654_; 
v_val_585_ = lean_ctor_get(v_a_584_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v_a_584_);
if (v_isSharedCheck_654_ == 0)
{
v___x_587_ = v_a_584_;
v_isShared_588_ = v_isSharedCheck_654_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_val_585_);
lean_dec(v_a_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_654_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v_snd_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_652_; 
v_snd_589_ = lean_ctor_get(v_val_585_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v_val_585_);
if (v_isSharedCheck_652_ == 0)
{
lean_object* v_unused_653_; 
v_unused_653_ = lean_ctor_get(v_val_585_, 0);
lean_dec(v_unused_653_);
v___x_591_ = v_val_585_;
v_isShared_592_ = v_isSharedCheck_652_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_snd_589_);
lean_dec(v_val_585_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_652_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v_fst_593_; lean_object* v_snd_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_651_; 
v_fst_593_ = lean_ctor_get(v_snd_589_, 0);
v_snd_594_ = lean_ctor_get(v_snd_589_, 1);
v_isSharedCheck_651_ = !lean_is_exclusive(v_snd_589_);
if (v_isSharedCheck_651_ == 0)
{
v___x_596_ = v_snd_589_;
v_isShared_597_ = v_isSharedCheck_651_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_snd_594_);
lean_inc(v_fst_593_);
lean_dec(v_snd_589_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_651_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint8_t v___x_598_; 
v___x_598_ = l_Lean_Expr_isFVar(v_fst_593_);
if (v___x_598_ == 0)
{
lean_del_object(v___x_596_);
lean_dec(v_snd_594_);
lean_dec(v_fst_593_);
lean_del_object(v___x_591_);
lean_del_object(v___x_587_);
lean_del_object(v___x_578_);
lean_dec(v_snd_562_);
v_a_568_ = v___x_581_;
goto v___jp_567_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = l_Lean_Expr_fvarId_x21(v_fst_593_);
lean_dec(v_fst_593_);
lean_inc(v___x_599_);
v___x_600_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_594_, v___x_599_, v___y_556_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; uint8_t v___x_602_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_600_, 1);
v___x_602_ = lean_unbox(v_a_601_);
lean_dec(v_a_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
lean_inc(v_mvarId_550_);
v___x_603_ = l_Lean_Meta_subst_x3f(v_mvarId_550_, v___x_599_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_634_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_634_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_634_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_634_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
if (lean_obj_tag(v_a_604_) == 0)
{
lean_del_object(v___x_606_);
lean_del_object(v___x_596_);
lean_del_object(v___x_591_);
lean_del_object(v___x_587_);
lean_del_object(v___x_578_);
lean_dec(v_snd_562_);
v_a_568_ = v___x_581_;
goto v___jp_567_;
}
else
{
lean_object* v_val_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_633_; 
lean_del_object(v___x_564_);
lean_dec(v_mvarId_550_);
v_val_608_ = lean_ctor_get(v_a_604_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_a_604_);
if (v_isSharedCheck_633_ == 0)
{
v___x_610_ = v_a_604_;
v_isShared_611_ = v_isSharedCheck_633_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_val_608_);
lean_dec(v_a_604_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_633_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_612_ = lean_unsigned_to_nat(1u);
v___x_613_ = lean_mk_empty_array_with_capacity(v___x_612_);
v___x_614_ = lean_array_push(v___x_613_, v_val_608_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_614_);
v___x_616_ = v___x_610_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_632_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_618_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_580_);
lean_ctor_set(v___x_596_, 0, v___x_616_);
v___x_618_ = v___x_596_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_616_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_580_);
v___x_618_ = v_reuseFailAlloc_631_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_620_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 0);
lean_ctor_set(v___x_578_, 0, v___x_618_);
v___x_620_ = v___x_578_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_630_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_620_);
v___x_622_ = v___x_587_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_629_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_624_; 
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 1, v_snd_562_);
lean_ctor_set(v___x_591_, 0, v___x_622_);
v___x_624_ = v___x_591_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_snd_562_);
v___x_624_ = v_reuseFailAlloc_628_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_624_);
v___x_626_ = v___x_606_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
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
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_del_object(v___x_596_);
lean_del_object(v___x_591_);
lean_del_object(v___x_587_);
lean_del_object(v___x_578_);
lean_del_object(v___x_564_);
lean_dec(v_snd_562_);
lean_dec(v_mvarId_550_);
v_a_635_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_603_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_603_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
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
else
{
lean_dec(v___x_599_);
lean_del_object(v___x_596_);
lean_del_object(v___x_591_);
lean_del_object(v___x_587_);
lean_del_object(v___x_578_);
lean_dec(v_snd_562_);
v_a_568_ = v___x_581_;
goto v___jp_567_;
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v___x_599_);
lean_del_object(v___x_596_);
lean_del_object(v___x_591_);
lean_del_object(v___x_587_);
lean_del_object(v___x_578_);
lean_del_object(v___x_564_);
lean_dec(v_snd_562_);
lean_dec(v_mvarId_550_);
v_a_643_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_600_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_600_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
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
lean_dec(v_a_584_);
lean_del_object(v___x_578_);
lean_dec(v_snd_562_);
v_a_568_ = v___x_581_;
goto v___jp_567_;
}
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_del_object(v___x_578_);
lean_del_object(v___x_564_);
lean_dec(v_snd_562_);
lean_dec(v_mvarId_550_);
v_a_655_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_583_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_583_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
v___jp_567_:
{
lean_object* v___x_570_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v_a_568_);
lean_ctor_set(v___x_564_, 0, v___x_566_);
v___x_570_ = v___x_564_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_566_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_a_568_);
v___x_570_ = v_reuseFailAlloc_574_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
size_t v___x_571_; size_t v___x_572_; lean_object* v___x_573_; 
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_add(v_i_553_, v___x_571_);
v___x_573_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(v_mvarId_550_, v_as_551_, v_sz_552_, v___x_572_, v___x_570_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
return v___x_573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4___boxed(lean_object* v_mvarId_666_, lean_object* v_as_667_, lean_object* v_sz_668_, lean_object* v_i_669_, lean_object* v_b_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
size_t v_sz_boxed_676_; size_t v_i_boxed_677_; lean_object* v_res_678_; 
v_sz_boxed_676_ = lean_unbox_usize(v_sz_668_);
lean_dec(v_sz_668_);
v_i_boxed_677_ = lean_unbox_usize(v_i_669_);
lean_dec(v_i_669_);
v_res_678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(v_mvarId_666_, v_as_667_, v_sz_boxed_676_, v_i_boxed_677_, v_b_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec_ref(v_as_667_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(lean_object* v_init_679_, lean_object* v_mvarId_680_, lean_object* v_n_681_, lean_object* v_b_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
if (lean_obj_tag(v_n_681_) == 0)
{
lean_object* v_cs_688_; lean_object* v___x_689_; lean_object* v___x_690_; size_t v_sz_691_; size_t v___x_692_; lean_object* v___x_693_; 
v_cs_688_ = lean_ctor_get(v_n_681_, 0);
v___x_689_ = lean_box(0);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v_b_682_);
v_sz_691_ = lean_array_size(v_cs_688_);
v___x_692_ = ((size_t)0ULL);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(v_init_679_, v_mvarId_680_, v_cs_688_, v_sz_691_, v___x_692_, v___x_690_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_708_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_708_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_708_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_708_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_fst_698_; 
v_fst_698_ = lean_ctor_get(v_a_694_, 0);
if (lean_obj_tag(v_fst_698_) == 0)
{
lean_object* v_snd_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v_snd_699_ = lean_ctor_get(v_a_694_, 1);
lean_inc(v_snd_699_);
lean_dec(v_a_694_);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v_snd_699_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_700_);
v___x_702_ = v___x_696_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
else
{
lean_object* v_val_704_; lean_object* v___x_706_; 
lean_inc_ref(v_fst_698_);
lean_dec(v_a_694_);
v_val_704_ = lean_ctor_get(v_fst_698_, 0);
lean_inc(v_val_704_);
lean_dec_ref_known(v_fst_698_, 1);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v_val_704_);
v___x_706_ = v___x_696_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_val_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
v_a_709_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_693_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_693_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
else
{
lean_object* v_vs_717_; lean_object* v___x_718_; lean_object* v___x_719_; size_t v_sz_720_; size_t v___x_721_; lean_object* v___x_722_; 
v_vs_717_ = lean_ctor_get(v_n_681_, 0);
v___x_718_ = lean_box(0);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
lean_ctor_set(v___x_719_, 1, v_b_682_);
v_sz_720_ = lean_array_size(v_vs_717_);
v___x_721_ = ((size_t)0ULL);
v___x_722_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(v_mvarId_680_, v_vs_717_, v_sz_720_, v___x_721_, v___x_719_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_737_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_737_ == 0)
{
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_737_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_737_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_fst_727_; 
v_fst_727_ = lean_ctor_get(v_a_723_, 0);
if (lean_obj_tag(v_fst_727_) == 0)
{
lean_object* v_snd_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v_snd_728_ = lean_ctor_get(v_a_723_, 1);
lean_inc(v_snd_728_);
lean_dec(v_a_723_);
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_snd_728_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_729_);
v___x_731_ = v___x_725_;
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
else
{
lean_object* v_val_733_; lean_object* v___x_735_; 
lean_inc_ref(v_fst_727_);
lean_dec(v_a_723_);
v_val_733_ = lean_ctor_get(v_fst_727_, 0);
lean_inc(v_val_733_);
lean_dec_ref_known(v_fst_727_, 1);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v_val_733_);
v___x_735_ = v___x_725_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_val_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
v_a_738_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_722_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_722_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(lean_object* v_init_746_, lean_object* v_mvarId_747_, lean_object* v_as_748_, size_t v_sz_749_, size_t v_i_750_, lean_object* v_b_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
uint8_t v___x_757_; 
v___x_757_ = lean_usize_dec_lt(v_i_750_, v_sz_749_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
lean_dec(v_mvarId_747_);
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v_b_751_);
return v___x_758_;
}
else
{
lean_object* v_snd_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_793_; 
v_snd_759_ = lean_ctor_get(v_b_751_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v_b_751_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_b_751_, 0);
lean_dec(v_unused_794_);
v___x_761_ = v_b_751_;
v_isShared_762_ = v_isSharedCheck_793_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_snd_759_);
lean_dec(v_b_751_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_793_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v_a_764_; lean_object* v___x_765_; 
v___x_763_ = lean_box(0);
v_a_764_ = lean_array_uget_borrowed(v_as_748_, v_i_750_);
lean_inc(v_snd_759_);
lean_inc(v_mvarId_747_);
v___x_765_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_746_, v_mvarId_747_, v_a_764_, v_snd_759_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_784_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_784_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_784_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_784_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
if (lean_obj_tag(v_a_766_) == 0)
{
lean_object* v___x_770_; lean_object* v___x_772_; 
lean_dec(v_mvarId_747_);
v___x_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_770_, 0, v_a_766_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_770_);
v___x_772_ = v___x_761_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_770_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_snd_759_);
v___x_772_ = v_reuseFailAlloc_776_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_774_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_772_);
v___x_774_ = v___x_768_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; 
lean_del_object(v___x_768_);
lean_dec(v_snd_759_);
v_a_777_ = lean_ctor_get(v_a_766_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v_a_766_, 1);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 1, v_a_777_);
lean_ctor_set(v___x_761_, 0, v___x_763_);
v___x_779_ = v___x_761_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_763_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_a_777_);
v___x_779_ = v_reuseFailAlloc_783_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
size_t v___x_780_; size_t v___x_781_; 
v___x_780_ = ((size_t)1ULL);
v___x_781_ = lean_usize_add(v_i_750_, v___x_780_);
v_i_750_ = v___x_781_;
v_b_751_ = v___x_779_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_del_object(v___x_761_);
lean_dec(v_snd_759_);
lean_dec(v_mvarId_747_);
v_a_785_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_765_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_765_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3___boxed(lean_object* v_init_795_, lean_object* v_mvarId_796_, lean_object* v_as_797_, lean_object* v_sz_798_, lean_object* v_i_799_, lean_object* v_b_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
size_t v_sz_boxed_806_; size_t v_i_boxed_807_; lean_object* v_res_808_; 
v_sz_boxed_806_ = lean_unbox_usize(v_sz_798_);
lean_dec(v_sz_798_);
v_i_boxed_807_ = lean_unbox_usize(v_i_799_);
lean_dec(v_i_799_);
v_res_808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(v_init_795_, v_mvarId_796_, v_as_797_, v_sz_boxed_806_, v_i_boxed_807_, v_b_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec_ref(v_as_797_);
lean_dec_ref(v_init_795_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1___boxed(lean_object* v_init_809_, lean_object* v_mvarId_810_, lean_object* v_n_811_, lean_object* v_b_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_809_, v_mvarId_810_, v_n_811_, v_b_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec_ref(v_n_811_);
lean_dec_ref(v_init_809_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(lean_object* v_mvarId_822_, lean_object* v_as_823_, size_t v_sz_824_, size_t v_i_825_, lean_object* v_b_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
uint8_t v___x_832_; 
v___x_832_ = lean_usize_dec_lt(v_i_825_, v_sz_824_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
lean_dec(v_mvarId_822_);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v_b_826_);
return v___x_833_;
}
else
{
lean_object* v_snd_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_929_; 
v_snd_834_ = lean_ctor_get(v_b_826_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_b_826_);
if (v_isSharedCheck_929_ == 0)
{
lean_object* v_unused_930_; 
v_unused_930_ = lean_ctor_get(v_b_826_, 0);
lean_dec(v_unused_930_);
v___x_836_ = v_b_826_;
v_isShared_837_ = v_isSharedCheck_929_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_snd_834_);
lean_dec(v_b_826_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_929_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_838_; lean_object* v_a_840_; lean_object* v_a_847_; 
v___x_838_ = lean_box(0);
v_a_847_ = lean_array_uget_borrowed(v_as_823_, v_i_825_);
if (lean_obj_tag(v_a_847_) == 0)
{
v_a_840_ = v_snd_834_;
goto v___jp_839_;
}
else
{
lean_object* v_val_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v_val_848_ = lean_ctor_get(v_a_847_, 0);
v___x_849_ = lean_box(0);
v___x_850_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0));
v___x_851_ = l_Lean_LocalDecl_type(v_val_848_);
v___x_852_ = l_Lean_Meta_matchEq_x3f(v___x_851_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; 
v_a_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_852_, 1);
if (lean_obj_tag(v_a_853_) == 1)
{
lean_object* v_val_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_920_; 
v_val_854_ = lean_ctor_get(v_a_853_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v_a_853_);
if (v_isSharedCheck_920_ == 0)
{
v___x_856_ = v_a_853_;
v_isShared_857_ = v_isSharedCheck_920_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_val_854_);
lean_dec(v_a_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_920_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v_snd_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_918_; 
v_snd_858_ = lean_ctor_get(v_val_854_, 1);
v_isSharedCheck_918_ = !lean_is_exclusive(v_val_854_);
if (v_isSharedCheck_918_ == 0)
{
lean_object* v_unused_919_; 
v_unused_919_ = lean_ctor_get(v_val_854_, 0);
lean_dec(v_unused_919_);
v___x_860_ = v_val_854_;
v_isShared_861_ = v_isSharedCheck_918_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_snd_858_);
lean_dec(v_val_854_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_918_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v_fst_862_; lean_object* v_snd_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_917_; 
v_fst_862_ = lean_ctor_get(v_snd_858_, 0);
v_snd_863_ = lean_ctor_get(v_snd_858_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v_snd_858_);
if (v_isSharedCheck_917_ == 0)
{
v___x_865_ = v_snd_858_;
v_isShared_866_ = v_isSharedCheck_917_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_snd_863_);
lean_inc(v_fst_862_);
lean_dec(v_snd_858_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_917_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
uint8_t v___x_867_; 
v___x_867_ = l_Lean_Expr_isFVar(v_fst_862_);
if (v___x_867_ == 0)
{
lean_del_object(v___x_865_);
lean_dec(v_snd_863_);
lean_dec(v_fst_862_);
lean_del_object(v___x_860_);
lean_del_object(v___x_856_);
lean_dec(v_snd_834_);
v_a_840_ = v___x_850_;
goto v___jp_839_;
}
else
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = l_Lean_Expr_fvarId_x21(v_fst_862_);
lean_dec(v_fst_862_);
lean_inc(v___x_868_);
v___x_869_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_863_, v___x_868_, v___y_828_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; uint8_t v___x_871_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = lean_unbox(v_a_870_);
lean_dec(v_a_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
lean_inc(v_mvarId_822_);
v___x_872_ = l_Lean_Meta_subst_x3f(v_mvarId_822_, v___x_868_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_900_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_900_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_900_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_900_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
if (lean_obj_tag(v_a_873_) == 0)
{
lean_del_object(v___x_875_);
lean_del_object(v___x_865_);
lean_del_object(v___x_860_);
lean_del_object(v___x_856_);
lean_dec(v_snd_834_);
v_a_840_ = v___x_850_;
goto v___jp_839_;
}
else
{
lean_object* v_val_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_899_; 
lean_del_object(v___x_836_);
lean_dec(v_mvarId_822_);
v_val_877_ = lean_ctor_get(v_a_873_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v_a_873_);
if (v_isSharedCheck_899_ == 0)
{
v___x_879_ = v_a_873_;
v_isShared_880_ = v_isSharedCheck_899_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_val_877_);
lean_dec(v_a_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_899_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_mk_empty_array_with_capacity(v___x_881_);
v___x_883_ = lean_array_push(v___x_882_, v_val_877_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_883_);
v___x_885_ = v___x_879_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_898_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_887_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 1, v___x_849_);
lean_ctor_set(v___x_865_, 0, v___x_885_);
v___x_887_ = v___x_865_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v___x_849_);
v___x_887_ = v_reuseFailAlloc_897_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_889_; 
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 0, v___x_887_);
v___x_889_ = v___x_856_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_896_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_891_; 
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 1, v_snd_834_);
lean_ctor_set(v___x_860_, 0, v___x_889_);
v___x_891_ = v___x_860_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_889_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_snd_834_);
v___x_891_ = v_reuseFailAlloc_895_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_893_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_891_);
v___x_893_ = v___x_875_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
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
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_del_object(v___x_865_);
lean_del_object(v___x_860_);
lean_del_object(v___x_856_);
lean_del_object(v___x_836_);
lean_dec(v_snd_834_);
lean_dec(v_mvarId_822_);
v_a_901_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_872_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_872_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_dec(v___x_868_);
lean_del_object(v___x_865_);
lean_del_object(v___x_860_);
lean_del_object(v___x_856_);
lean_dec(v_snd_834_);
v_a_840_ = v___x_850_;
goto v___jp_839_;
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v___x_868_);
lean_del_object(v___x_865_);
lean_del_object(v___x_860_);
lean_del_object(v___x_856_);
lean_del_object(v___x_836_);
lean_dec(v_snd_834_);
lean_dec(v_mvarId_822_);
v_a_909_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_869_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_869_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
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
lean_dec(v_a_853_);
lean_dec(v_snd_834_);
v_a_840_ = v___x_850_;
goto v___jp_839_;
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_del_object(v___x_836_);
lean_dec(v_snd_834_);
lean_dec(v_mvarId_822_);
v_a_921_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_852_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_852_);
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
v___jp_839_:
{
lean_object* v___x_842_; 
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v_a_840_);
lean_ctor_set(v___x_836_, 0, v___x_838_);
v___x_842_ = v___x_836_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_a_840_);
v___x_842_ = v_reuseFailAlloc_846_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
size_t v___x_843_; size_t v___x_844_; 
v___x_843_ = ((size_t)1ULL);
v___x_844_ = lean_usize_add(v_i_825_, v___x_843_);
v_i_825_ = v___x_844_;
v_b_826_ = v___x_842_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___boxed(lean_object* v_mvarId_931_, lean_object* v_as_932_, lean_object* v_sz_933_, lean_object* v_i_934_, lean_object* v_b_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
size_t v_sz_boxed_941_; size_t v_i_boxed_942_; lean_object* v_res_943_; 
v_sz_boxed_941_ = lean_unbox_usize(v_sz_933_);
lean_dec(v_sz_933_);
v_i_boxed_942_ = lean_unbox_usize(v_i_934_);
lean_dec(v_i_934_);
v_res_943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(v_mvarId_931_, v_as_932_, v_sz_boxed_941_, v_i_boxed_942_, v_b_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec_ref(v_as_932_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(lean_object* v_mvarId_944_, lean_object* v_as_945_, size_t v_sz_946_, size_t v_i_947_, lean_object* v_b_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
uint8_t v___x_954_; 
v___x_954_ = lean_usize_dec_lt(v_i_947_, v_sz_946_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; 
lean_dec(v_mvarId_944_);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v_b_948_);
return v___x_955_;
}
else
{
lean_object* v_snd_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_1051_; 
v_snd_956_ = lean_ctor_get(v_b_948_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_b_948_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v_b_948_, 0);
lean_dec(v_unused_1052_);
v___x_958_ = v_b_948_;
v_isShared_959_ = v_isSharedCheck_1051_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_snd_956_);
lean_dec(v_b_948_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_1051_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v_a_962_; lean_object* v_a_969_; 
v___x_960_ = lean_box(0);
v_a_969_ = lean_array_uget_borrowed(v_as_945_, v_i_947_);
if (lean_obj_tag(v_a_969_) == 0)
{
v_a_962_ = v_snd_956_;
goto v___jp_961_;
}
else
{
lean_object* v_val_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_val_970_ = lean_ctor_get(v_a_969_, 0);
v___x_971_ = lean_box(0);
v___x_972_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0));
v___x_973_ = l_Lean_LocalDecl_type(v_val_970_);
v___x_974_ = l_Lean_Meta_matchEq_x3f(v___x_973_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
if (lean_obj_tag(v_a_975_) == 1)
{
lean_object* v_val_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1042_; 
v_val_976_ = lean_ctor_get(v_a_975_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_a_975_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_978_ = v_a_975_;
v_isShared_979_ = v_isSharedCheck_1042_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_val_976_);
lean_dec(v_a_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1042_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_snd_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1040_; 
v_snd_980_ = lean_ctor_get(v_val_976_, 1);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_val_976_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; 
v_unused_1041_ = lean_ctor_get(v_val_976_, 0);
lean_dec(v_unused_1041_);
v___x_982_ = v_val_976_;
v_isShared_983_ = v_isSharedCheck_1040_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_snd_980_);
lean_dec(v_val_976_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1040_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1039_; 
v_fst_984_ = lean_ctor_get(v_snd_980_, 0);
v_snd_985_ = lean_ctor_get(v_snd_980_, 1);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_snd_980_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_987_ = v_snd_980_;
v_isShared_988_ = v_isSharedCheck_1039_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v_snd_980_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1039_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
uint8_t v___x_989_; 
v___x_989_ = l_Lean_Expr_isFVar(v_fst_984_);
if (v___x_989_ == 0)
{
lean_del_object(v___x_987_);
lean_dec(v_snd_985_);
lean_dec(v_fst_984_);
lean_del_object(v___x_982_);
lean_del_object(v___x_978_);
lean_dec(v_snd_956_);
v_a_962_ = v___x_972_;
goto v___jp_961_;
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = l_Lean_Expr_fvarId_x21(v_fst_984_);
lean_dec(v_fst_984_);
lean_inc(v___x_990_);
v___x_991_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_985_, v___x_990_, v___y_950_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; uint8_t v___x_993_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = lean_unbox(v_a_992_);
lean_dec(v_a_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; 
lean_inc(v_mvarId_944_);
v___x_994_ = l_Lean_Meta_subst_x3f(v_mvarId_944_, v___x_990_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1022_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1022_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1022_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
if (lean_obj_tag(v_a_995_) == 0)
{
lean_del_object(v___x_997_);
lean_del_object(v___x_987_);
lean_del_object(v___x_982_);
lean_del_object(v___x_978_);
lean_dec(v_snd_956_);
v_a_962_ = v___x_972_;
goto v___jp_961_;
}
else
{
lean_object* v_val_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1021_; 
lean_del_object(v___x_958_);
lean_dec(v_mvarId_944_);
v_val_999_ = lean_ctor_get(v_a_995_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_a_995_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1001_ = v_a_995_;
v_isShared_1002_ = v_isSharedCheck_1021_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_val_999_);
lean_dec(v_a_995_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1021_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_mk_empty_array_with_capacity(v___x_1003_);
v___x_1005_ = lean_array_push(v___x_1004_, v_val_999_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1005_);
v___x_1007_ = v___x_1001_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1005_);
v___x_1007_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
lean_object* v___x_1009_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v___x_971_);
lean_ctor_set(v___x_987_, 0, v___x_1007_);
v___x_1009_ = v___x_987_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___x_971_);
v___x_1009_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
lean_object* v___x_1011_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_1009_);
v___x_1011_ = v___x_978_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1013_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 1, v_snd_956_);
lean_ctor_set(v___x_982_, 0, v___x_1011_);
v___x_1013_ = v___x_982_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_snd_956_);
v___x_1013_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1015_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1013_);
v___x_1015_ = v___x_997_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
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
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_del_object(v___x_987_);
lean_del_object(v___x_982_);
lean_del_object(v___x_978_);
lean_del_object(v___x_958_);
lean_dec(v_snd_956_);
lean_dec(v_mvarId_944_);
v_a_1023_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_994_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_994_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
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
else
{
lean_dec(v___x_990_);
lean_del_object(v___x_987_);
lean_del_object(v___x_982_);
lean_del_object(v___x_978_);
lean_dec(v_snd_956_);
v_a_962_ = v___x_972_;
goto v___jp_961_;
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec(v___x_990_);
lean_del_object(v___x_987_);
lean_del_object(v___x_982_);
lean_del_object(v___x_978_);
lean_del_object(v___x_958_);
lean_dec(v_snd_956_);
lean_dec(v_mvarId_944_);
v_a_1031_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_991_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_991_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
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
lean_dec(v_a_975_);
lean_dec(v_snd_956_);
v_a_962_ = v___x_972_;
goto v___jp_961_;
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_del_object(v___x_958_);
lean_dec(v_snd_956_);
lean_dec(v_mvarId_944_);
v_a_1043_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_974_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_974_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
v___jp_961_:
{
lean_object* v___x_964_; 
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 1, v_a_962_);
lean_ctor_set(v___x_958_, 0, v___x_960_);
v___x_964_ = v___x_958_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_a_962_);
v___x_964_ = v_reuseFailAlloc_968_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
size_t v___x_965_; size_t v___x_966_; lean_object* v___x_967_; 
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_add(v_i_947_, v___x_965_);
v___x_967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(v_mvarId_944_, v_as_945_, v_sz_946_, v___x_966_, v___x_964_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
return v___x_967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2___boxed(lean_object* v_mvarId_1053_, lean_object* v_as_1054_, lean_object* v_sz_1055_, lean_object* v_i_1056_, lean_object* v_b_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
size_t v_sz_boxed_1063_; size_t v_i_boxed_1064_; lean_object* v_res_1065_; 
v_sz_boxed_1063_ = lean_unbox_usize(v_sz_1055_);
lean_dec(v_sz_1055_);
v_i_boxed_1064_ = lean_unbox_usize(v_i_1056_);
lean_dec(v_i_1056_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(v_mvarId_1053_, v_as_1054_, v_sz_boxed_1063_, v_i_boxed_1064_, v_b_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec_ref(v_as_1054_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(lean_object* v_mvarId_1066_, lean_object* v_t_1067_, lean_object* v_init_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_root_1074_; lean_object* v_tail_1075_; lean_object* v___x_1076_; 
v_root_1074_ = lean_ctor_get(v_t_1067_, 0);
v_tail_1075_ = lean_ctor_get(v_t_1067_, 1);
lean_inc(v_mvarId_1066_);
lean_inc_ref(v_init_1068_);
v___x_1076_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_1068_, v_mvarId_1066_, v_root_1074_, v_init_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec_ref(v_init_1068_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1113_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1079_ = v___x_1076_;
v_isShared_1080_ = v_isSharedCheck_1113_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1113_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
if (lean_obj_tag(v_a_1077_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; 
lean_dec(v_mvarId_1066_);
v_a_1081_ = lean_ctor_get(v_a_1077_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v_a_1077_, 1);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v_a_1081_);
v___x_1083_ = v___x_1079_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; size_t v_sz_1088_; size_t v___x_1089_; lean_object* v___x_1090_; 
lean_del_object(v___x_1079_);
v_a_1085_ = lean_ctor_get(v_a_1077_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v_a_1077_, 1);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v_a_1085_);
v_sz_1088_ = lean_array_size(v_tail_1075_);
v___x_1089_ = ((size_t)0ULL);
v___x_1090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(v_mvarId_1066_, v_tail_1075_, v_sz_1088_, v___x_1089_, v___x_1087_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1104_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v_fst_1095_; 
v_fst_1095_ = lean_ctor_get(v_a_1091_, 0);
if (lean_obj_tag(v_fst_1095_) == 0)
{
lean_object* v_snd_1096_; lean_object* v___x_1098_; 
v_snd_1096_ = lean_ctor_get(v_a_1091_, 1);
lean_inc(v_snd_1096_);
lean_dec(v_a_1091_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v_snd_1096_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_snd_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
else
{
lean_object* v_val_1100_; lean_object* v___x_1102_; 
lean_inc_ref(v_fst_1095_);
lean_dec(v_a_1091_);
v_val_1100_ = lean_ctor_get(v_fst_1095_, 0);
lean_inc(v_val_1100_);
lean_dec_ref_known(v_fst_1095_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v_val_1100_);
v___x_1102_ = v___x_1093_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_val_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_a_1105_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1090_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1090_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_mvarId_1066_);
v_a_1114_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1076_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1076_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1___boxed(lean_object* v_mvarId_1122_, lean_object* v_t_1123_, lean_object* v_init_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(v_mvarId_1122_, v_t_1123_, v_init_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec_ref(v_t_1123_);
return v_res_1130_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1));
v___x_1136_ = l_Lean_stringToMessageData(v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(lean_object* v_mvarId_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_lctx_1143_; lean_object* v_decls_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_lctx_1143_ = lean_ctor_get(v___y_1138_, 2);
v_decls_1144_ = lean_ctor_get(v_lctx_1143_, 1);
v___x_1145_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0));
v___x_1146_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(v_mvarId_1137_, v_decls_1144_, v___x_1145_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1158_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v_fst_1151_; 
v_fst_1151_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_fst_1151_);
lean_dec(v_a_1147_);
if (lean_obj_tag(v_fst_1151_) == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_del_object(v___x_1149_);
v___x_1152_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2);
v___x_1153_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1152_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
return v___x_1153_;
}
else
{
lean_object* v_val_1154_; lean_object* v___x_1156_; 
v_val_1154_ = lean_ctor_get(v_fst_1151_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v_fst_1151_, 1);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v_val_1154_);
v___x_1156_ = v___x_1149_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_val_1154_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_a_1159_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1146_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1146_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed(lean_object* v_mvarId_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(v_mvarId_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(lean_object* v_mvarId_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v___f_1180_; lean_object* v___x_1181_; 
lean_inc(v_mvarId_1174_);
v___f_1180_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1180_, 0, v_mvarId_1174_);
v___x_1181_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_1174_, v___f_1180_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___boxed(lean_object* v_mvarId_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(v_mvarId_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(lean_object* v_x_1196_){
_start:
{
lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3));
v___x_1198_ = lean_name_eq(v_x_1196_, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed(lean_object* v_x_1199_){
_start:
{
uint8_t v_res_1200_; lean_object* v_r_1201_; 
v_res_1200_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(v_x_1199_);
lean_dec(v_x_1199_);
v_r_1201_ = lean_box(v_res_1200_);
return v_r_1201_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(lean_object* v_e_1202_){
_start:
{
lean_object* v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__3));
v___x_1204_ = l_Lean_Expr_isConstOf(v_e_1202_, v___x_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed(lean_object* v_e_1205_){
_start:
{
uint8_t v_res_1206_; lean_object* v_r_1207_; 
v_res_1206_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(v_e_1205_);
lean_dec_ref(v_e_1205_);
v_r_1207_ = lean_box(v_res_1206_);
return v_r_1207_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2));
v___x_1212_ = l_Lean_stringToMessageData(v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(lean_object* v_mvarId_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v___f_1219_; lean_object* v___f_1220_; lean_object* v___x_1221_; 
v___f_1219_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0));
v___f_1220_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1));
lean_inc(v_mvarId_1213_);
v___x_1221_ = l_Lean_MVarId_getType(v_mvarId_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v___x_1223_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___x_1221_, 1);
v___x_1223_ = lean_find_expr(v___f_1220_, v_a_1222_);
lean_dec(v_a_1222_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_mvarId_1213_);
v___x_1224_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3);
v___x_1225_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1224_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1225_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1225_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
else
{
lean_object* v___x_1234_; 
lean_dec_ref_known(v___x_1223_, 1);
v___x_1234_ = l_Lean_MVarId_deltaTarget(v_mvarId_1213_, v___f_1219_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
return v___x_1234_;
}
}
else
{
lean_object* v_a_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec(v_mvarId_1213_);
v_a_1235_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1221_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_a_1235_);
lean_dec(v___x_1221_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___boxed(lean_object* v_mvarId_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(v_mvarId_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_);
lean_dec(v_a_1247_);
lean_dec_ref(v_a_1246_);
lean_dec(v_a_1245_);
lean_dec_ref(v_a_1244_);
return v_res_1249_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = l_Lean_maxRecDepthErrorMessage;
v___x_1256_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
return v___x_1256_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3);
v___x_1258_ = l_Lean_MessageData_ofFormat(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1259_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4);
v___x_1260_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2));
v___x_1261_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v___x_1259_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(lean_object* v_ref_1262_){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v_ref_1262_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___boxed(lean_object* v_ref_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1267_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(lean_object* v_00_u03b1_1270_, lean_object* v_ref_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1271_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___boxed(lean_object* v_00_u03b1_1278_, lean_object* v_ref_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(v_00_u03b1_1278_, v_ref_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(lean_object* v_a_1286_, lean_object* v_____r_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = lean_mk_empty_array_with_capacity(v___x_1293_);
v___x_1295_ = lean_array_push(v___x_1294_, v_a_1286_);
v___x_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0___boxed(lean_object* v_a_1297_, lean_object* v_____r_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1297_, v_____r_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
return v_res_1304_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1305_; double v___x_1306_; 
v___x_1305_ = lean_unsigned_to_nat(0u);
v___x_1306_ = lean_float_of_nat(v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(lean_object* v_cls_1310_, lean_object* v_msg_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_ref_1317_; lean_object* v___x_1318_; lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1364_; 
v_ref_1317_ = lean_ctor_get(v___y_1314_, 2);
v___x_1318_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msg_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1364_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1364_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; lean_object* v_traceState_1324_; lean_object* v_env_1325_; lean_object* v_nextMacroScope_1326_; lean_object* v_ngen_1327_; lean_object* v_auxDeclNGen_1328_; lean_object* v_cache_1329_; lean_object* v_recordedDeps_1330_; lean_object* v_messages_1331_; lean_object* v_infoState_1332_; lean_object* v_snapshotTasks_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1363_; 
v___x_1323_ = lean_st_ref_take(v___y_1315_);
v_traceState_1324_ = lean_ctor_get(v___x_1323_, 4);
v_env_1325_ = lean_ctor_get(v___x_1323_, 0);
v_nextMacroScope_1326_ = lean_ctor_get(v___x_1323_, 1);
v_ngen_1327_ = lean_ctor_get(v___x_1323_, 2);
v_auxDeclNGen_1328_ = lean_ctor_get(v___x_1323_, 3);
v_cache_1329_ = lean_ctor_get(v___x_1323_, 5);
v_recordedDeps_1330_ = lean_ctor_get(v___x_1323_, 6);
v_messages_1331_ = lean_ctor_get(v___x_1323_, 7);
v_infoState_1332_ = lean_ctor_get(v___x_1323_, 8);
v_snapshotTasks_1333_ = lean_ctor_get(v___x_1323_, 9);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1335_ = v___x_1323_;
v_isShared_1336_ = v_isSharedCheck_1363_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_snapshotTasks_1333_);
lean_inc(v_infoState_1332_);
lean_inc(v_messages_1331_);
lean_inc(v_recordedDeps_1330_);
lean_inc(v_cache_1329_);
lean_inc(v_traceState_1324_);
lean_inc(v_auxDeclNGen_1328_);
lean_inc(v_ngen_1327_);
lean_inc(v_nextMacroScope_1326_);
lean_inc(v_env_1325_);
lean_dec(v___x_1323_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1363_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
uint64_t v_tid_1337_; lean_object* v_traces_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1362_; 
v_tid_1337_ = lean_ctor_get_uint64(v_traceState_1324_, sizeof(void*)*1);
v_traces_1338_ = lean_ctor_get(v_traceState_1324_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v_traceState_1324_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1340_ = v_traceState_1324_;
v_isShared_1341_ = v_isSharedCheck_1362_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_traces_1338_);
lean_dec(v_traceState_1324_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1362_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; double v___x_1344_; uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1342_ = lean_box(0);
v___x_1343_ = lean_box(0);
v___x_1344_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0);
v___x_1345_ = 0;
v___x_1346_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1));
v___x_1347_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1347_, 0, v_cls_1310_);
lean_ctor_set(v___x_1347_, 1, v___x_1343_);
lean_ctor_set(v___x_1347_, 2, v___x_1346_);
lean_ctor_set_float(v___x_1347_, sizeof(void*)*3, v___x_1344_);
lean_ctor_set_float(v___x_1347_, sizeof(void*)*3 + 8, v___x_1344_);
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*3 + 16, v___x_1345_);
v___x_1348_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2));
v___x_1349_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v_a_1319_);
lean_ctor_set(v___x_1349_, 2, v___x_1348_);
lean_inc(v_ref_1317_);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v_ref_1317_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = l_Lean_PersistentArray_push___redArg(v_traces_1338_, v___x_1350_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v___x_1351_);
v___x_1353_ = v___x_1340_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1351_);
lean_ctor_set_uint64(v_reuseFailAlloc_1361_, sizeof(void*)*1, v_tid_1337_);
v___x_1353_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1355_; 
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 4, v___x_1353_);
v___x_1355_ = v___x_1335_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_env_1325_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v_nextMacroScope_1326_);
lean_ctor_set(v_reuseFailAlloc_1360_, 2, v_ngen_1327_);
lean_ctor_set(v_reuseFailAlloc_1360_, 3, v_auxDeclNGen_1328_);
lean_ctor_set(v_reuseFailAlloc_1360_, 4, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1360_, 5, v_cache_1329_);
lean_ctor_set(v_reuseFailAlloc_1360_, 6, v_recordedDeps_1330_);
lean_ctor_set(v_reuseFailAlloc_1360_, 7, v_messages_1331_);
lean_ctor_set(v_reuseFailAlloc_1360_, 8, v_infoState_1332_);
lean_ctor_set(v_reuseFailAlloc_1360_, 9, v_snapshotTasks_1333_);
v___x_1355_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1356_ = lean_st_ref_put(v___y_1315_, v___x_1355_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 0, v___x_1342_);
v___x_1358_ = v___x_1321_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1342_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___boxed(lean_object* v_cls_1365_, lean_object* v_msg_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v_cls_1365_, v_msg_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
return v_res_1372_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0));
v___x_1375_ = l_Lean_stringToMessageData(v___x_1374_);
return v___x_1375_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2));
v___x_1378_ = l_Lean_stringToMessageData(v___x_1377_);
return v___x_1378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4));
v___x_1381_ = l_Lean_stringToMessageData(v___x_1380_);
return v___x_1381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10(void){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9));
v___x_1390_ = l_Lean_stringToMessageData(v___x_1389_);
return v___x_1390_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17(void){
_start:
{
lean_object* v_cls_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_cls_1401_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
v___x_1402_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16));
v___x_1403_ = l_Lean_Name_append(v___x_1402_, v_cls_1401_);
return v___x_1403_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18));
v___x_1406_ = l_Lean_stringToMessageData(v___x_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(lean_object* v_matchDeclName_1407_, lean_object* v_mvarId_1408_, lean_object* v_depth_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v_a_1420_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v_a_1436_; uint8_t v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v_a_1500_; uint8_t v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v_toCold_1726_; lean_object* v_currRecDepth_1727_; lean_object* v_ref_1728_; uint16_t v_optionFlags_1729_; uint8_t v_suppressElabErrors_1730_; uint8_t v_isRecordingDeps_1731_; lean_object* v_options_1732_; lean_object* v_maxRecDepth_1733_; lean_object* v_inheritedTraceOptions_1734_; lean_object* v_cls_1735_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v_toCold_1726_ = lean_ctor_get(v_a_1412_, 0);
v_currRecDepth_1727_ = lean_ctor_get(v_a_1412_, 1);
v_ref_1728_ = lean_ctor_get(v_a_1412_, 2);
v_optionFlags_1729_ = lean_ctor_get_uint16(v_a_1412_, sizeof(void*)*3);
v_suppressElabErrors_1730_ = lean_ctor_get_uint8(v_a_1412_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1731_ = lean_ctor_get_uint8(v_a_1412_, sizeof(void*)*3 + 3);
v_options_1732_ = lean_ctor_get(v_toCold_1726_, 2);
v_maxRecDepth_1733_ = lean_ctor_get(v_toCold_1726_, 3);
v_inheritedTraceOptions_1734_ = lean_ctor_get(v_toCold_1726_, 11);
v_cls_1735_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
v___x_1747_ = lean_unsigned_to_nat(0u);
v___x_1748_ = lean_nat_dec_eq(v_maxRecDepth_1733_, v___x_1747_);
if (v___x_1748_ == 0)
{
uint8_t v___x_1749_; 
v___x_1749_ = lean_nat_dec_eq(v_currRecDepth_1727_, v_maxRecDepth_1733_);
if (v___x_1749_ == 0)
{
goto v___jp_1736_;
}
else
{
lean_object* v___x_1750_; 
lean_dec(v_mvarId_1408_);
lean_dec(v_matchDeclName_1407_);
lean_inc(v_ref_1728_);
v___x_1750_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1728_);
return v___x_1750_;
}
}
else
{
goto v___jp_1736_;
}
v___jp_1415_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = lean_array_get_size(v_a_1420_);
v___x_1423_ = lean_box(0);
v___x_1424_ = lean_nat_dec_lt(v___x_1421_, v___x_1422_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; 
lean_dec_ref(v_a_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v_matchDeclName_1407_);
v___x_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
return v___x_1425_;
}
else
{
size_t v___x_1426_; size_t v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = ((size_t)0ULL);
v___x_1427_ = lean_usize_of_nat(v___x_1422_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(v_depth_1409_, v_matchDeclName_1407_, v_a_1420_, v___x_1426_, v___x_1427_, v___x_1423_, v___y_1418_, v___y_1417_, v___y_1419_, v___y_1416_);
lean_dec_ref(v___y_1419_);
lean_dec_ref(v_a_1420_);
return v___x_1428_;
}
}
v___jp_1429_:
{
uint8_t v___x_1437_; 
v___x_1437_ = l_Lean_Exception_isInterrupt(v_a_1436_);
if (v___x_1437_ == 0)
{
uint8_t v___x_1438_; 
lean_inc_ref(v_a_1436_);
v___x_1438_ = l_Lean_Exception_isRuntime(v_a_1436_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
lean_dec_ref(v_a_1436_);
v___x_1439_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1433_, v___y_1431_, v___y_1430_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v___x_1440_; 
lean_dec_ref_known(v___x_1439_, 1);
v___x_1440_ = l_Lean_Meta_saveState___redArg(v___y_1431_, v___y_1430_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
lean_inc(v___y_1435_);
v___x_1442_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(v___y_1435_, v___y_1432_, v___y_1431_, v___y_1434_, v___y_1430_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v_a_1443_; 
lean_dec(v_a_1441_);
lean_dec(v___y_1435_);
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_a_1443_);
lean_dec_ref_known(v___x_1442_, 1);
v___y_1416_ = v___y_1430_;
v___y_1417_ = v___y_1431_;
v___y_1418_ = v___y_1432_;
v___y_1419_ = v___y_1434_;
v_a_1420_ = v_a_1443_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1481_; 
v_a_1444_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1446_ = v___x_1442_;
v_isShared_1447_ = v_isSharedCheck_1481_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1442_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1481_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
uint8_t v___x_1448_; 
v___x_1448_ = l_Lean_Exception_isInterrupt(v_a_1444_);
if (v___x_1448_ == 0)
{
uint8_t v___x_1449_; 
lean_inc(v_a_1444_);
v___x_1449_ = l_Lean_Exception_isRuntime(v_a_1444_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; 
lean_del_object(v___x_1446_);
lean_dec(v_a_1444_);
v___x_1450_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1441_, v___y_1431_, v___y_1430_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1473_; 
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; 
v_unused_1474_ = lean_ctor_get(v___x_1450_, 0);
lean_dec(v_unused_1474_);
v___x_1452_ = v___x_1450_;
v_isShared_1453_ = v_isSharedCheck_1473_;
goto v_resetjp_1451_;
}
else
{
lean_dec(v___x_1450_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1473_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1454_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1);
lean_inc(v_matchDeclName_1407_);
v___x_1455_ = l_Lean_MessageData_ofName(v_matchDeclName_1407_);
v___x_1456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3);
v___x_1458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
if (v_isShared_1453_ == 0)
{
lean_ctor_set_tag(v___x_1452_, 1);
lean_ctor_set(v___x_1452_, 0, v___y_1435_);
v___x_1460_ = v___x_1452_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___y_1435_);
v___x_1460_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1458_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1461_, v___y_1432_, v___y_1431_, v___y_1434_, v___y_1430_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___y_1416_ = v___y_1430_;
v___y_1417_ = v___y_1431_;
v___y_1418_ = v___y_1432_;
v___y_1419_ = v___y_1434_;
v_a_1420_ = v_a_1463_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
v_a_1464_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1462_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1462_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
}
else
{
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
return v___x_1450_;
}
}
else
{
lean_object* v___x_1476_; 
lean_dec(v_a_1441_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1447_ == 0)
{
v___x_1476_ = v___x_1446_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1444_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
else
{
lean_object* v___x_1479_; 
lean_dec(v_a_1441_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1447_ == 0)
{
v___x_1479_ = v___x_1446_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1444_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
v_a_1482_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1440_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1440_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_matchDeclName_1407_);
return v___x_1439_;
}
}
else
{
lean_object* v___x_1490_; 
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v_matchDeclName_1407_);
v___x_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_a_1436_);
return v___x_1490_;
}
}
else
{
lean_object* v___x_1491_; 
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v_matchDeclName_1407_);
v___x_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_a_1436_);
return v___x_1491_;
}
}
v___jp_1492_:
{
uint8_t v___x_1501_; 
v___x_1501_ = l_Lean_Exception_isInterrupt(v_a_1500_);
if (v___x_1501_ == 0)
{
uint8_t v___x_1502_; 
lean_inc_ref(v_a_1500_);
v___x_1502_ = l_Lean_Exception_isRuntime(v_a_1500_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; 
lean_dec_ref(v_a_1500_);
v___x_1503_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1496_, v___y_1495_, v___y_1494_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec_ref_known(v___x_1503_, 1);
v___x_1504_ = lean_box(0);
v___x_1505_ = l_Lean_Meta_saveState___redArg(v___y_1495_, v___y_1494_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1507_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
lean_inc(v___y_1498_);
v___x_1507_ = l_Lean_Meta_splitIfTarget_x3f(v___y_1498_, v___x_1504_, v___y_1493_, v___y_1497_, v___y_1495_, v___y_1499_, v___y_1494_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v___x_1507_, 1);
if (lean_obj_tag(v_a_1508_) == 1)
{
lean_object* v_val_1509_; lean_object* v_fst_1510_; lean_object* v_snd_1511_; lean_object* v_mvarId_1512_; lean_object* v_fvarId_1513_; lean_object* v___x_1514_; 
v_val_1509_ = lean_ctor_get(v_a_1508_, 0);
lean_inc(v_val_1509_);
lean_dec_ref_known(v_a_1508_, 1);
v_fst_1510_ = lean_ctor_get(v_val_1509_, 0);
lean_inc(v_fst_1510_);
v_snd_1511_ = lean_ctor_get(v_val_1509_, 1);
lean_inc(v_snd_1511_);
lean_dec(v_val_1509_);
v_mvarId_1512_ = lean_ctor_get(v_fst_1510_, 0);
lean_inc(v_mvarId_1512_);
v_fvarId_1513_ = lean_ctor_get(v_fst_1510_, 1);
lean_inc(v_fvarId_1513_);
lean_dec(v_fst_1510_);
v___x_1514_ = l_Lean_Meta_trySubst(v_mvarId_1512_, v_fvarId_1513_, v___y_1497_, v___y_1495_, v___y_1499_, v___y_1494_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v_mvarId_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec(v_a_1506_);
lean_dec(v___y_1498_);
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_a_1515_);
lean_dec_ref_known(v___x_1514_, 1);
v_mvarId_1516_ = lean_ctor_get(v_snd_1511_, 0);
lean_inc(v_mvarId_1516_);
lean_dec(v_snd_1511_);
v___x_1517_ = lean_unsigned_to_nat(2u);
v___x_1518_ = lean_mk_empty_array_with_capacity(v___x_1517_);
v___x_1519_ = lean_array_push(v___x_1518_, v_a_1515_);
v___x_1520_ = lean_array_push(v___x_1519_, v_mvarId_1516_);
v___y_1416_ = v___y_1494_;
v___y_1417_ = v___y_1495_;
v___y_1418_ = v___y_1497_;
v___y_1419_ = v___y_1499_;
v_a_1420_ = v___x_1520_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1521_; 
lean_dec(v_snd_1511_);
v_a_1521_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1514_, 1);
v___y_1430_ = v___y_1494_;
v___y_1431_ = v___y_1495_;
v___y_1432_ = v___y_1497_;
v___y_1433_ = v_a_1506_;
v___y_1434_ = v___y_1499_;
v___y_1435_ = v___y_1498_;
v_a_1436_ = v_a_1521_;
goto v___jp_1429_;
}
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
lean_dec(v_a_1508_);
v___x_1522_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5);
v___x_1523_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1522_, v___y_1497_, v___y_1495_, v___y_1499_, v___y_1494_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; 
lean_dec(v_a_1506_);
lean_dec(v___y_1498_);
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___y_1416_ = v___y_1494_;
v___y_1417_ = v___y_1495_;
v___y_1418_ = v___y_1497_;
v___y_1419_ = v___y_1499_;
v_a_1420_ = v_a_1524_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1525_; 
v_a_1525_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1523_, 1);
v___y_1430_ = v___y_1494_;
v___y_1431_ = v___y_1495_;
v___y_1432_ = v___y_1497_;
v___y_1433_ = v_a_1506_;
v___y_1434_ = v___y_1499_;
v___y_1435_ = v___y_1498_;
v_a_1436_ = v_a_1525_;
goto v___jp_1429_;
}
}
}
else
{
lean_object* v_a_1526_; 
v_a_1526_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1507_, 1);
v___y_1430_ = v___y_1494_;
v___y_1431_ = v___y_1495_;
v___y_1432_ = v___y_1497_;
v___y_1433_ = v_a_1506_;
v___y_1434_ = v___y_1499_;
v___y_1435_ = v___y_1498_;
v_a_1436_ = v_a_1526_;
goto v___jp_1429_;
}
}
else
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec(v_matchDeclName_1407_);
v_a_1527_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1505_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1505_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
else
{
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec(v_matchDeclName_1407_);
return v___x_1503_;
}
}
else
{
lean_object* v___x_1535_; 
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1496_);
lean_dec(v_matchDeclName_1407_);
v___x_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1535_, 0, v_a_1500_);
return v___x_1535_;
}
}
else
{
lean_object* v___x_1536_; 
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1496_);
lean_dec(v_matchDeclName_1407_);
v___x_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1536_, 0, v_a_1500_);
return v___x_1536_;
}
}
v___jp_1537_:
{
if (lean_obj_tag(v___y_1545_) == 0)
{
lean_object* v_a_1546_; 
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1541_);
v_a_1546_ = lean_ctor_get(v___y_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v___y_1545_, 1);
v___y_1416_ = v___y_1540_;
v___y_1417_ = v___y_1539_;
v___y_1418_ = v___y_1542_;
v___y_1419_ = v___y_1544_;
v_a_1420_ = v_a_1546_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1547_; 
v_a_1547_ = lean_ctor_get(v___y_1545_, 0);
lean_inc(v_a_1547_);
lean_dec_ref_known(v___y_1545_, 1);
v___y_1493_ = v___y_1538_;
v___y_1494_ = v___y_1540_;
v___y_1495_ = v___y_1539_;
v___y_1496_ = v___y_1541_;
v___y_1497_ = v___y_1542_;
v___y_1498_ = v___y_1543_;
v___y_1499_ = v___y_1544_;
v_a_1500_ = v_a_1547_;
goto v___jp_1492_;
}
}
v___jp_1548_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6));
v___x_1554_ = l_Lean_MVarId_modifyTargetEqLHS(v_mvarId_1408_, v___x_1553_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v_a_1555_; uint8_t v___x_1556_; lean_object* v___x_1557_; 
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v___x_1554_, 1);
v___x_1556_ = 1;
v___x_1557_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1559_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
lean_inc(v_a_1555_);
v___x_1559_ = l_Lean_MVarId_refl(v_a_1555_, v___x_1556_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v___x_1560_; 
lean_dec_ref_known(v___x_1559_, 1);
lean_dec(v_a_1558_);
lean_dec(v_a_1555_);
v___x_1560_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7));
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v___x_1560_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1561_; uint8_t v___x_1562_; 
v_a_1561_ = lean_ctor_get(v___x_1559_, 0);
v___x_1562_ = l_Lean_Exception_isInterrupt(v_a_1561_);
if (v___x_1562_ == 0)
{
uint8_t v___x_1563_; 
lean_inc(v_a_1561_);
v___x_1563_ = l_Lean_Exception_isRuntime(v_a_1561_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; 
lean_dec_ref_known(v___x_1559_, 1);
v___x_1564_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1558_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
lean_dec_ref_known(v___x_1564_, 1);
v___x_1565_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8));
v___x_1566_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1568_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1566_, 1);
lean_inc(v_a_1555_);
v___x_1568_ = l_Lean_MVarId_contradiction(v_a_1555_, v___x_1565_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v___x_1569_; 
lean_dec_ref_known(v___x_1568_, 1);
lean_dec(v_a_1567_);
lean_dec(v_a_1555_);
v___x_1569_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7));
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v___x_1569_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1570_; uint8_t v___x_1571_; 
v_a_1570_ = lean_ctor_get(v___x_1568_, 0);
v___x_1571_ = l_Lean_Exception_isInterrupt(v_a_1570_);
if (v___x_1571_ == 0)
{
uint8_t v___x_1572_; 
lean_inc(v_a_1570_);
v___x_1572_ = l_Lean_Exception_isRuntime(v_a_1570_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_dec_ref_known(v___x_1568_, 1);
v___x_1573_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1567_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v___x_1574_; 
lean_dec_ref_known(v___x_1573_, 1);
v___x_1574_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1576_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
lean_inc(v_a_1555_);
v___x_1576_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(v_a_1555_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
lean_dec(v_a_1575_);
lean_dec(v_a_1555_);
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = lean_unsigned_to_nat(1u);
v___x_1579_ = lean_mk_empty_array_with_capacity(v___x_1578_);
v___x_1580_ = lean_array_push(v___x_1579_, v_a_1577_);
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v___x_1580_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1693_; 
v_a_1581_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1583_ = v___x_1576_;
v_isShared_1584_ = v_isSharedCheck_1693_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1576_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1693_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
uint8_t v___x_1585_; 
v___x_1585_ = l_Lean_Exception_isInterrupt(v_a_1581_);
if (v___x_1585_ == 0)
{
uint8_t v___x_1586_; 
lean_inc(v_a_1581_);
v___x_1586_ = l_Lean_Exception_isRuntime(v_a_1581_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
lean_del_object(v___x_1583_);
lean_dec(v_a_1581_);
v___x_1587_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1575_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v___x_1588_; 
lean_dec_ref_known(v___x_1587_, 1);
v___x_1588_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1590_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1588_, 1);
lean_inc(v_a_1555_);
v___x_1590_ = l_Lean_Meta_casesOnStuckLHS(v_a_1555_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; 
lean_dec(v_a_1589_);
lean_dec(v_a_1555_);
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v_a_1591_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1678_; 
v_a_1592_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1594_ = v___x_1590_;
v_isShared_1595_ = v_isSharedCheck_1678_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1590_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1678_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
uint8_t v___x_1596_; 
v___x_1596_ = l_Lean_Exception_isInterrupt(v_a_1592_);
if (v___x_1596_ == 0)
{
uint8_t v___x_1597_; 
lean_inc(v_a_1592_);
v___x_1597_ = l_Lean_Exception_isRuntime(v_a_1592_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_del_object(v___x_1594_);
lean_dec(v_a_1592_);
v___x_1598_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1589_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v___x_1599_; 
lean_dec_ref_known(v___x_1598_, 1);
v___x_1599_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1601_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
lean_inc(v_a_1555_);
v___x_1601_ = l_Lean_Meta_reduceSparseCasesOn(v_a_1555_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; 
lean_dec(v_a_1600_);
lean_dec(v_a_1555_);
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
lean_dec_ref_known(v___x_1601_, 1);
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v_a_1602_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1663_; 
v_a_1603_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1605_ = v___x_1601_;
v_isShared_1606_ = v_isSharedCheck_1663_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1601_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1663_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
uint8_t v___x_1607_; 
v___x_1607_ = l_Lean_Exception_isInterrupt(v_a_1603_);
if (v___x_1607_ == 0)
{
uint8_t v___x_1608_; 
lean_inc(v_a_1603_);
v___x_1608_ = l_Lean_Exception_isRuntime(v_a_1603_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1609_; 
lean_del_object(v___x_1605_);
lean_dec(v_a_1603_);
v___x_1609_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1600_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v___x_1610_; 
lean_dec_ref_known(v___x_1609_, 1);
v___x_1610_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1612_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1610_, 1);
lean_inc(v_a_1555_);
v___x_1612_ = l_Lean_Meta_splitSparseCasesOn(v_a_1555_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; 
lean_dec(v_a_1611_);
lean_dec(v_a_1555_);
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
lean_dec_ref_known(v___x_1612_, 1);
v___y_1416_ = v___y_1552_;
v___y_1417_ = v___y_1550_;
v___y_1418_ = v___y_1549_;
v___y_1419_ = v___y_1551_;
v_a_1420_ = v_a_1613_;
goto v___jp_1415_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1648_; 
v_a_1614_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1616_ = v___x_1612_;
v_isShared_1617_ = v_isSharedCheck_1648_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1612_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1648_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
uint8_t v___x_1618_; 
v___x_1618_ = l_Lean_Exception_isInterrupt(v_a_1614_);
if (v___x_1618_ == 0)
{
uint8_t v___x_1619_; 
lean_inc(v_a_1614_);
v___x_1619_ = l_Lean_Exception_isRuntime(v_a_1614_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
lean_del_object(v___x_1616_);
lean_dec(v_a_1614_);
v___x_1620_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1611_, v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v___x_1621_; 
lean_dec_ref_known(v___x_1620_, 1);
v___x_1621_ = l_Lean_Meta_saveState___redArg(v___y_1550_, v___y_1552_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
lean_inc(v_a_1555_);
v___x_1623_ = l_Lean_Meta_simpIfTarget(v_a_1555_, v___x_1556_, v___x_1556_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; uint8_t v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = l_Lean_instBEqMVarId_beq(v_a_1624_, v_a_1555_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = lean_box(0);
v___x_1627_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1624_, v___x_1626_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
v___y_1538_ = v___x_1556_;
v___y_1539_ = v___y_1550_;
v___y_1540_ = v___y_1552_;
v___y_1541_ = v_a_1622_;
v___y_1542_ = v___y_1549_;
v___y_1543_ = v_a_1555_;
v___y_1544_ = v___y_1551_;
v___y_1545_ = v___x_1627_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10);
v___x_1629_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1628_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v___x_1631_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v___x_1629_, 1);
v___x_1631_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1624_, v_a_1630_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
v___y_1538_ = v___x_1556_;
v___y_1539_ = v___y_1550_;
v___y_1540_ = v___y_1552_;
v___y_1541_ = v_a_1622_;
v___y_1542_ = v___y_1549_;
v___y_1543_ = v_a_1555_;
v___y_1544_ = v___y_1551_;
v___y_1545_ = v___x_1631_;
goto v___jp_1537_;
}
else
{
lean_object* v_a_1632_; 
lean_dec(v_a_1624_);
v_a_1632_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1629_, 1);
v___y_1493_ = v___x_1556_;
v___y_1494_ = v___y_1552_;
v___y_1495_ = v___y_1550_;
v___y_1496_ = v_a_1622_;
v___y_1497_ = v___y_1549_;
v___y_1498_ = v_a_1555_;
v___y_1499_ = v___y_1551_;
v_a_1500_ = v_a_1632_;
goto v___jp_1492_;
}
}
}
else
{
lean_object* v_a_1633_; 
v_a_1633_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1623_, 1);
v___y_1493_ = v___x_1556_;
v___y_1494_ = v___y_1552_;
v___y_1495_ = v___y_1550_;
v___y_1496_ = v_a_1622_;
v___y_1497_ = v___y_1549_;
v___y_1498_ = v_a_1555_;
v___y_1499_ = v___y_1551_;
v_a_1500_ = v_a_1633_;
goto v___jp_1492_;
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1634_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1621_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1621_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1620_;
}
}
else
{
lean_object* v___x_1643_; 
lean_dec(v_a_1611_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1617_ == 0)
{
v___x_1643_ = v___x_1616_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1614_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
else
{
lean_object* v___x_1646_; 
lean_dec(v_a_1611_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1617_ == 0)
{
v___x_1646_ = v___x_1616_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1614_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1649_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1610_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1610_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1609_;
}
}
else
{
lean_object* v___x_1658_; 
lean_dec(v_a_1600_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1606_ == 0)
{
v___x_1658_ = v___x_1605_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1603_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
else
{
lean_object* v___x_1661_; 
lean_dec(v_a_1600_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1606_ == 0)
{
v___x_1661_ = v___x_1605_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1603_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1664_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1599_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1599_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1598_;
}
}
else
{
lean_object* v___x_1673_; 
lean_dec(v_a_1589_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1595_ == 0)
{
v___x_1673_ = v___x_1594_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1592_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v___x_1676_; 
lean_dec(v_a_1589_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1595_ == 0)
{
v___x_1676_ = v___x_1594_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1592_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1679_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1588_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1588_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1587_;
}
}
else
{
lean_object* v___x_1688_; 
lean_dec(v_a_1575_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1584_ == 0)
{
v___x_1688_ = v___x_1583_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1581_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
else
{
lean_object* v___x_1691_; 
lean_dec(v_a_1575_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
if (v_isShared_1584_ == 0)
{
v___x_1691_ = v___x_1583_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1581_);
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
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1694_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1574_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1574_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1573_;
}
}
else
{
lean_dec(v_a_1567_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1568_;
}
}
else
{
lean_dec(v_a_1567_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1568_;
}
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1702_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1566_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1566_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
else
{
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1564_;
}
}
else
{
lean_dec(v_a_1558_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1559_;
}
}
else
{
lean_dec(v_a_1558_);
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_a_1555_);
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1710_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1557_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1557_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref(v___y_1551_);
lean_dec(v_matchDeclName_1407_);
v_a_1718_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1554_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1554_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
v___jp_1736_:
{
uint8_t v_hasTrace_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_hasTrace_1737_ = lean_ctor_get_uint8(v_options_1732_, sizeof(void*)*1);
v___x_1738_ = lean_unsigned_to_nat(1u);
v___x_1739_ = lean_nat_add(v_currRecDepth_1727_, v___x_1738_);
lean_inc(v_ref_1728_);
lean_inc_ref(v_toCold_1726_);
v___x_1740_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1740_, 0, v_toCold_1726_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
lean_ctor_set(v___x_1740_, 2, v_ref_1728_);
lean_ctor_set_uint16(v___x_1740_, sizeof(void*)*3, v_optionFlags_1729_);
lean_ctor_set_uint8(v___x_1740_, sizeof(void*)*3 + 2, v_suppressElabErrors_1730_);
lean_ctor_set_uint8(v___x_1740_, sizeof(void*)*3 + 3, v_isRecordingDeps_1731_);
if (v_hasTrace_1737_ == 0)
{
v___y_1549_ = v_a_1410_;
v___y_1550_ = v_a_1411_;
v___y_1551_ = v___x_1740_;
v___y_1552_ = v_a_1413_;
goto v___jp_1548_;
}
else
{
lean_object* v___x_1741_; uint8_t v___x_1742_; 
v___x_1741_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_1742_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1734_, v_options_1732_, v___x_1741_);
if (v___x_1742_ == 0)
{
v___y_1549_ = v_a_1410_;
v___y_1550_ = v_a_1411_;
v___y_1551_ = v___x_1740_;
v___y_1552_ = v_a_1413_;
goto v___jp_1548_;
}
else
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1743_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__19);
lean_inc(v_mvarId_1408_);
v___x_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1744_, 0, v_mvarId_1408_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1743_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v_cls_1735_, v___x_1745_, v_a_1410_, v_a_1411_, v___x_1740_, v_a_1413_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_dec_ref_known(v___x_1746_, 1);
v___y_1549_ = v_a_1410_;
v___y_1550_ = v_a_1411_;
v___y_1551_ = v___x_1740_;
v___y_1552_ = v_a_1413_;
goto v___jp_1548_;
}
else
{
lean_dec_ref_known(v___x_1740_, 3);
lean_dec(v_mvarId_1408_);
lean_dec(v_matchDeclName_1407_);
return v___x_1746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(lean_object* v_depth_1751_, lean_object* v_matchDeclName_1752_, lean_object* v_as_1753_, size_t v_i_1754_, size_t v_stop_1755_, lean_object* v_b_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
uint8_t v___x_1762_; 
v___x_1762_ = lean_usize_dec_eq(v_i_1754_, v_stop_1755_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1763_ = lean_array_uget_borrowed(v_as_1753_, v_i_1754_);
v___x_1764_ = lean_unsigned_to_nat(1u);
v___x_1765_ = lean_nat_add(v_depth_1751_, v___x_1764_);
lean_inc(v___x_1763_);
lean_inc(v_matchDeclName_1752_);
v___x_1766_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1752_, v___x_1763_, v___x_1765_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___x_1765_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; size_t v___x_1768_; size_t v___x_1769_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = ((size_t)1ULL);
v___x_1769_ = lean_usize_add(v_i_1754_, v___x_1768_);
v_i_1754_ = v___x_1769_;
v_b_1756_ = v_a_1767_;
goto _start;
}
else
{
lean_dec(v_matchDeclName_1752_);
return v___x_1766_;
}
}
else
{
lean_object* v___x_1771_; 
lean_dec(v_matchDeclName_1752_);
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v_b_1756_);
return v___x_1771_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0___boxed(lean_object* v_depth_1772_, lean_object* v_matchDeclName_1773_, lean_object* v_as_1774_, lean_object* v_i_1775_, lean_object* v_stop_1776_, lean_object* v_b_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
size_t v_i_boxed_1783_; size_t v_stop_boxed_1784_; lean_object* v_res_1785_; 
v_i_boxed_1783_ = lean_unbox_usize(v_i_1775_);
lean_dec(v_i_1775_);
v_stop_boxed_1784_ = lean_unbox_usize(v_stop_1776_);
lean_dec(v_stop_1776_);
v_res_1785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(v_depth_1772_, v_matchDeclName_1773_, v_as_1774_, v_i_boxed_1783_, v_stop_boxed_1784_, v_b_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_as_1774_);
lean_dec(v_depth_1772_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___boxed(lean_object* v_matchDeclName_1786_, lean_object* v_mvarId_1787_, lean_object* v_depth_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1786_, v_mvarId_1787_, v_depth_1788_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_);
lean_dec(v_a_1792_);
lean_dec_ref(v_a_1791_);
lean_dec(v_a_1790_);
lean_dec_ref(v_a_1789_);
lean_dec(v_depth_1788_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(lean_object* v_e_1795_, lean_object* v___y_1796_){
_start:
{
uint8_t v___x_1798_; 
v___x_1798_ = l_Lean_Expr_hasMVar(v_e_1795_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v_e_1795_);
return v___x_1799_;
}
else
{
lean_object* v___x_1800_; lean_object* v_mctx_1801_; lean_object* v___x_1802_; lean_object* v_fst_1803_; lean_object* v_snd_1804_; lean_object* v___x_1805_; lean_object* v_cache_1806_; lean_object* v_zetaDeltaFVarIds_1807_; lean_object* v_postponed_1808_; lean_object* v_diag_1809_; lean_object* v_rewriteFires_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1819_; 
v___x_1800_ = lean_st_ref_get(v___y_1796_);
v_mctx_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc_ref(v_mctx_1801_);
lean_dec(v___x_1800_);
v___x_1802_ = l_Lean_instantiateMVarsCore(v_mctx_1801_, v_e_1795_);
v_fst_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_fst_1803_);
v_snd_1804_ = lean_ctor_get(v___x_1802_, 1);
lean_inc(v_snd_1804_);
lean_dec_ref(v___x_1802_);
v___x_1805_ = lean_st_ref_take(v___y_1796_);
v_cache_1806_ = lean_ctor_get(v___x_1805_, 1);
v_zetaDeltaFVarIds_1807_ = lean_ctor_get(v___x_1805_, 2);
v_postponed_1808_ = lean_ctor_get(v___x_1805_, 3);
v_diag_1809_ = lean_ctor_get(v___x_1805_, 4);
v_rewriteFires_1810_ = lean_ctor_get(v___x_1805_, 5);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v___x_1805_, 0);
lean_dec(v_unused_1820_);
v___x_1812_ = v___x_1805_;
v_isShared_1813_ = v_isSharedCheck_1819_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_rewriteFires_1810_);
lean_inc(v_diag_1809_);
lean_inc(v_postponed_1808_);
lean_inc(v_zetaDeltaFVarIds_1807_);
lean_inc(v_cache_1806_);
lean_dec(v___x_1805_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1819_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v_snd_1804_);
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_snd_1804_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_cache_1806_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v_zetaDeltaFVarIds_1807_);
lean_ctor_set(v_reuseFailAlloc_1818_, 3, v_postponed_1808_);
lean_ctor_set(v_reuseFailAlloc_1818_, 4, v_diag_1809_);
lean_ctor_set(v_reuseFailAlloc_1818_, 5, v_rewriteFires_1810_);
v___x_1815_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = lean_st_ref_put(v___y_1796_, v___x_1815_);
v___x_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1817_, 0, v_fst_1803_);
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg___boxed(lean_object* v_e_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_e_1821_, v___y_1822_);
lean_dec(v___y_1822_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(lean_object* v_e_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_e_1825_, v___y_1827_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___boxed(lean_object* v_e_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(v_e_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(lean_object* v_lctx_1839_, lean_object* v_localInsts_1840_, lean_object* v_x_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1839_, v_localInsts_1840_, v_x_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
v_a_1856_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1847_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1847_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg___boxed(lean_object* v_lctx_1864_, lean_object* v_localInsts_1865_, lean_object* v_x_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v_lctx_1864_, v_localInsts_1865_, v_x_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(lean_object* v_00_u03b1_1873_, lean_object* v_lctx_1874_, lean_object* v_localInsts_1875_, lean_object* v_x_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v_lctx_1874_, v_localInsts_1875_, v_x_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___boxed(lean_object* v_00_u03b1_1883_, lean_object* v_lctx_1884_, lean_object* v_localInsts_1885_, lean_object* v_x_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(v_00_u03b1_1883_, v_lctx_1884_, v_localInsts_1885_, v_x_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
return v_res_1892_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_proveCondEqThm___lam__0(lean_object* v_matchDeclName_1893_, lean_object* v_x_1894_){
_start:
{
uint8_t v___x_1895_; 
v___x_1895_ = lean_name_eq(v_x_1894_, v_matchDeclName_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed(lean_object* v_matchDeclName_1896_, lean_object* v_x_1897_){
_start:
{
uint8_t v_res_1898_; lean_object* v_r_1899_; 
v_res_1898_ = l_Lean_Meta_Match_proveCondEqThm___lam__0(v_matchDeclName_1896_, v_x_1897_);
lean_dec(v_x_1897_);
lean_dec(v_matchDeclName_1896_);
v_r_1899_ = lean_box(v_res_1898_);
return v_r_1899_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(lean_object* v_upperBound_1900_, lean_object* v_a_1901_, lean_object* v_b_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
uint8_t v___x_1908_; 
v___x_1908_ = lean_nat_dec_lt(v_a_1901_, v_upperBound_1900_);
if (v___x_1908_ == 0)
{
lean_object* v___x_1909_; 
lean_dec(v_a_1901_);
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v_b_1902_);
return v___x_1909_;
}
else
{
uint8_t v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = 0;
v___x_1911_ = l_Lean_Meta_introSubstEq(v_b_1902_, v___x_1910_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v_snd_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v_snd_1913_ = lean_ctor_get(v_a_1912_, 1);
lean_inc(v_snd_1913_);
lean_dec(v_a_1912_);
v___x_1914_ = lean_unsigned_to_nat(1u);
v___x_1915_ = lean_nat_add(v_a_1901_, v___x_1914_);
lean_dec(v_a_1901_);
v_a_1901_ = v___x_1915_;
v_b_1902_ = v_snd_1913_;
goto _start;
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec(v_a_1901_);
v_a_1917_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1911_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1911_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg___boxed(lean_object* v_upperBound_1925_, lean_object* v_a_1926_, lean_object* v_b_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_upperBound_1925_, v_a_1926_, v_b_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v_upperBound_1925_);
return v_res_1933_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = ((lean_object*)(l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0));
v___x_1936_ = l_Lean_stringToMessageData(v___x_1935_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = ((lean_object*)(l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2));
v___x_1939_ = l_Lean_stringToMessageData(v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1(lean_object* v_type_1940_, lean_object* v___f_1941_, lean_object* v_matchDeclName_1942_, lean_object* v___x_1943_, lean_object* v_heqNum_1944_, lean_object* v_heqPos_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v___x_1951_; lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_2106_; 
v___x_1951_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_type_1940_, v___y_1947_);
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_2106_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_2106_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = lean_box(0);
v___x_1957_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1952_, v___x_1956_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_2105_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_2105_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_2105_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v_mvarId_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v_toCold_2025_; lean_object* v_options_2026_; lean_object* v_inheritedTraceOptions_2027_; uint8_t v_hasTrace_2028_; lean_object* v___x_2029_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; 
v_toCold_2025_ = lean_ctor_get(v___y_1948_, 0);
v_options_2026_ = lean_ctor_get(v_toCold_2025_, 2);
v_inheritedTraceOptions_2027_ = lean_ctor_get(v_toCold_2025_, 11);
v_hasTrace_2028_ = lean_ctor_get_uint8(v_options_2026_, sizeof(void*)*1);
v___x_2029_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
if (v_hasTrace_2028_ == 0)
{
lean_del_object(v___x_1954_);
v___y_2031_ = v___y_1946_;
v___y_2032_ = v___y_1947_;
v___y_2033_ = v___y_1948_;
v___y_2034_ = v___y_1949_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2088_; uint8_t v___x_2089_; 
v___x_2088_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_2089_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2027_, v_options_2026_, v___x_2088_);
if (v___x_2089_ == 0)
{
lean_del_object(v___x_1954_);
v___y_2031_ = v___y_1946_;
v___y_2032_ = v___y_1947_;
v___y_2033_ = v___y_1948_;
v___y_2034_ = v___y_1949_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2090_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3);
v___x_2091_ = l_Lean_Expr_mvarId_x21(v_a_1958_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set_tag(v___x_1954_, 1);
lean_ctor_set(v___x_1954_, 0, v___x_2091_);
v___x_2093_ = v___x_1954_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2090_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___x_2095_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_2029_, v___x_2094_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_dec_ref_known(v___x_2095_, 1);
v___y_2031_ = v___y_1946_;
v___y_2032_ = v___y_1947_;
v___y_2033_ = v___y_1948_;
v___y_2034_ = v___y_1949_;
goto v___jp_2030_;
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_del_object(v___x_1960_);
lean_dec(v_a_1958_);
lean_dec(v_heqPos_1945_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2095_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2095_);
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
}
v___jp_1962_:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_MVarId_intros(v_mvarId_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v_snd_1970_; uint8_t v___x_1971_; lean_object* v___x_1972_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
v_snd_1970_ = lean_ctor_get(v_a_1969_, 1);
lean_inc_n(v_snd_1970_, 2);
lean_dec(v_a_1969_);
v___x_1971_ = 1;
v___x_1972_ = l_Lean_MVarId_refl(v_snd_1970_, v___x_1971_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v___x_1973_; 
lean_dec_ref_known(v___x_1972_, 1);
lean_dec(v_snd_1970_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v___x_1973_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_a_1958_, v___y_1965_);
return v___x_1973_;
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_2016_; 
v_a_1974_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1976_ = v___x_1972_;
v_isShared_1977_ = v_isSharedCheck_2016_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1972_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_2016_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Lean_Exception_isInterrupt(v_a_1974_);
if (v___x_1978_ == 0)
{
uint8_t v___x_1979_; 
lean_inc(v_a_1974_);
v___x_1979_ = l_Lean_Exception_isRuntime(v_a_1974_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1980_; 
lean_del_object(v___x_1976_);
lean_dec(v_a_1974_);
v___x_1980_ = l_Lean_MVarId_deltaTarget(v_snd_1970_, v___f_1941_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1982_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
v___x_1982_ = l_Lean_MVarId_heqOfEq(v_a_1981_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; lean_object* v___x_1984_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1982_, 1);
v___x_1984_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1942_, v_a_1983_, v___x_1943_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___x_1943_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v___x_1985_; 
lean_dec_ref_known(v___x_1984_, 1);
v___x_1985_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_a_1958_, v___y_1965_);
return v___x_1985_;
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec(v_a_1958_);
v_a_1986_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1984_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1984_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
v_a_1994_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1982_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1982_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
v_a_2002_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1980_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1980_);
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
else
{
lean_object* v___x_2011_; 
lean_dec(v_snd_1970_);
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
if (v_isShared_1977_ == 0)
{
v___x_2011_ = v___x_1976_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_1974_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
else
{
lean_object* v___x_2014_; 
lean_dec(v_snd_1970_);
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
if (v_isShared_1977_ == 0)
{
v___x_2014_ = v___x_1976_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_1974_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v_a_2017_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_1968_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_1968_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
v___jp_2030_:
{
lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2035_ = l_Lean_Expr_mvarId_x21(v_a_1958_);
v___x_2036_ = lean_nat_dec_lt(v___x_1943_, v_heqNum_1944_);
if (v___x_2036_ == 0)
{
lean_del_object(v___x_1960_);
lean_dec(v_heqPos_1945_);
v_mvarId_1963_ = v___x_2035_;
v___y_1964_ = v___y_2031_;
v___y_1965_ = v___y_2032_;
v___y_1966_ = v___y_2033_;
v___y_1967_ = v___y_2034_;
goto v___jp_1962_;
}
else
{
lean_object* v___x_2037_; uint8_t v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = lean_box(0);
v___x_2038_ = 0;
v___x_2039_ = l_Lean_Meta_introNCore(v___x_2035_, v_heqPos_1945_, v___x_2037_, v___x_2038_, v___x_2038_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v_snd_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2078_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v_snd_2041_ = lean_ctor_get(v_a_2040_, 1);
v_isSharedCheck_2078_ = !lean_is_exclusive(v_a_2040_);
if (v_isSharedCheck_2078_ == 0)
{
lean_object* v_unused_2079_; 
v_unused_2079_ = lean_ctor_get(v_a_2040_, 0);
lean_dec(v_unused_2079_);
v___x_2043_ = v_a_2040_;
v_isShared_2044_ = v_isSharedCheck_2078_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_snd_2041_);
lean_dec(v_a_2040_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2078_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; 
lean_inc(v___x_1943_);
v___x_2045_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_heqNum_1944_, v___x_1943_, v_snd_2041_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_toCold_2046_; lean_object* v_options_2047_; uint8_t v_hasTrace_2048_; 
v_toCold_2046_ = lean_ctor_get(v___y_2033_, 0);
v_options_2047_ = lean_ctor_get(v_toCold_2046_, 2);
v_hasTrace_2048_ = lean_ctor_get_uint8(v_options_2047_, sizeof(void*)*1);
if (v_hasTrace_2048_ == 0)
{
lean_object* v_a_2049_; 
lean_del_object(v___x_2043_);
lean_del_object(v___x_1960_);
v_a_2049_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_a_2049_);
lean_dec_ref_known(v___x_2045_, 1);
v_mvarId_1963_ = v_a_2049_;
v___y_1964_ = v___y_2031_;
v___y_1965_ = v___y_2032_;
v___y_1966_ = v___y_2033_;
v___y_1967_ = v___y_2034_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_2050_; lean_object* v_inheritedTraceOptions_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v_a_2050_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2045_, 1);
v_inheritedTraceOptions_2051_ = lean_ctor_get(v_toCold_2046_, 11);
v___x_2052_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_2053_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2051_, v_options_2047_, v___x_2052_);
if (v___x_2053_ == 0)
{
lean_del_object(v___x_2043_);
lean_del_object(v___x_1960_);
v_mvarId_1963_ = v_a_2050_;
v___y_1964_ = v___y_2031_;
v___y_1965_ = v___y_2032_;
v___y_1966_ = v___y_2033_;
v___y_1967_ = v___y_2034_;
goto v___jp_1962_;
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2056_; 
v___x_2054_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1);
lean_inc(v_a_2050_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set_tag(v___x_1960_, 1);
lean_ctor_set(v___x_1960_, 0, v_a_2050_);
v___x_2056_ = v___x_1960_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2050_);
v___x_2056_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
if (v_isShared_2044_ == 0)
{
lean_ctor_set_tag(v___x_2043_, 7);
lean_ctor_set(v___x_2043_, 1, v___x_2056_);
lean_ctor_set(v___x_2043_, 0, v___x_2054_);
v___x_2058_ = v___x_2043_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2054_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_2029_, v___x_2058_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_dec_ref_known(v___x_2059_, 1);
v_mvarId_1963_ = v_a_2050_;
v___y_1964_ = v___y_2031_;
v___y_1965_ = v___y_2032_;
v___y_1966_ = v___y_2033_;
v___y_1967_ = v___y_2034_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec(v_a_2050_);
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
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
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_del_object(v___x_2043_);
lean_del_object(v___x_1960_);
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v_a_2070_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2045_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2045_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_del_object(v___x_1960_);
lean_dec(v_a_1958_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
v_a_2080_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2039_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2039_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1954_);
lean_dec(v_heqPos_1945_);
lean_dec(v___x_1943_);
lean_dec(v_matchDeclName_1942_);
lean_dec_ref(v___f_1941_);
return v___x_1957_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed(lean_object* v_type_2107_, lean_object* v___f_2108_, lean_object* v_matchDeclName_2109_, lean_object* v___x_2110_, lean_object* v_heqNum_2111_, lean_object* v_heqPos_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_Lean_Meta_Match_proveCondEqThm___lam__1(v_type_2107_, v___f_2108_, v_matchDeclName_2109_, v___x_2110_, v_heqNum_2111_, v_heqPos_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v_heqNum_2111_);
return v_res_2118_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__0(void){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2119_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__1(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__0, &l_Lean_Meta_Match_proveCondEqThm___closed__0_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__0);
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__2(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_unsigned_to_nat(32u);
v___x_2123_ = lean_mk_empty_array_with_capacity(v___x_2122_);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
return v___x_2124_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__3(void){
_start:
{
size_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2125_ = ((size_t)5ULL);
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = lean_unsigned_to_nat(32u);
v___x_2128_ = lean_mk_empty_array_with_capacity(v___x_2127_);
v___x_2129_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__2, &l_Lean_Meta_Match_proveCondEqThm___closed__2_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__2);
v___x_2130_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v___x_2128_);
lean_ctor_set(v___x_2130_, 2, v___x_2126_);
lean_ctor_set(v___x_2130_, 3, v___x_2126_);
lean_ctor_set_usize(v___x_2130_, 4, v___x_2125_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__4(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2131_ = lean_box(1);
v___x_2132_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_2133_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_2134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
lean_ctor_set(v___x_2134_, 1, v___x_2132_);
lean_ctor_set(v___x_2134_, 2, v___x_2131_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm(lean_object* v_matchDeclName_2137_, lean_object* v_type_2138_, lean_object* v_heqPos_2139_, lean_object* v_heqNum_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v___f_2146_; lean_object* v___x_2147_; lean_object* v___f_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
lean_inc(v_matchDeclName_2137_);
v___f_2146_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2146_, 0, v_matchDeclName_2137_);
v___x_2147_ = lean_unsigned_to_nat(0u);
v___f_2148_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed), 11, 6);
lean_closure_set(v___f_2148_, 0, v_type_2138_);
lean_closure_set(v___f_2148_, 1, v___f_2146_);
lean_closure_set(v___f_2148_, 2, v_matchDeclName_2137_);
lean_closure_set(v___f_2148_, 3, v___x_2147_);
lean_closure_set(v___f_2148_, 4, v_heqNum_2140_);
lean_closure_set(v___f_2148_, 5, v_heqPos_2139_);
v___x_2149_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_2150_ = ((lean_object*)(l_Lean_Meta_Match_proveCondEqThm___closed__5));
v___x_2151_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v___x_2149_, v___x_2150_, v___f_2148_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___boxed(lean_object* v_matchDeclName_2152_, lean_object* v_type_2153_, lean_object* v_heqPos_2154_, lean_object* v_heqNum_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_2152_, v_type_2153_, v_heqPos_2154_, v_heqNum_2155_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_);
lean_dec(v_a_2159_);
lean_dec_ref(v_a_2158_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(lean_object* v_upperBound_2162_, lean_object* v_inst_2163_, lean_object* v_R_2164_, lean_object* v_a_2165_, lean_object* v_b_2166_, lean_object* v_c_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_upperBound_2162_, v_a_2165_, v_b_2166_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___boxed(lean_object* v_upperBound_2174_, lean_object* v_inst_2175_, lean_object* v_R_2176_, lean_object* v_a_2177_, lean_object* v_b_2178_, lean_object* v_c_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(v_upperBound_2174_, v_inst_2175_, v_R_2176_, v_a_2177_, v_b_2178_, v_c_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec(v_upperBound_2174_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(lean_object* v_k_2186_, lean_object* v_b_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
lean_object* v___x_2193_; 
lean_inc(v___y_2191_);
lean_inc_ref(v___y_2190_);
lean_inc(v___y_2189_);
lean_inc_ref(v___y_2188_);
v___x_2193_ = lean_apply_6(v_k_2186_, v_b_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, lean_box(0));
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed(lean_object* v_k_2194_, lean_object* v_b_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(v_k_2194_, v_b_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(lean_object* v_name_2202_, uint8_t v_bi_2203_, lean_object* v_type_2204_, lean_object* v_k_2205_, uint8_t v_kind_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v___f_2212_; lean_object* v___x_2213_; 
v___f_2212_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2212_, 0, v_k_2205_);
v___x_2213_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2202_, v_bi_2203_, v_type_2204_, v___f_2212_, v_kind_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
v_a_2222_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2213_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2213_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___boxed(lean_object* v_name_2230_, lean_object* v_bi_2231_, lean_object* v_type_2232_, lean_object* v_k_2233_, lean_object* v_kind_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v_bi_boxed_2240_; uint8_t v_kind_boxed_2241_; lean_object* v_res_2242_; 
v_bi_boxed_2240_ = lean_unbox(v_bi_2231_);
v_kind_boxed_2241_ = lean_unbox(v_kind_2234_);
v_res_2242_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_name_2230_, v_bi_boxed_2240_, v_type_2232_, v_k_2233_, v_kind_boxed_2241_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(lean_object* v_00_u03b1_2243_, lean_object* v_name_2244_, uint8_t v_bi_2245_, lean_object* v_type_2246_, lean_object* v_k_2247_, uint8_t v_kind_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_name_2244_, v_bi_2245_, v_type_2246_, v_k_2247_, v_kind_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___boxed(lean_object* v_00_u03b1_2255_, lean_object* v_name_2256_, lean_object* v_bi_2257_, lean_object* v_type_2258_, lean_object* v_k_2259_, lean_object* v_kind_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
uint8_t v_bi_boxed_2266_; uint8_t v_kind_boxed_2267_; lean_object* v_res_2268_; 
v_bi_boxed_2266_ = lean_unbox(v_bi_2257_);
v_kind_boxed_2267_ = lean_unbox(v_kind_2260_);
v_res_2268_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(v_00_u03b1_2255_, v_name_2256_, v_bi_boxed_2266_, v_type_2258_, v_k_2259_, v_kind_boxed_2267_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed(lean_object* v_i_2269_, lean_object* v_altsNew_2270_, lean_object* v_discrs_2271_, lean_object* v_patterns_2272_, lean_object* v_alts_2273_, lean_object* v_k_2274_, lean_object* v_altNew_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(v_i_2269_, v_altsNew_2270_, v_discrs_2271_, v_patterns_2272_, v_alts_2273_, v_k_2274_, v_altNew_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v_i_2269_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(lean_object* v_discrs_2282_, lean_object* v_patterns_2283_, lean_object* v_alts_2284_, lean_object* v_k_2285_, lean_object* v_i_2286_, lean_object* v_altsNew_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = lean_array_get_size(v_alts_2284_);
v___x_2294_ = lean_nat_dec_lt(v_i_2286_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; 
lean_dec(v_i_2286_);
lean_dec_ref(v_alts_2284_);
lean_dec_ref(v_patterns_2283_);
lean_dec_ref(v_discrs_2282_);
lean_inc(v_a_2291_);
lean_inc_ref(v_a_2290_);
lean_inc(v_a_2289_);
lean_inc_ref(v_a_2288_);
v___x_2295_ = lean_apply_6(v_k_2285_, v_altsNew_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, lean_box(0));
return v___x_2295_;
}
else
{
lean_object* v___f_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
lean_inc_ref(v_alts_2284_);
lean_inc_ref(v_patterns_2283_);
lean_inc_ref(v_discrs_2282_);
lean_inc(v_i_2286_);
v___f_2296_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_2296_, 0, v_i_2286_);
lean_closure_set(v___f_2296_, 1, v_altsNew_2287_);
lean_closure_set(v___f_2296_, 2, v_discrs_2282_);
lean_closure_set(v___f_2296_, 3, v_patterns_2283_);
lean_closure_set(v___f_2296_, 4, v_alts_2284_);
lean_closure_set(v___f_2296_, 5, v_k_2285_);
v___x_2297_ = lean_array_fget(v_alts_2284_, v_i_2286_);
lean_dec(v_i_2286_);
lean_dec_ref(v_alts_2284_);
v___x_2298_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_2297_, v_a_2288_, v_a_2290_, v_a_2291_);
lean_dec(v___x_2297_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; uint8_t v___x_2303_; uint8_t v___x_2304_; lean_object* v___x_2305_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v___x_2298_, 1);
v___x_2300_ = l_Lean_LocalDecl_type(v_a_2299_);
v___x_2301_ = l_Lean_Expr_replaceFVars(v___x_2300_, v_discrs_2282_, v_patterns_2283_);
lean_dec_ref(v_patterns_2283_);
lean_dec_ref(v_discrs_2282_);
lean_dec_ref(v___x_2300_);
v___x_2302_ = l_Lean_LocalDecl_userName(v_a_2299_);
v___x_2303_ = l_Lean_LocalDecl_binderInfo(v_a_2299_);
lean_dec(v_a_2299_);
v___x_2304_ = 0;
v___x_2305_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v___x_2302_, v___x_2303_, v___x_2301_, v___f_2296_, v___x_2304_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2305_;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v___f_2296_);
lean_dec_ref(v_patterns_2283_);
lean_dec_ref(v_discrs_2282_);
v_a_2306_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2298_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2298_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(lean_object* v_i_2314_, lean_object* v_altsNew_2315_, lean_object* v_discrs_2316_, lean_object* v_patterns_2317_, lean_object* v_alts_2318_, lean_object* v_k_2319_, lean_object* v_altNew_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2326_ = lean_unsigned_to_nat(1u);
v___x_2327_ = lean_nat_add(v_i_2314_, v___x_2326_);
v___x_2328_ = lean_array_push(v_altsNew_2315_, v_altNew_2320_);
v___x_2329_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2316_, v_patterns_2317_, v_alts_2318_, v_k_2319_, v___x_2327_, v___x_2328_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___boxed(lean_object* v_discrs_2330_, lean_object* v_patterns_2331_, lean_object* v_alts_2332_, lean_object* v_k_2333_, lean_object* v_i_2334_, lean_object* v_altsNew_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2330_, v_patterns_2331_, v_alts_2332_, v_k_2333_, v_i_2334_, v_altsNew_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(lean_object* v_00_u03b1_2342_, lean_object* v_discrs_2343_, lean_object* v_patterns_2344_, lean_object* v_alts_2345_, lean_object* v_k_2346_, lean_object* v_i_2347_, lean_object* v_altsNew_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2343_, v_patterns_2344_, v_alts_2345_, v_k_2346_, v_i_2347_, v_altsNew_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___boxed(lean_object* v_00_u03b1_2355_, lean_object* v_discrs_2356_, lean_object* v_patterns_2357_, lean_object* v_alts_2358_, lean_object* v_k_2359_, lean_object* v_i_2360_, lean_object* v_altsNew_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(v_00_u03b1_2355_, v_discrs_2356_, v_patterns_2357_, v_alts_2358_, v_k_2359_, v_i_2360_, v_altsNew_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_);
lean_dec(v_a_2365_);
lean_dec_ref(v_a_2364_);
lean_dec(v_a_2363_);
lean_dec_ref(v_a_2362_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(lean_object* v_numDiscrEqs_2370_, lean_object* v_discrs_2371_, lean_object* v_patterns_2372_, lean_object* v_alts_2373_, lean_object* v_k_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v___x_2380_; uint8_t v___x_2381_; 
v___x_2380_ = lean_unsigned_to_nat(0u);
v___x_2381_ = lean_nat_dec_eq(v_numDiscrEqs_2370_, v___x_2380_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2382_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0));
v___x_2383_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2371_, v_patterns_2372_, v_alts_2373_, v_k_2374_, v___x_2380_, v___x_2382_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_);
return v___x_2383_;
}
else
{
lean_object* v___x_2384_; 
lean_dec_ref(v_patterns_2372_);
lean_dec_ref(v_discrs_2371_);
lean_inc(v_a_2378_);
lean_inc_ref(v_a_2377_);
lean_inc(v_a_2376_);
lean_inc_ref(v_a_2375_);
v___x_2384_ = lean_apply_6(v_k_2374_, v_alts_2373_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, lean_box(0));
return v___x_2384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___boxed(lean_object* v_numDiscrEqs_2385_, lean_object* v_discrs_2386_, lean_object* v_patterns_2387_, lean_object* v_alts_2388_, lean_object* v_k_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v_numDiscrEqs_2385_, v_discrs_2386_, v_patterns_2387_, v_alts_2388_, v_k_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
lean_dec(v_numDiscrEqs_2385_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(lean_object* v_00_u03b1_2396_, lean_object* v_numDiscrEqs_2397_, lean_object* v_discrs_2398_, lean_object* v_patterns_2399_, lean_object* v_alts_2400_, lean_object* v_k_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v_numDiscrEqs_2397_, v_discrs_2398_, v_patterns_2399_, v_alts_2400_, v_k_2401_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___boxed(lean_object* v_00_u03b1_2408_, lean_object* v_numDiscrEqs_2409_, lean_object* v_discrs_2410_, lean_object* v_patterns_2411_, lean_object* v_alts_2412_, lean_object* v_k_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(v_00_u03b1_2408_, v_numDiscrEqs_2409_, v_discrs_2410_, v_patterns_2411_, v_alts_2412_, v_k_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_);
lean_dec(v_a_2417_);
lean_dec_ref(v_a_2416_);
lean_dec(v_a_2415_);
lean_dec_ref(v_a_2414_);
lean_dec(v_numDiscrEqs_2409_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(lean_object* v_declName_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v___x_2423_; lean_object* v_env_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2423_ = lean_st_ref_get(v___y_2421_);
v_env_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc_ref(v_env_2424_);
lean_dec(v___x_2423_);
v___x_2425_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2424_, v_declName_2420_);
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg___boxed(lean_object* v_declName_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(v_declName_2427_, v___y_2428_);
lean_dec(v___y_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(lean_object* v_declName_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(v_declName_2431_, v___y_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___boxed(lean_object* v_declName_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(v_declName_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(lean_object* v_msg_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___f_2452_; lean_object* v___x_14376__overap_2453_; lean_object* v___x_2454_; 
v___f_2452_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0));
v___x_14376__overap_2453_ = lean_panic_fn_borrowed(v___f_2452_, v_msg_2446_);
lean_inc(v___y_2450_);
lean_inc_ref(v___y_2449_);
lean_inc(v___y_2448_);
lean_inc_ref(v___y_2447_);
v___x_2454_ = lean_apply_5(v___x_14376__overap_2453_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, lean_box(0));
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___boxed(lean_object* v_msg_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(v_msg_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(lean_object* v_k_2462_, lean_object* v_b_2463_, lean_object* v_c_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; 
lean_inc(v___y_2468_);
lean_inc_ref(v___y_2467_);
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
v___x_2470_ = lean_apply_7(v_k_2462_, v_b_2463_, v_c_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, lean_box(0));
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed(lean_object* v_k_2471_, lean_object* v_b_2472_, lean_object* v_c_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(v_k_2471_, v_b_2472_, v_c_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(lean_object* v_type_2480_, lean_object* v_k_2481_, uint8_t v_cleanupAnnotations_2482_, uint8_t v_whnfType_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v___f_2489_; lean_object* v___x_2490_; 
v___f_2489_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2489_, 0, v_k_2481_);
v___x_2490_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2480_, v___f_2489_, v_cleanupAnnotations_2482_, v_whnfType_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
v_a_2499_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2490_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2490_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___boxed(lean_object* v_type_2507_, lean_object* v_k_2508_, lean_object* v_cleanupAnnotations_2509_, lean_object* v_whnfType_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2516_; uint8_t v_whnfType_boxed_2517_; lean_object* v_res_2518_; 
v_cleanupAnnotations_boxed_2516_ = lean_unbox(v_cleanupAnnotations_2509_);
v_whnfType_boxed_2517_ = lean_unbox(v_whnfType_2510_);
v_res_2518_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v_type_2507_, v_k_2508_, v_cleanupAnnotations_boxed_2516_, v_whnfType_boxed_2517_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(lean_object* v_00_u03b1_2519_, lean_object* v_type_2520_, lean_object* v_k_2521_, uint8_t v_cleanupAnnotations_2522_, uint8_t v_whnfType_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v___x_2529_; 
v___x_2529_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v_type_2520_, v_k_2521_, v_cleanupAnnotations_2522_, v_whnfType_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___boxed(lean_object* v_00_u03b1_2530_, lean_object* v_type_2531_, lean_object* v_k_2532_, lean_object* v_cleanupAnnotations_2533_, lean_object* v_whnfType_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2540_; uint8_t v_whnfType_boxed_2541_; lean_object* v_res_2542_; 
v_cleanupAnnotations_boxed_2540_ = lean_unbox(v_cleanupAnnotations_2533_);
v_whnfType_boxed_2541_ = lean_unbox(v_whnfType_2534_);
v_res_2542_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(v_00_u03b1_2530_, v_type_2531_, v_k_2532_, v_cleanupAnnotations_boxed_2540_, v_whnfType_boxed_2541_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(lean_object* v_overlaps_2543_, lean_object* v_splitterName_2544_, lean_object* v_matcherInput_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_matchType_2551_; lean_object* v_discrInfos_2552_; lean_object* v_lhss_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2573_; 
v_matchType_2551_ = lean_ctor_get(v_matcherInput_2545_, 1);
v_discrInfos_2552_ = lean_ctor_get(v_matcherInput_2545_, 2);
v_lhss_2553_ = lean_ctor_get(v_matcherInput_2545_, 3);
v_isSharedCheck_2573_ = !lean_is_exclusive(v_matcherInput_2545_);
if (v_isSharedCheck_2573_ == 0)
{
lean_object* v_unused_2574_; lean_object* v_unused_2575_; 
v_unused_2574_ = lean_ctor_get(v_matcherInput_2545_, 4);
lean_dec(v_unused_2574_);
v_unused_2575_ = lean_ctor_get(v_matcherInput_2545_, 0);
lean_dec(v_unused_2575_);
v___x_2555_ = v_matcherInput_2545_;
v_isShared_2556_ = v_isSharedCheck_2573_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_lhss_2553_);
lean_inc(v_discrInfos_2552_);
lean_inc(v_matchType_2551_);
lean_dec(v_matcherInput_2545_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2573_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2557_; lean_object* v___x_2559_; 
v___x_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2557_, 0, v_overlaps_2543_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 4, v___x_2557_);
lean_ctor_set(v___x_2555_, 0, v_splitterName_2544_);
v___x_2559_ = v___x_2555_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_splitterName_2544_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v_matchType_2551_);
lean_ctor_set(v_reuseFailAlloc_2572_, 2, v_discrInfos_2552_);
lean_ctor_set(v_reuseFailAlloc_2572_, 3, v_lhss_2553_);
lean_ctor_set(v_reuseFailAlloc_2572_, 4, v___x_2557_);
v___x_2559_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_Meta_Match_mkMatcher(v___x_2559_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; lean_object* v_addMatcher_2562_; lean_object* v___x_2563_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
v_addMatcher_2562_ = lean_ctor_get(v_a_2561_, 3);
lean_inc_ref(v_addMatcher_2562_);
lean_dec(v_a_2561_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2548_);
lean_inc(v___y_2547_);
lean_inc_ref(v___y_2546_);
v___x_2563_ = lean_apply_5(v_addMatcher_2562_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, lean_box(0));
return v___x_2563_;
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
v_a_2564_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2560_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2560_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed(lean_object* v_overlaps_2576_, lean_object* v_splitterName_2577_, lean_object* v_matcherInput_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(v_overlaps_2576_, v_splitterName_2577_, v_matcherInput_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
return v_res_2584_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(lean_object* v_xs_2585_, lean_object* v_ys_2586_, lean_object* v_x_2587_){
_start:
{
lean_object* v_zero_2588_; uint8_t v_isZero_2589_; 
v_zero_2588_ = lean_unsigned_to_nat(0u);
v_isZero_2589_ = lean_nat_dec_eq(v_x_2587_, v_zero_2588_);
if (v_isZero_2589_ == 1)
{
lean_dec(v_x_2587_);
return v_isZero_2589_;
}
else
{
lean_object* v_one_2590_; lean_object* v_n_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; 
v_one_2590_ = lean_unsigned_to_nat(1u);
v_n_2591_ = lean_nat_sub(v_x_2587_, v_one_2590_);
lean_dec(v_x_2587_);
v___x_2592_ = lean_array_fget_borrowed(v_xs_2585_, v_n_2591_);
v___x_2593_ = lean_array_fget_borrowed(v_ys_2586_, v_n_2591_);
v___x_2594_ = l_Lean_Meta_Match_instBEqAltParamInfo_beq(v___x_2592_, v___x_2593_);
if (v___x_2594_ == 0)
{
lean_dec(v_n_2591_);
return v___x_2594_;
}
else
{
v_x_2587_ = v_n_2591_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg___boxed(lean_object* v_xs_2596_, lean_object* v_ys_2597_, lean_object* v_x_2598_){
_start:
{
uint8_t v_res_2599_; lean_object* v_r_2600_; 
v_res_2599_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_xs_2596_, v_ys_2597_, v_x_2598_);
lean_dec_ref(v_ys_2597_);
lean_dec_ref(v_xs_2596_);
v_r_2600_ = lean_box(v_res_2599_);
return v_r_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(lean_object* v_a_2601_, lean_object* v_b_2602_){
_start:
{
lean_object* v_array_2603_; lean_object* v_start_2604_; lean_object* v_stop_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2618_; 
v_array_2603_ = lean_ctor_get(v_a_2601_, 0);
v_start_2604_ = lean_ctor_get(v_a_2601_, 1);
v_stop_2605_ = lean_ctor_get(v_a_2601_, 2);
v_isSharedCheck_2618_ = !lean_is_exclusive(v_a_2601_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2607_ = v_a_2601_;
v_isShared_2608_ = v_isSharedCheck_2618_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_stop_2605_);
lean_inc(v_start_2604_);
lean_inc(v_array_2603_);
lean_dec(v_a_2601_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2618_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
uint8_t v___x_2609_; 
v___x_2609_ = lean_nat_dec_lt(v_start_2604_, v_stop_2605_);
if (v___x_2609_ == 0)
{
lean_del_object(v___x_2607_);
lean_dec(v_stop_2605_);
lean_dec(v_start_2604_);
lean_dec_ref(v_array_2603_);
return v_b_2602_;
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2610_ = lean_unsigned_to_nat(1u);
v___x_2611_ = lean_nat_add(v_start_2604_, v___x_2610_);
lean_inc_ref(v_array_2603_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 1, v___x_2611_);
v___x_2613_ = v___x_2607_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_array_2603_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v___x_2611_);
lean_ctor_set(v_reuseFailAlloc_2617_, 2, v_stop_2605_);
v___x_2613_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; 
v___x_2614_ = lean_array_fget(v_array_2603_, v_start_2604_);
lean_dec(v_start_2604_);
lean_dec_ref(v_array_2603_);
v___x_2615_ = lean_array_push(v_b_2602_, v___x_2614_);
v_a_2601_ = v___x_2613_;
v_b_2602_ = v___x_2615_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(lean_object* v_as_2619_, size_t v_sz_2620_, size_t v_i_2621_, lean_object* v_b_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
uint8_t v___x_2628_; 
v___x_2628_ = lean_usize_dec_lt(v_i_2621_, v_sz_2620_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; 
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_b_2622_);
return v___x_2629_;
}
else
{
lean_object* v_snd_2630_; lean_object* v_fst_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2683_; 
v_snd_2630_ = lean_ctor_get(v_b_2622_, 1);
v_fst_2631_ = lean_ctor_get(v_b_2622_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v_b_2622_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2633_ = v_b_2622_;
v_isShared_2634_ = v_isSharedCheck_2683_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_snd_2630_);
lean_inc(v_fst_2631_);
lean_dec(v_b_2622_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2683_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v_array_2635_; lean_object* v_start_2636_; lean_object* v_stop_2637_; uint8_t v___x_2638_; 
v_array_2635_ = lean_ctor_get(v_snd_2630_, 0);
v_start_2636_ = lean_ctor_get(v_snd_2630_, 1);
v_stop_2637_ = lean_ctor_get(v_snd_2630_, 2);
v___x_2638_ = lean_nat_dec_lt(v_start_2636_, v_stop_2637_);
if (v___x_2638_ == 0)
{
lean_object* v___x_2640_; 
if (v_isShared_2634_ == 0)
{
v___x_2640_ = v___x_2633_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_fst_2631_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_snd_2630_);
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
else
{
lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2679_; 
lean_inc(v_stop_2637_);
lean_inc(v_start_2636_);
lean_inc_ref(v_array_2635_);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_snd_2630_);
if (v_isSharedCheck_2679_ == 0)
{
lean_object* v_unused_2680_; lean_object* v_unused_2681_; lean_object* v_unused_2682_; 
v_unused_2680_ = lean_ctor_get(v_snd_2630_, 2);
lean_dec(v_unused_2680_);
v_unused_2681_ = lean_ctor_get(v_snd_2630_, 1);
lean_dec(v_unused_2681_);
v_unused_2682_ = lean_ctor_get(v_snd_2630_, 0);
lean_dec(v_unused_2682_);
v___x_2644_ = v_snd_2630_;
v_isShared_2645_ = v_isSharedCheck_2679_;
goto v_resetjp_2643_;
}
else
{
lean_dec(v_snd_2630_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2679_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v_a_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2651_; 
v_a_2646_ = lean_array_uget_borrowed(v_as_2619_, v_i_2621_);
v___x_2647_ = lean_array_fget(v_array_2635_, v_start_2636_);
v___x_2648_ = lean_unsigned_to_nat(1u);
v___x_2649_ = lean_nat_add(v_start_2636_, v___x_2648_);
lean_dec(v_start_2636_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 1, v___x_2649_);
v___x_2651_ = v___x_2644_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_array_2635_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2678_, 2, v_stop_2637_);
v___x_2651_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2652_; 
lean_inc(v_a_2646_);
v___x_2652_ = l_Lean_Meta_mkEqHEq(v_a_2646_, v___x_2647_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_object* v_a_2653_; lean_object* v___x_2654_; 
v_a_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_a_2653_);
lean_dec_ref_known(v___x_2652_, 1);
v___x_2654_ = l_Lean_mkArrow(v_a_2653_, v_fst_2631_, v___y_2625_, v___y_2626_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v___x_2651_);
lean_ctor_set(v___x_2633_, 0, v_a_2655_);
v___x_2657_ = v___x_2633_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_a_2655_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v___x_2651_);
v___x_2657_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
size_t v___x_2658_; size_t v___x_2659_; 
v___x_2658_ = ((size_t)1ULL);
v___x_2659_ = lean_usize_add(v_i_2621_, v___x_2658_);
v_i_2621_ = v___x_2659_;
v_b_2622_ = v___x_2657_;
goto _start;
}
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
lean_dec_ref(v___x_2651_);
lean_del_object(v___x_2633_);
v_a_2662_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2654_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2654_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec_ref(v___x_2651_);
lean_del_object(v___x_2633_);
lean_dec(v_fst_2631_);
v_a_2670_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2652_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2652_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7___boxed(lean_object* v_as_2684_, lean_object* v_sz_2685_, lean_object* v_i_2686_, lean_object* v_b_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
size_t v_sz_boxed_2693_; size_t v_i_boxed_2694_; lean_object* v_res_2695_; 
v_sz_boxed_2693_ = lean_unbox_usize(v_sz_2685_);
lean_dec(v_sz_2685_);
v_i_boxed_2694_ = lean_unbox_usize(v_i_2686_);
lean_dec(v_i_2686_);
v_res_2695_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v_as_2684_, v_sz_boxed_2693_, v_i_boxed_2694_, v_b_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec_ref(v_as_2684_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(lean_object* v___x_2696_, lean_object* v___x_2697_, lean_object* v_as_2698_, size_t v_sz_2699_, size_t v_i_2700_, lean_object* v_b_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v_a_2708_; uint8_t v___x_2712_; 
v___x_2712_ = lean_usize_dec_lt(v_i_2700_, v_sz_2699_);
if (v___x_2712_ == 0)
{
lean_object* v___x_2713_; 
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v_b_2701_);
return v___x_2713_;
}
else
{
lean_object* v___x_2714_; lean_object* v_a_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2714_ = l_Lean_instInhabitedExpr;
v_a_2715_ = lean_array_uget_borrowed(v_as_2698_, v_i_2700_);
v___x_2716_ = lean_array_get_borrowed(v___x_2714_, v___x_2696_, v_a_2715_);
lean_inc(v___x_2716_);
v___x_2717_ = l_Lean_Meta_instantiateForall(v___x_2716_, v___x_2697_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2717_, 1);
v___x_2719_ = lean_array_get_size(v___x_2697_);
v___x_2720_ = l_Lean_Meta_Match_simpH_x3f(v_a_2718_, v___x_2719_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; 
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v___x_2720_, 1);
if (lean_obj_tag(v_a_2721_) == 1)
{
lean_object* v_val_2722_; lean_object* v___x_2723_; 
v_val_2722_ = lean_ctor_get(v_a_2721_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v_a_2721_, 1);
v___x_2723_ = lean_array_push(v_b_2701_, v_val_2722_);
v_a_2708_ = v___x_2723_;
goto v___jp_2707_;
}
else
{
lean_dec(v_a_2721_);
v_a_2708_ = v_b_2701_;
goto v___jp_2707_;
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec_ref(v_b_2701_);
v_a_2724_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2720_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2720_);
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
lean_dec_ref(v_b_2701_);
v_a_2732_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2717_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2717_);
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
v___jp_2707_:
{
size_t v___x_2709_; size_t v___x_2710_; 
v___x_2709_ = ((size_t)1ULL);
v___x_2710_ = lean_usize_add(v_i_2700_, v___x_2709_);
v_i_2700_ = v___x_2710_;
v_b_2701_ = v_a_2708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5___boxed(lean_object* v___x_2740_, lean_object* v___x_2741_, lean_object* v_as_2742_, lean_object* v_sz_2743_, lean_object* v_i_2744_, lean_object* v_b_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
size_t v_sz_boxed_2751_; size_t v_i_boxed_2752_; lean_object* v_res_2753_; 
v_sz_boxed_2751_ = lean_unbox_usize(v_sz_2743_);
lean_dec(v_sz_2743_);
v_i_boxed_2752_ = lean_unbox_usize(v_i_2744_);
lean_dec(v_i_2744_);
v_res_2753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(v___x_2740_, v___x_2741_, v_as_2742_, v_sz_boxed_2751_, v_i_boxed_2752_, v_b_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec_ref(v_as_2742_);
lean_dec_ref(v___x_2741_);
lean_dec_ref(v___x_2740_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(lean_object* v___x_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v___x_2757_, lean_object* v___x_2758_, lean_object* v___x_2759_, lean_object* v___x_2760_, lean_object* v___x_2761_, lean_object* v_rhsArgs_2762_, lean_object* v_a_2763_, lean_object* v_ys_2764_, uint8_t v___x_2765_, uint8_t v___x_2766_, uint8_t v___x_2767_, lean_object* v_matchDeclName_2768_, lean_object* v___x_2769_, lean_object* v___x_2770_, lean_object* v___x_2771_, lean_object* v___x_2772_, lean_object* v___x_2773_, lean_object* v_argMask_2774_, lean_object* v_a_2775_, lean_object* v_alts_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2782_ = lean_array_get_borrowed(v___x_2754_, v_alts_2776_, v_a_2755_);
v___x_2783_ = l_Lean_ConstantInfo_name(v_a_2756_);
v___x_2784_ = l_Lean_mkConst(v___x_2783_, v___x_2757_);
v___x_2785_ = l_Subarray_copy___redArg(v___x_2758_);
v___x_2786_ = lean_mk_empty_array_with_capacity(v___x_2759_);
v___x_2787_ = lean_array_push(v___x_2786_, v___x_2760_);
v___x_2788_ = l_Array_append___redArg(v___x_2785_, v___x_2787_);
lean_dec_ref(v___x_2787_);
lean_inc_ref(v___x_2788_);
v___x_2789_ = l_Array_append___redArg(v___x_2788_, v___x_2761_);
v___x_2790_ = l_Array_append___redArg(v___x_2789_, v_alts_2776_);
v___x_2791_ = l_Lean_mkAppN(v___x_2784_, v___x_2790_);
lean_dec_ref(v___x_2790_);
lean_inc(v___x_2782_);
v___x_2792_ = l_Lean_mkAppN(v___x_2782_, v_rhsArgs_2762_);
v___x_2793_ = l_Lean_Meta_mkEq(v___x_2791_, v___x_2792_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2795_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v___x_2793_, 1);
v___x_2795_ = l_Lean_mkArrowN(v_a_2763_, v_a_2794_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2797_ = l_Array_append___redArg(v___x_2788_, v_ys_2764_);
v___x_2798_ = l_Array_append___redArg(v___x_2797_, v_alts_2776_);
v___x_2799_ = l_Lean_Meta_mkForallFVars(v___x_2798_, v_a_2796_, v___x_2765_, v___x_2766_, v___x_2766_, v___x_2767_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
lean_dec_ref(v___x_2798_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2801_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
v___x_2801_ = l_Lean_Meta_Match_unfoldNamedPattern(v_a_2800_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2803_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc_n(v_a_2802_, 2);
lean_dec_ref_known(v___x_2801_, 1);
lean_inc(v___x_2769_);
v___x_2803_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_2768_, v_a_2802_, v___x_2769_, v___x_2769_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2803_, 1);
lean_inc(v___x_2770_);
v___x_2805_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2770_);
lean_ctor_set(v___x_2805_, 1, v___x_2771_);
lean_ctor_set(v___x_2805_, 2, v_a_2802_);
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2770_);
lean_ctor_set(v___x_2806_, 1, v___x_2772_);
v___x_2807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2805_);
lean_ctor_set(v___x_2807_, 1, v_a_2804_);
lean_ctor_set(v___x_2807_, 2, v___x_2806_);
v___x_2808_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
v___x_2809_ = l_Lean_addDecl(v___x_2808_, v___x_2765_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2818_; 
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2818_ == 0)
{
lean_object* v_unused_2819_; 
v_unused_2819_ = lean_ctor_get(v___x_2809_, 0);
lean_dec(v_unused_2819_);
v___x_2811_ = v___x_2809_;
v_isShared_2812_ = v_isSharedCheck_2818_;
goto v_resetjp_2810_;
}
else
{
lean_dec(v___x_2809_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2818_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2773_);
lean_ctor_set(v___x_2813_, 1, v_argMask_2774_);
v___x_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2814_, 0, v_a_2775_);
lean_ctor_set(v___x_2814_, 1, v___x_2813_);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v___x_2814_);
v___x_2816_ = v___x_2811_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v___x_2814_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
v_a_2820_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2809_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2809_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec(v_a_2802_);
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2772_);
lean_dec(v___x_2771_);
lean_dec(v___x_2770_);
v_a_2828_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2803_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2803_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2772_);
lean_dec(v___x_2771_);
lean_dec(v___x_2770_);
lean_dec(v___x_2769_);
lean_dec(v_matchDeclName_2768_);
v_a_2836_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2801_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2801_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2772_);
lean_dec(v___x_2771_);
lean_dec(v___x_2770_);
lean_dec(v___x_2769_);
lean_dec(v_matchDeclName_2768_);
v_a_2844_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2799_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2799_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
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
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec_ref(v___x_2788_);
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2772_);
lean_dec(v___x_2771_);
lean_dec(v___x_2770_);
lean_dec(v___x_2769_);
lean_dec(v_matchDeclName_2768_);
v_a_2852_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2795_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2795_);
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
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v___x_2788_);
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_argMask_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2772_);
lean_dec(v___x_2771_);
lean_dec(v___x_2770_);
lean_dec(v___x_2769_);
lean_dec(v_matchDeclName_2768_);
v_a_2860_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2793_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2793_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_2868_ = _args[0];
lean_object* v_a_2869_ = _args[1];
lean_object* v_a_2870_ = _args[2];
lean_object* v___x_2871_ = _args[3];
lean_object* v___x_2872_ = _args[4];
lean_object* v___x_2873_ = _args[5];
lean_object* v___x_2874_ = _args[6];
lean_object* v___x_2875_ = _args[7];
lean_object* v_rhsArgs_2876_ = _args[8];
lean_object* v_a_2877_ = _args[9];
lean_object* v_ys_2878_ = _args[10];
lean_object* v___x_2879_ = _args[11];
lean_object* v___x_2880_ = _args[12];
lean_object* v___x_2881_ = _args[13];
lean_object* v_matchDeclName_2882_ = _args[14];
lean_object* v___x_2883_ = _args[15];
lean_object* v___x_2884_ = _args[16];
lean_object* v___x_2885_ = _args[17];
lean_object* v___x_2886_ = _args[18];
lean_object* v___x_2887_ = _args[19];
lean_object* v_argMask_2888_ = _args[20];
lean_object* v_a_2889_ = _args[21];
lean_object* v_alts_2890_ = _args[22];
lean_object* v___y_2891_ = _args[23];
lean_object* v___y_2892_ = _args[24];
lean_object* v___y_2893_ = _args[25];
lean_object* v___y_2894_ = _args[26];
lean_object* v___y_2895_ = _args[27];
_start:
{
uint8_t v___x_18515__boxed_2896_; uint8_t v___x_18516__boxed_2897_; uint8_t v___x_18517__boxed_2898_; lean_object* v_res_2899_; 
v___x_18515__boxed_2896_ = lean_unbox(v___x_2879_);
v___x_18516__boxed_2897_ = lean_unbox(v___x_2880_);
v___x_18517__boxed_2898_ = lean_unbox(v___x_2881_);
v_res_2899_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(v___x_2868_, v_a_2869_, v_a_2870_, v___x_2871_, v___x_2872_, v___x_2873_, v___x_2874_, v___x_2875_, v_rhsArgs_2876_, v_a_2877_, v_ys_2878_, v___x_18515__boxed_2896_, v___x_18516__boxed_2897_, v___x_18517__boxed_2898_, v_matchDeclName_2882_, v___x_2883_, v___x_2884_, v___x_2885_, v___x_2886_, v___x_2887_, v_argMask_2888_, v_a_2889_, v_alts_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec_ref(v_alts_2890_);
lean_dec_ref(v_ys_2878_);
lean_dec_ref(v_a_2877_);
lean_dec_ref(v_rhsArgs_2876_);
lean_dec_ref(v___x_2875_);
lean_dec(v___x_2873_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v___x_2868_);
return v_res_2899_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2900_; lean_object* v_dummy_2901_; 
v___x_2900_ = lean_box(0);
v_dummy_2901_ = l_Lean_Expr_sort___override(v___x_2900_);
return v_dummy_2901_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2905_ = lean_box(0);
v___x_2906_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2));
v___x_2907_ = l_Lean_mkConst(v___x_2906_, v___x_2905_);
return v___x_2907_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2909_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4));
v___x_2910_ = l_Lean_stringToMessageData(v___x_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(lean_object* v___x_2911_, lean_object* v_overlaps_2912_, lean_object* v_a_2913_, lean_object* v_fst_2914_, lean_object* v___x_2915_, lean_object* v___x_2916_, lean_object* v___x_2917_, uint8_t v___x_2918_, lean_object* v___x_2919_, lean_object* v_a_2920_, lean_object* v___x_2921_, lean_object* v___x_2922_, lean_object* v___x_2923_, lean_object* v_matchDeclName_2924_, lean_object* v___x_2925_, lean_object* v___x_2926_, lean_object* v___x_2927_, lean_object* v___x_2928_, lean_object* v___x_2929_, lean_object* v_ys_2930_, lean_object* v___eqs_2931_, lean_object* v_rhsArgs_2932_, lean_object* v_argMask_2933_, lean_object* v_altResultType_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v_dummy_2940_; lean_object* v_nargs_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; size_t v_sz_2946_; size_t v___x_2947_; lean_object* v___x_2948_; 
v_dummy_2940_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0);
v_nargs_2941_ = l_Lean_Expr_getAppNumArgs(v_altResultType_2934_);
lean_inc(v_nargs_2941_);
v___x_2942_ = lean_mk_array(v_nargs_2941_, v_dummy_2940_);
v___x_2943_ = lean_nat_sub(v_nargs_2941_, v___x_2911_);
lean_dec(v_nargs_2941_);
v___x_2944_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_altResultType_2934_, v___x_2942_, v___x_2943_);
v___x_2945_ = l_Lean_Meta_Match_Overlaps_overlapping(v_overlaps_2912_, v_a_2913_);
v_sz_2946_ = lean_array_size(v___x_2945_);
v___x_2947_ = ((size_t)0ULL);
lean_inc_ref(v___x_2915_);
v___x_2948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(v_fst_2914_, v___x_2944_, v___x_2945_, v_sz_2946_, v___x_2947_, v___x_2915_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec_ref(v___x_2945_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v_a_2949_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; uint8_t v___y_2955_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v_toCold_3008_; lean_object* v_options_3009_; uint8_t v_hasTrace_3010_; 
v_a_2949_ = lean_ctor_get(v___x_2948_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2948_, 1);
v_toCold_3008_ = lean_ctor_get(v___y_2937_, 0);
v_options_3009_ = lean_ctor_get(v_toCold_3008_, 2);
v_hasTrace_3010_ = lean_ctor_get_uint8(v_options_3009_, sizeof(void*)*1);
if (v_hasTrace_3010_ == 0)
{
v___y_2999_ = v___y_2935_;
v___y_3000_ = v___y_2936_;
v___y_3001_ = v___y_2937_;
v___y_3002_ = v___y_2938_;
goto v___jp_2998_;
}
else
{
lean_object* v_inheritedTraceOptions_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v_inheritedTraceOptions_3011_ = lean_ctor_get(v_toCold_3008_, 11);
v___x_3012_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
v___x_3013_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_3014_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3011_, v_options_3009_, v___x_3013_);
if (v___x_3014_ == 0)
{
v___y_2999_ = v___y_2935_;
v___y_3000_ = v___y_2936_;
v___y_3001_ = v___y_2937_;
v___y_3002_ = v___y_2938_;
goto v___jp_2998_;
}
else
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3015_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5);
lean_inc(v_a_2949_);
v___x_3016_ = lean_array_to_list(v_a_2949_);
v___x_3017_ = lean_box(0);
v___x_3018_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_3016_, v___x_3017_);
v___x_3019_ = l_Lean_MessageData_ofList(v___x_3018_);
v___x_3020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3015_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_3012_, v___x_3020_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_dec_ref_known(v___x_3021_, 1);
v___y_2999_ = v___y_2935_;
v___y_3000_ = v___y_2936_;
v___y_3001_ = v___y_2937_;
v___y_3002_ = v___y_2938_;
goto v___jp_2998_;
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
lean_dec(v_a_2949_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v_argMask_2933_);
lean_dec_ref(v_rhsArgs_2932_);
lean_dec_ref(v_ys_2930_);
lean_dec_ref(v___x_2928_);
lean_dec(v___x_2927_);
lean_dec(v___x_2926_);
lean_dec(v___x_2925_);
lean_dec(v_matchDeclName_2924_);
lean_dec_ref(v___x_2923_);
lean_dec_ref(v___x_2922_);
lean_dec(v___x_2921_);
lean_dec_ref(v_a_2920_);
lean_dec_ref(v___x_2919_);
lean_dec_ref(v___x_2917_);
lean_dec(v___x_2916_);
lean_dec_ref(v___x_2915_);
lean_dec(v_a_2913_);
lean_dec(v___x_2911_);
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
}
v___jp_2950_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; size_t v_sz_2966_; lean_object* v___x_2967_; 
v___x_2956_ = lean_array_get_size(v_ys_2930_);
v___x_2957_ = lean_array_get_size(v_a_2949_);
v___x_2958_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2958_, 0, v___x_2956_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
lean_ctor_set_uint8(v___x_2958_, sizeof(void*)*2, v___y_2955_);
v___x_2959_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3);
lean_inc_ref(v___x_2944_);
v___x_2960_ = l_Array_reverse___redArg(v___x_2944_);
v___x_2961_ = lean_array_get_size(v___x_2960_);
lean_inc(v___x_2916_);
v___x_2962_ = l_Array_toSubarray___redArg(v___x_2960_, v___x_2916_, v___x_2961_);
lean_inc_ref(v___x_2917_);
v___x_2963_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v___x_2917_, v___x_2915_);
v___x_2964_ = l_Array_reverse___redArg(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2959_);
lean_ctor_set(v___x_2965_, 1, v___x_2962_);
v_sz_2966_ = lean_array_size(v___x_2964_);
v___x_2967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v___x_2964_, v_sz_2966_, v___x_2947_, v___x_2965_, v___y_2951_, v___y_2953_, v___y_2952_, v___y_2954_);
lean_dec_ref(v___x_2964_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; lean_object* v_fst_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; uint8_t v___x_2972_; uint8_t v___x_2973_; lean_object* v___x_2974_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v___x_2967_, 1);
v_fst_2969_ = lean_ctor_get(v_a_2968_, 0);
lean_inc(v_fst_2969_);
lean_dec(v_a_2968_);
v___x_2970_ = l_Subarray_copy___redArg(v___x_2917_);
lean_inc_ref(v___x_2970_);
v___x_2971_ = l_Array_append___redArg(v___x_2970_, v_ys_2930_);
v___x_2972_ = 0;
v___x_2973_ = 1;
v___x_2974_ = l_Lean_Meta_mkForallFVars(v___x_2971_, v_fst_2969_, v___x_2972_, v___x_2918_, v___x_2918_, v___x_2973_, v___y_2951_, v___y_2953_, v___y_2952_, v___y_2954_);
lean_dec_ref(v___x_2971_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___f_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_2976_ = lean_box(v___x_2972_);
v___x_2977_ = lean_box(v___x_2918_);
v___x_2978_ = lean_box(v___x_2973_);
lean_inc_ref(v___x_2944_);
v___f_2979_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed), 28, 22);
lean_closure_set(v___f_2979_, 0, v___x_2919_);
lean_closure_set(v___f_2979_, 1, v_a_2913_);
lean_closure_set(v___f_2979_, 2, v_a_2920_);
lean_closure_set(v___f_2979_, 3, v___x_2921_);
lean_closure_set(v___f_2979_, 4, v___x_2922_);
lean_closure_set(v___f_2979_, 5, v___x_2911_);
lean_closure_set(v___f_2979_, 6, v___x_2923_);
lean_closure_set(v___f_2979_, 7, v___x_2944_);
lean_closure_set(v___f_2979_, 8, v_rhsArgs_2932_);
lean_closure_set(v___f_2979_, 9, v_a_2949_);
lean_closure_set(v___f_2979_, 10, v_ys_2930_);
lean_closure_set(v___f_2979_, 11, v___x_2976_);
lean_closure_set(v___f_2979_, 12, v___x_2977_);
lean_closure_set(v___f_2979_, 13, v___x_2978_);
lean_closure_set(v___f_2979_, 14, v_matchDeclName_2924_);
lean_closure_set(v___f_2979_, 15, v___x_2916_);
lean_closure_set(v___f_2979_, 16, v___x_2925_);
lean_closure_set(v___f_2979_, 17, v___x_2926_);
lean_closure_set(v___f_2979_, 18, v___x_2927_);
lean_closure_set(v___f_2979_, 19, v___x_2958_);
lean_closure_set(v___f_2979_, 20, v_argMask_2933_);
lean_closure_set(v___f_2979_, 21, v_a_2975_);
v___x_2980_ = l_Subarray_copy___redArg(v___x_2928_);
v___x_2981_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v___x_2929_, v___x_2970_, v___x_2944_, v___x_2980_, v___f_2979_, v___y_2951_, v___y_2953_, v___y_2952_, v___y_2954_);
return v___x_2981_;
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec_ref(v___x_2970_);
lean_dec_ref_known(v___x_2958_, 2);
lean_dec(v_a_2949_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v_argMask_2933_);
lean_dec_ref(v_rhsArgs_2932_);
lean_dec_ref(v_ys_2930_);
lean_dec_ref(v___x_2928_);
lean_dec(v___x_2927_);
lean_dec(v___x_2926_);
lean_dec(v___x_2925_);
lean_dec(v_matchDeclName_2924_);
lean_dec_ref(v___x_2923_);
lean_dec_ref(v___x_2922_);
lean_dec(v___x_2921_);
lean_dec_ref(v_a_2920_);
lean_dec_ref(v___x_2919_);
lean_dec(v___x_2916_);
lean_dec(v_a_2913_);
lean_dec(v___x_2911_);
v_a_2982_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2974_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2974_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
else
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref_known(v___x_2958_, 2);
lean_dec(v_a_2949_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v_argMask_2933_);
lean_dec_ref(v_rhsArgs_2932_);
lean_dec_ref(v_ys_2930_);
lean_dec_ref(v___x_2928_);
lean_dec(v___x_2927_);
lean_dec(v___x_2926_);
lean_dec(v___x_2925_);
lean_dec(v_matchDeclName_2924_);
lean_dec_ref(v___x_2923_);
lean_dec_ref(v___x_2922_);
lean_dec(v___x_2921_);
lean_dec_ref(v_a_2920_);
lean_dec_ref(v___x_2919_);
lean_dec_ref(v___x_2917_);
lean_dec(v___x_2916_);
lean_dec(v_a_2913_);
lean_dec(v___x_2911_);
v_a_2990_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2967_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2967_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2990_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
v___jp_2998_:
{
lean_object* v___x_3003_; uint8_t v___x_3004_; 
v___x_3003_ = lean_array_get_size(v_ys_2930_);
v___x_3004_ = lean_nat_dec_eq(v___x_3003_, v___x_2916_);
if (v___x_3004_ == 0)
{
v___y_2951_ = v___y_2999_;
v___y_2952_ = v___y_3001_;
v___y_2953_ = v___y_3000_;
v___y_2954_ = v___y_3002_;
v___y_2955_ = v___x_3004_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3005_ = lean_array_get_size(v_a_2949_);
v___x_3006_ = lean_nat_dec_eq(v___x_3005_, v___x_2916_);
if (v___x_3006_ == 0)
{
v___y_2951_ = v___y_2999_;
v___y_2952_ = v___y_3001_;
v___y_2953_ = v___y_3000_;
v___y_2954_ = v___y_3002_;
v___y_2955_ = v___x_3006_;
goto v___jp_2950_;
}
else
{
uint8_t v___x_3007_; 
v___x_3007_ = lean_nat_dec_eq(v___x_2929_, v___x_2916_);
v___y_2951_ = v___y_2999_;
v___y_2952_ = v___y_3001_;
v___y_2953_ = v___y_3000_;
v___y_2954_ = v___y_3002_;
v___y_2955_ = v___x_3007_;
goto v___jp_2950_;
}
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec_ref(v___x_2944_);
lean_dec_ref(v_argMask_2933_);
lean_dec_ref(v_rhsArgs_2932_);
lean_dec_ref(v_ys_2930_);
lean_dec_ref(v___x_2928_);
lean_dec(v___x_2927_);
lean_dec(v___x_2926_);
lean_dec(v___x_2925_);
lean_dec(v_matchDeclName_2924_);
lean_dec_ref(v___x_2923_);
lean_dec_ref(v___x_2922_);
lean_dec(v___x_2921_);
lean_dec_ref(v_a_2920_);
lean_dec_ref(v___x_2919_);
lean_dec_ref(v___x_2917_);
lean_dec(v___x_2916_);
lean_dec_ref(v___x_2915_);
lean_dec(v_a_2913_);
lean_dec(v___x_2911_);
v_a_3030_ = lean_ctor_get(v___x_2948_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2948_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_2948_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_2948_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_3038_ = _args[0];
lean_object* v_overlaps_3039_ = _args[1];
lean_object* v_a_3040_ = _args[2];
lean_object* v_fst_3041_ = _args[3];
lean_object* v___x_3042_ = _args[4];
lean_object* v___x_3043_ = _args[5];
lean_object* v___x_3044_ = _args[6];
lean_object* v___x_3045_ = _args[7];
lean_object* v___x_3046_ = _args[8];
lean_object* v_a_3047_ = _args[9];
lean_object* v___x_3048_ = _args[10];
lean_object* v___x_3049_ = _args[11];
lean_object* v___x_3050_ = _args[12];
lean_object* v_matchDeclName_3051_ = _args[13];
lean_object* v___x_3052_ = _args[14];
lean_object* v___x_3053_ = _args[15];
lean_object* v___x_3054_ = _args[16];
lean_object* v___x_3055_ = _args[17];
lean_object* v___x_3056_ = _args[18];
lean_object* v_ys_3057_ = _args[19];
lean_object* v___eqs_3058_ = _args[20];
lean_object* v_rhsArgs_3059_ = _args[21];
lean_object* v_argMask_3060_ = _args[22];
lean_object* v_altResultType_3061_ = _args[23];
lean_object* v___y_3062_ = _args[24];
lean_object* v___y_3063_ = _args[25];
lean_object* v___y_3064_ = _args[26];
lean_object* v___y_3065_ = _args[27];
lean_object* v___y_3066_ = _args[28];
_start:
{
uint8_t v___x_18783__boxed_3067_; lean_object* v_res_3068_; 
v___x_18783__boxed_3067_ = lean_unbox(v___x_3045_);
v_res_3068_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(v___x_3038_, v_overlaps_3039_, v_a_3040_, v_fst_3041_, v___x_3042_, v___x_3043_, v___x_3044_, v___x_18783__boxed_3067_, v___x_3046_, v_a_3047_, v___x_3048_, v___x_3049_, v___x_3050_, v_matchDeclName_3051_, v___x_3052_, v___x_3053_, v___x_3054_, v___x_3055_, v___x_3056_, v_ys_3057_, v___eqs_3058_, v_rhsArgs_3059_, v_argMask_3060_, v_altResultType_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec_ref(v___eqs_3058_);
lean_dec(v___x_3056_);
lean_dec(v_fst_3041_);
lean_dec_ref(v_overlaps_3039_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(lean_object* v_upperBound_3069_, lean_object* v_val_3070_, lean_object* v_baseName_3071_, lean_object* v___x_3072_, lean_object* v_a_3073_, lean_object* v___x_3074_, lean_object* v___x_3075_, lean_object* v___x_3076_, lean_object* v_matchDeclName_3077_, lean_object* v___x_3078_, lean_object* v___x_3079_, lean_object* v___x_3080_, lean_object* v_a_3081_, lean_object* v_b_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
uint8_t v___x_3088_; 
v___x_3088_ = lean_nat_dec_lt(v_a_3081_, v_upperBound_3069_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; 
lean_dec(v_a_3081_);
lean_dec(v___x_3080_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3078_);
lean_dec(v_matchDeclName_3077_);
lean_dec_ref(v___x_3076_);
lean_dec_ref(v___x_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v_a_3073_);
lean_dec_ref(v___x_3072_);
lean_dec(v_baseName_3071_);
lean_dec_ref(v_val_3070_);
v___x_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_b_3082_);
return v___x_3089_;
}
else
{
lean_object* v_snd_3090_; lean_object* v_snd_3091_; lean_object* v_snd_3092_; lean_object* v_fst_3093_; lean_object* v_fst_3094_; lean_object* v_fst_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3178_; 
v_snd_3090_ = lean_ctor_get(v_b_3082_, 1);
lean_inc(v_snd_3090_);
v_snd_3091_ = lean_ctor_get(v_snd_3090_, 1);
lean_inc(v_snd_3091_);
v_snd_3092_ = lean_ctor_get(v_snd_3091_, 1);
lean_inc(v_snd_3092_);
v_fst_3093_ = lean_ctor_get(v_b_3082_, 0);
lean_inc(v_fst_3093_);
lean_dec_ref(v_b_3082_);
v_fst_3094_ = lean_ctor_get(v_snd_3090_, 0);
lean_inc(v_fst_3094_);
lean_dec(v_snd_3090_);
v_fst_3095_ = lean_ctor_get(v_snd_3091_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v_snd_3091_);
if (v_isSharedCheck_3178_ == 0)
{
lean_object* v_unused_3179_; 
v_unused_3179_ = lean_ctor_get(v_snd_3091_, 1);
lean_dec(v_unused_3179_);
v___x_3097_ = v_snd_3091_;
v_isShared_3098_ = v_isSharedCheck_3178_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_fst_3095_);
lean_dec(v_snd_3091_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3178_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v_fst_3099_; lean_object* v_snd_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3177_; 
v_fst_3099_ = lean_ctor_get(v_snd_3092_, 0);
v_snd_3100_ = lean_ctor_get(v_snd_3092_, 1);
v_isSharedCheck_3177_ = !lean_is_exclusive(v_snd_3092_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3102_ = v_snd_3092_;
v_isShared_3103_ = v_isSharedCheck_3177_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_snd_3100_);
lean_inc(v_fst_3099_);
lean_dec(v_snd_3092_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3177_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v_altInfos_3104_; lean_object* v_overlaps_3105_; lean_object* v_start_3106_; lean_object* v_stop_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___f_3119_; lean_object* v___x_3120_; lean_object* v___y_3122_; lean_object* v___x_3173_; uint8_t v___x_3174_; 
v_altInfos_3104_ = lean_ctor_get(v_val_3070_, 2);
v_overlaps_3105_ = lean_ctor_get(v_val_3070_, 5);
v_start_3106_ = lean_ctor_get(v___x_3079_, 1);
v_stop_3107_ = lean_ctor_get(v___x_3079_, 2);
v___x_3108_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_3109_ = l_Lean_instInhabitedExpr;
v___x_3110_ = lean_unsigned_to_nat(0u);
v___x_3111_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0));
v___x_3112_ = lean_box(0);
v___x_3113_ = lean_unsigned_to_nat(1u);
v___x_3114_ = lean_array_get_borrowed(v___x_3108_, v_altInfos_3104_, v_a_3081_);
v___x_3115_ = l_Lean_Meta_eqnThmSuffixBase;
lean_inc(v_baseName_3071_);
v___x_3116_ = l_Lean_Name_str___override(v_baseName_3071_, v___x_3115_);
lean_inc(v_fst_3095_);
v___x_3117_ = lean_name_append_index_after(v___x_3116_, v_fst_3095_);
v___x_3118_ = lean_box(v___x_3088_);
lean_inc(v___x_3080_);
lean_inc_ref(v___x_3079_);
lean_inc(v___x_3078_);
lean_inc(v___x_3117_);
lean_inc(v_matchDeclName_3077_);
lean_inc_ref(v___x_3076_);
lean_inc_ref(v___x_3075_);
lean_inc(v___x_3074_);
lean_inc_ref(v_a_3073_);
lean_inc_ref(v___x_3072_);
lean_inc(v_fst_3094_);
lean_inc(v_a_3081_);
lean_inc_ref(v_overlaps_3105_);
v___f_3119_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed), 29, 19);
lean_closure_set(v___f_3119_, 0, v___x_3113_);
lean_closure_set(v___f_3119_, 1, v_overlaps_3105_);
lean_closure_set(v___f_3119_, 2, v_a_3081_);
lean_closure_set(v___f_3119_, 3, v_fst_3094_);
lean_closure_set(v___f_3119_, 4, v___x_3111_);
lean_closure_set(v___f_3119_, 5, v___x_3110_);
lean_closure_set(v___f_3119_, 6, v___x_3072_);
lean_closure_set(v___f_3119_, 7, v___x_3118_);
lean_closure_set(v___f_3119_, 8, v___x_3109_);
lean_closure_set(v___f_3119_, 9, v_a_3073_);
lean_closure_set(v___f_3119_, 10, v___x_3074_);
lean_closure_set(v___f_3119_, 11, v___x_3075_);
lean_closure_set(v___f_3119_, 12, v___x_3076_);
lean_closure_set(v___f_3119_, 13, v_matchDeclName_3077_);
lean_closure_set(v___f_3119_, 14, v___x_3117_);
lean_closure_set(v___f_3119_, 15, v___x_3078_);
lean_closure_set(v___f_3119_, 16, v___x_3112_);
lean_closure_set(v___f_3119_, 17, v___x_3079_);
lean_closure_set(v___f_3119_, 18, v___x_3080_);
v___x_3120_ = lean_array_push(v_fst_3093_, v___x_3117_);
v___x_3173_ = lean_nat_sub(v_stop_3107_, v_start_3106_);
v___x_3174_ = lean_nat_dec_lt(v_a_3081_, v___x_3173_);
lean_dec(v___x_3173_);
if (v___x_3174_ == 0)
{
lean_object* v___x_3175_; 
v___x_3175_ = l_outOfBounds___redArg(v___x_3109_);
v___y_3122_ = v___x_3175_;
goto v___jp_3121_;
}
else
{
lean_object* v___x_3176_; 
v___x_3176_ = l_Subarray_get___redArg(v___x_3079_, v_a_3081_);
v___y_3122_ = v___x_3176_;
goto v___jp_3121_;
}
v___jp_3121_:
{
lean_object* v___x_3123_; 
lean_inc(v___y_3086_);
lean_inc_ref(v___y_3085_);
lean_inc(v___y_3084_);
lean_inc_ref(v___y_3083_);
v___x_3123_ = lean_infer_type(v___y_3122_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
lean_inc(v___x_3080_);
lean_inc(v___x_3114_);
v___x_3125_ = l_Lean_Meta_Match_forallAltTelescope___redArg(v_a_3124_, v___x_3114_, v___x_3080_, v___f_3119_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v_snd_3127_; lean_object* v_fst_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3156_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v_snd_3127_ = lean_ctor_get(v_a_3126_, 1);
v_fst_3128_ = lean_ctor_get(v_a_3126_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v_a_3126_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3130_ = v_a_3126_;
v_isShared_3131_ = v_isSharedCheck_3156_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_snd_3127_);
lean_inc(v_fst_3128_);
lean_dec(v_a_3126_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3156_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v_fst_3132_; lean_object* v_snd_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3155_; 
v_fst_3132_ = lean_ctor_get(v_snd_3127_, 0);
v_snd_3133_ = lean_ctor_get(v_snd_3127_, 1);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_snd_3127_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3135_ = v_snd_3127_;
v_isShared_3136_ = v_isSharedCheck_3155_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_snd_3133_);
lean_inc(v_fst_3132_);
lean_dec(v_snd_3127_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3155_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3142_; 
v___x_3137_ = lean_array_push(v_fst_3094_, v_fst_3128_);
v___x_3138_ = lean_array_push(v_fst_3099_, v_fst_3132_);
v___x_3139_ = lean_array_push(v_snd_3100_, v_snd_3133_);
v___x_3140_ = lean_nat_add(v_fst_3095_, v___x_3113_);
lean_dec(v_fst_3095_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 1, v___x_3139_);
lean_ctor_set(v___x_3135_, 0, v___x_3138_);
v___x_3142_ = v___x_3135_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3138_);
lean_ctor_set(v_reuseFailAlloc_3154_, 1, v___x_3139_);
v___x_3142_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
lean_object* v___x_3144_; 
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 1, v___x_3142_);
lean_ctor_set(v___x_3130_, 0, v___x_3140_);
v___x_3144_ = v___x_3130_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v___x_3140_);
lean_ctor_set(v_reuseFailAlloc_3153_, 1, v___x_3142_);
v___x_3144_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3146_; 
if (v_isShared_3103_ == 0)
{
lean_ctor_set(v___x_3102_, 1, v___x_3144_);
lean_ctor_set(v___x_3102_, 0, v___x_3137_);
v___x_3146_ = v___x_3102_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3137_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v___x_3144_);
v___x_3146_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
lean_object* v___x_3148_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 1, v___x_3146_);
lean_ctor_set(v___x_3097_, 0, v___x_3120_);
v___x_3148_ = v___x_3097_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3151_, 1, v___x_3146_);
v___x_3148_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
lean_object* v___x_3149_; 
v___x_3149_ = lean_nat_add(v_a_3081_, v___x_3113_);
lean_dec(v_a_3081_);
v_a_3081_ = v___x_3149_;
v_b_3082_ = v___x_3148_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec_ref(v___x_3120_);
lean_del_object(v___x_3102_);
lean_dec(v_snd_3100_);
lean_dec(v_fst_3099_);
lean_del_object(v___x_3097_);
lean_dec(v_fst_3095_);
lean_dec(v_fst_3094_);
lean_dec(v_a_3081_);
lean_dec(v___x_3080_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3078_);
lean_dec(v_matchDeclName_3077_);
lean_dec_ref(v___x_3076_);
lean_dec_ref(v___x_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v_a_3073_);
lean_dec_ref(v___x_3072_);
lean_dec(v_baseName_3071_);
lean_dec_ref(v_val_3070_);
v_a_3157_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3125_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3125_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_dec_ref(v___x_3120_);
lean_dec_ref(v___f_3119_);
lean_del_object(v___x_3102_);
lean_dec(v_snd_3100_);
lean_dec(v_fst_3099_);
lean_del_object(v___x_3097_);
lean_dec(v_fst_3095_);
lean_dec(v_fst_3094_);
lean_dec(v_a_3081_);
lean_dec(v___x_3080_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3078_);
lean_dec(v_matchDeclName_3077_);
lean_dec_ref(v___x_3076_);
lean_dec_ref(v___x_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v_a_3073_);
lean_dec_ref(v___x_3072_);
lean_dec(v_baseName_3071_);
lean_dec_ref(v_val_3070_);
v_a_3165_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3123_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3123_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_3180_ = _args[0];
lean_object* v_val_3181_ = _args[1];
lean_object* v_baseName_3182_ = _args[2];
lean_object* v___x_3183_ = _args[3];
lean_object* v_a_3184_ = _args[4];
lean_object* v___x_3185_ = _args[5];
lean_object* v___x_3186_ = _args[6];
lean_object* v___x_3187_ = _args[7];
lean_object* v_matchDeclName_3188_ = _args[8];
lean_object* v___x_3189_ = _args[9];
lean_object* v___x_3190_ = _args[10];
lean_object* v___x_3191_ = _args[11];
lean_object* v_a_3192_ = _args[12];
lean_object* v_b_3193_ = _args[13];
lean_object* v___y_3194_ = _args[14];
lean_object* v___y_3195_ = _args[15];
lean_object* v___y_3196_ = _args[16];
lean_object* v___y_3197_ = _args[17];
lean_object* v___y_3198_ = _args[18];
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v_upperBound_3180_, v_val_3181_, v_baseName_3182_, v___x_3183_, v_a_3184_, v___x_3185_, v___x_3186_, v___x_3187_, v_matchDeclName_3188_, v___x_3189_, v___x_3190_, v___x_3191_, v_a_3192_, v_b_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v_upperBound_3180_);
return v_res_3199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3203_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2));
v___x_3204_ = lean_unsigned_to_nat(6u);
v___x_3205_ = lean_unsigned_to_nat(233u);
v___x_3206_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1));
v___x_3207_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0));
v___x_3208_ = l_mkPanicMessageWithDecl(v___x_3207_, v___x_3206_, v___x_3205_, v___x_3204_, v___x_3203_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(lean_object* v_splitterName_3221_, lean_object* v_matchDeclName_3222_, lean_object* v_numParams_3223_, lean_object* v_val_3224_, lean_object* v___x_3225_, lean_object* v_numDiscrs_3226_, lean_object* v_baseName_3227_, lean_object* v_a_3228_, lean_object* v___x_3229_, lean_object* v___x_3230_, lean_object* v___x_3231_, lean_object* v_uElimPos_x3f_3232_, lean_object* v_discrInfos_3233_, lean_object* v_overlaps_3234_, lean_object* v___f_3235_, lean_object* v___x_3236_, lean_object* v_altInfos_3237_, lean_object* v_xs_3238_, lean_object* v___matchResultType_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; uint8_t v___y_3257_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v_lower_3265_; lean_object* v_upper_3266_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3259_ = lean_box(0);
v___x_3260_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3223_);
lean_inc_ref(v_xs_3238_);
v___x_3261_ = l_Array_toSubarray___redArg(v_xs_3238_, v___x_3260_, v_numParams_3223_);
v___x_3262_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_3224_);
v___x_3263_ = lean_array_get(v___x_3225_, v_xs_3238_, v___x_3262_);
lean_dec(v___x_3262_);
v___x_3319_ = lean_array_get_size(v_xs_3238_);
v___x_3320_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_3224_);
v___x_3321_ = lean_nat_sub(v___x_3319_, v___x_3320_);
lean_dec(v___x_3320_);
v___x_3322_ = lean_nat_dec_le(v___x_3321_, v___x_3260_);
if (v___x_3322_ == 0)
{
v_lower_3265_ = v___x_3321_;
v_upper_3266_ = v___x_3319_;
goto v___jp_3264_;
}
else
{
lean_dec(v___x_3321_);
v_lower_3265_ = v___x_3260_;
v_upper_3266_ = v___x_3319_;
goto v___jp_3264_;
}
v___jp_3245_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3246_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3);
v___x_3247_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(v___x_3246_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
return v___x_3247_;
}
v___jp_3248_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3251_, 0, v___y_3250_);
lean_ctor_set(v___x_3251_, 1, v_splitterName_3221_);
lean_ctor_set(v___x_3251_, 2, v___y_3249_);
v___x_3252_ = l_Lean_Meta_Match_registerMatchEqns___redArg(v_matchDeclName_3222_, v___x_3251_, v___y_3243_);
return v___x_3252_;
}
v___jp_3253_:
{
lean_object* v___x_3258_; 
lean_inc(v_matchDeclName_3222_);
v___x_3258_ = l_Lean_Meta_Match_withMkMatcherInput___redArg(v_matchDeclName_3222_, v___y_3257_, v___y_3256_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_dec_ref_known(v___x_3258_, 1);
v___y_3249_ = v___y_3255_;
v___y_3250_ = v___y_3254_;
goto v___jp_3248_;
}
else
{
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
return v___x_3258_;
}
}
v___jp_3264_:
{
lean_object* v___x_3267_; lean_object* v_start_3268_; lean_object* v_stop_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
lean_inc_ref(v_xs_3238_);
v___x_3267_ = l_Array_toSubarray___redArg(v_xs_3238_, v_lower_3265_, v_upper_3266_);
v_start_3268_ = lean_ctor_get(v___x_3267_, 1);
v_stop_3269_ = lean_ctor_get(v___x_3267_, 2);
v___x_3270_ = lean_unsigned_to_nat(1u);
v___x_3271_ = lean_nat_add(v_numParams_3223_, v___x_3270_);
v___x_3272_ = lean_nat_add(v___x_3271_, v_numDiscrs_3226_);
v___x_3273_ = lean_nat_sub(v_stop_3269_, v_start_3268_);
v___x_3274_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7));
v___x_3275_ = l_Array_toSubarray___redArg(v_xs_3238_, v___x_3271_, v___x_3272_);
lean_inc(v___x_3230_);
lean_inc(v_matchDeclName_3222_);
lean_inc(v___x_3229_);
v___x_3276_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v___x_3273_, v_val_3224_, v_baseName_3227_, v___x_3275_, v_a_3228_, v___x_3229_, v___x_3261_, v___x_3263_, v_matchDeclName_3222_, v___x_3230_, v___x_3267_, v___x_3231_, v___x_3260_, v___x_3274_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec(v___x_3273_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v_snd_3278_; lean_object* v_snd_3279_; lean_object* v_snd_3280_; lean_object* v_fst_3281_; lean_object* v_fst_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3309_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v_snd_3278_ = lean_ctor_get(v_a_3277_, 1);
v_snd_3279_ = lean_ctor_get(v_snd_3278_, 1);
v_snd_3280_ = lean_ctor_get(v_snd_3279_, 1);
lean_inc(v_snd_3280_);
v_fst_3281_ = lean_ctor_get(v_a_3277_, 0);
lean_inc(v_fst_3281_);
lean_dec(v_a_3277_);
v_fst_3282_ = lean_ctor_get(v_snd_3280_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v_snd_3280_);
if (v_isSharedCheck_3309_ == 0)
{
lean_object* v_unused_3310_; 
v_unused_3310_ = lean_ctor_get(v_snd_3280_, 1);
lean_dec(v_unused_3310_);
v___x_3284_ = v_snd_3280_;
v_isShared_3285_ = v_isSharedCheck_3309_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_fst_3282_);
lean_dec(v_snd_3280_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3309_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3286_; uint8_t v___x_3287_; 
lean_inc_ref(v_overlaps_3234_);
lean_inc(v_fst_3282_);
v___x_3286_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3286_, 0, v_numParams_3223_);
lean_ctor_set(v___x_3286_, 1, v_numDiscrs_3226_);
lean_ctor_set(v___x_3286_, 2, v_fst_3282_);
lean_ctor_set(v___x_3286_, 3, v_uElimPos_x3f_3232_);
lean_ctor_set(v___x_3286_, 4, v_discrInfos_3233_);
lean_ctor_set(v___x_3286_, 5, v_overlaps_3234_);
v___x_3287_ = l_Lean_Meta_Match_Overlaps_isEmpty(v_overlaps_3234_);
lean_dec_ref(v_overlaps_3234_);
if (v___x_3287_ == 0)
{
uint8_t v___x_3288_; 
lean_del_object(v___x_3284_);
lean_dec(v_fst_3282_);
lean_dec_ref(v___x_3236_);
lean_dec(v___x_3230_);
lean_dec(v___x_3229_);
v___x_3288_ = 1;
v___y_3254_ = v_fst_3281_;
v___y_3255_ = v___x_3286_;
v___y_3256_ = v___f_3235_;
v___y_3257_ = v___x_3288_;
goto v___jp_3253_;
}
else
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8));
v___x_3290_ = lean_find_expr(v___x_3289_, v___x_3236_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v___x_3291_; lean_object* v___x_3292_; uint8_t v___x_3293_; 
lean_dec_ref(v___f_3235_);
v___x_3291_ = lean_array_get_size(v_altInfos_3237_);
v___x_3292_ = lean_array_get_size(v_fst_3282_);
v___x_3293_ = lean_nat_dec_eq(v___x_3291_, v___x_3292_);
if (v___x_3293_ == 0)
{
lean_dec_ref_known(v___x_3286_, 6);
lean_del_object(v___x_3284_);
lean_dec(v_fst_3282_);
lean_dec(v_fst_3281_);
lean_dec_ref(v___x_3236_);
lean_dec(v___x_3230_);
lean_dec(v___x_3229_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
goto v___jp_3245_;
}
else
{
uint8_t v___x_3294_; 
v___x_3294_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_altInfos_3237_, v_fst_3282_, v___x_3291_);
lean_dec(v_fst_3282_);
if (v___x_3294_ == 0)
{
lean_dec_ref_known(v___x_3286_, 6);
lean_del_object(v___x_3284_);
lean_dec(v_fst_3281_);
lean_dec_ref(v___x_3236_);
lean_dec(v___x_3230_);
lean_dec(v___x_3229_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
goto v___jp_3245_;
}
else
{
uint8_t v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; uint8_t v___x_3299_; lean_object* v___x_3301_; 
v___x_3295_ = 0;
lean_inc_n(v_splitterName_3221_, 2);
v___x_3296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3296_, 0, v_splitterName_3221_);
lean_ctor_set(v___x_3296_, 1, v___x_3230_);
lean_ctor_set(v___x_3296_, 2, v___x_3236_);
lean_inc(v_matchDeclName_3222_);
v___x_3297_ = l_Lean_mkConst(v_matchDeclName_3222_, v___x_3229_);
v___x_3298_ = lean_box(1);
v___x_3299_ = 1;
if (v_isShared_3285_ == 0)
{
lean_ctor_set_tag(v___x_3284_, 1);
lean_ctor_set(v___x_3284_, 1, v___x_3259_);
lean_ctor_set(v___x_3284_, 0, v_splitterName_3221_);
v___x_3301_ = v___x_3284_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_splitterName_3221_);
lean_ctor_set(v_reuseFailAlloc_3308_, 1, v___x_3259_);
v___x_3301_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3302_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3302_, 0, v___x_3296_);
lean_ctor_set(v___x_3302_, 1, v___x_3297_);
lean_ctor_set(v___x_3302_, 2, v___x_3298_);
lean_ctor_set(v___x_3302_, 3, v___x_3301_);
lean_ctor_set_uint8(v___x_3302_, sizeof(void*)*4, v___x_3299_);
v___x_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
lean_inc_ref(v___x_3303_);
v___x_3304_ = l_Lean_addDecl(v___x_3303_, v___x_3295_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3304_) == 0)
{
uint8_t v___x_3305_; lean_object* v___x_3306_; 
lean_dec_ref_known(v___x_3304_, 1);
v___x_3305_ = 0;
lean_inc(v_splitterName_3221_);
v___x_3306_ = l_Lean_Meta_setInlineAttribute(v_splitterName_3221_, v___x_3305_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v___x_3307_; 
lean_dec_ref_known(v___x_3306_, 1);
v___x_3307_ = l_Lean_compileDecl(v___x_3303_, v___x_3295_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_dec_ref_known(v___x_3307_, 1);
v___y_3249_ = v___x_3286_;
v___y_3250_ = v_fst_3281_;
goto v___jp_3248_;
}
else
{
lean_dec_ref_known(v___x_3286_, 6);
lean_dec(v_fst_3281_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
return v___x_3307_;
}
}
else
{
lean_dec_ref_known(v___x_3303_, 1);
lean_dec_ref_known(v___x_3286_, 6);
lean_dec(v_fst_3281_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
return v___x_3306_;
}
}
else
{
lean_dec_ref_known(v___x_3303_, 1);
lean_dec_ref_known(v___x_3286_, 6);
lean_dec(v_fst_3281_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
return v___x_3304_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_3290_, 1);
lean_del_object(v___x_3284_);
lean_dec(v_fst_3282_);
lean_dec_ref(v___x_3236_);
lean_dec(v___x_3230_);
lean_dec(v___x_3229_);
v___y_3254_ = v_fst_3281_;
v___y_3255_ = v___x_3286_;
v___y_3256_ = v___f_3235_;
v___y_3257_ = v___x_3287_;
goto v___jp_3253_;
}
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec_ref(v___x_3236_);
lean_dec_ref(v___f_3235_);
lean_dec_ref(v_overlaps_3234_);
lean_dec_ref(v_discrInfos_3233_);
lean_dec(v_uElimPos_x3f_3232_);
lean_dec(v___x_3230_);
lean_dec(v___x_3229_);
lean_dec(v_numDiscrs_3226_);
lean_dec(v_numParams_3223_);
lean_dec(v_matchDeclName_3222_);
lean_dec(v_splitterName_3221_);
v_a_3311_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3276_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3276_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed(lean_object** _args){
lean_object* v_splitterName_3323_ = _args[0];
lean_object* v_matchDeclName_3324_ = _args[1];
lean_object* v_numParams_3325_ = _args[2];
lean_object* v_val_3326_ = _args[3];
lean_object* v___x_3327_ = _args[4];
lean_object* v_numDiscrs_3328_ = _args[5];
lean_object* v_baseName_3329_ = _args[6];
lean_object* v_a_3330_ = _args[7];
lean_object* v___x_3331_ = _args[8];
lean_object* v___x_3332_ = _args[9];
lean_object* v___x_3333_ = _args[10];
lean_object* v_uElimPos_x3f_3334_ = _args[11];
lean_object* v_discrInfos_3335_ = _args[12];
lean_object* v_overlaps_3336_ = _args[13];
lean_object* v___f_3337_ = _args[14];
lean_object* v___x_3338_ = _args[15];
lean_object* v_altInfos_3339_ = _args[16];
lean_object* v_xs_3340_ = _args[17];
lean_object* v___matchResultType_3341_ = _args[18];
lean_object* v___y_3342_ = _args[19];
lean_object* v___y_3343_ = _args[20];
lean_object* v___y_3344_ = _args[21];
lean_object* v___y_3345_ = _args[22];
lean_object* v___y_3346_ = _args[23];
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(v_splitterName_3323_, v_matchDeclName_3324_, v_numParams_3325_, v_val_3326_, v___x_3327_, v_numDiscrs_3328_, v_baseName_3329_, v_a_3330_, v___x_3331_, v___x_3332_, v___x_3333_, v_uElimPos_x3f_3334_, v_discrInfos_3335_, v_overlaps_3336_, v___f_3337_, v___x_3338_, v_altInfos_3339_, v_xs_3340_, v___matchResultType_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec_ref(v___matchResultType_3341_);
lean_dec_ref(v_altInfos_3339_);
lean_dec_ref(v___x_3327_);
return v_res_3347_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__0, &l_Lean_Meta_Match_proveCondEqThm___closed__0_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__0);
v___x_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
return v___x_3349_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3350_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_3351_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
lean_ctor_set(v___x_3353_, 2, v___x_3352_);
lean_ctor_set(v___x_3353_, 3, v___x_3352_);
lean_ctor_set(v___x_3353_, 4, v___x_3351_);
lean_ctor_set(v___x_3353_, 5, v___x_3351_);
lean_ctor_set(v___x_3353_, 6, v___x_3351_);
lean_ctor_set(v___x_3353_, 7, v___x_3351_);
lean_ctor_set(v___x_3353_, 8, v___x_3351_);
lean_ctor_set(v___x_3353_, 9, v___x_3351_);
lean_ctor_set(v___x_3353_, 10, v___x_3351_);
lean_ctor_set(v___x_3353_, 11, v___x_3350_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3354_ = lean_box(1);
v___x_3355_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_3356_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_3357_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3356_);
lean_ctor_set(v___x_3357_, 1, v___x_3355_);
lean_ctor_set(v___x_3357_, 2, v___x_3354_);
return v___x_3357_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3));
v___x_3360_ = l_Lean_stringToMessageData(v___x_3359_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6(void){
_start:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3362_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5));
v___x_3363_ = l_Lean_stringToMessageData(v___x_3362_);
return v___x_3363_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7));
v___x_3366_ = l_Lean_stringToMessageData(v___x_3365_);
return v___x_3366_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10(void){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9));
v___x_3369_ = l_Lean_stringToMessageData(v___x_3368_);
return v___x_3369_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11));
v___x_3372_ = l_Lean_stringToMessageData(v___x_3371_);
return v___x_3372_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14(void){
_start:
{
lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3374_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13));
v___x_3375_ = l_Lean_stringToMessageData(v___x_3374_);
return v___x_3375_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16(void){
_start:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3377_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15));
v___x_3378_ = l_Lean_stringToMessageData(v___x_3377_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(lean_object* v_msg_3379_, lean_object* v_declHint_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v_env_3385_; uint8_t v___x_3386_; 
v___x_3383_ = lean_box(0);
v___x_3384_ = lean_st_ref_get(v___y_3381_);
v_env_3385_ = lean_ctor_get(v___x_3384_, 0);
lean_inc_ref(v_env_3385_);
lean_dec(v___x_3384_);
v___x_3386_ = l_Lean_Name_isAnonymous(v_declHint_3380_);
if (v___x_3386_ == 0)
{
uint8_t v_isExporting_3387_; 
v_isExporting_3387_ = lean_ctor_get_uint8(v_env_3385_, sizeof(void*)*13);
if (v_isExporting_3387_ == 0)
{
lean_object* v___x_3388_; 
lean_dec_ref(v_env_3385_);
lean_dec(v_declHint_3380_);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_msg_3379_);
return v___x_3388_;
}
else
{
lean_object* v___x_3389_; uint8_t v___x_3390_; 
lean_inc_ref(v_env_3385_);
v___x_3389_ = l_Lean_Environment_setExporting(v_env_3385_, v___x_3386_);
lean_inc(v_declHint_3380_);
lean_inc_ref(v___x_3389_);
v___x_3390_ = l_Lean_Environment_contains(v___x_3389_, v_declHint_3380_, v_isExporting_3387_);
if (v___x_3390_ == 0)
{
lean_object* v___x_3391_; 
lean_dec_ref(v___x_3389_);
lean_dec_ref(v_env_3385_);
lean_dec(v_declHint_3380_);
v___x_3391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_msg_3379_);
return v___x_3391_;
}
else
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v_c_3397_; lean_object* v___x_3398_; 
v___x_3392_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_3393_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2);
v___x_3394_ = l_Lean_Options_empty;
v___x_3395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3389_);
lean_ctor_set(v___x_3395_, 1, v___x_3392_);
lean_ctor_set(v___x_3395_, 2, v___x_3393_);
lean_ctor_set(v___x_3395_, 3, v___x_3394_);
lean_inc(v_declHint_3380_);
v___x_3396_ = l_Lean_MessageData_ofConstName(v_declHint_3380_, v___x_3386_);
v_c_3397_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3397_, 0, v___x_3395_);
lean_ctor_set(v_c_3397_, 1, v___x_3396_);
v___x_3398_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3385_, v_declHint_3380_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
lean_dec_ref(v_env_3385_);
lean_dec(v_declHint_3380_);
v___x_3399_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4);
v___x_3400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
lean_ctor_set(v___x_3400_, 1, v_c_3397_);
v___x_3401_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_3402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3400_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
v___x_3403_ = l_Lean_MessageData_note(v___x_3402_);
v___x_3404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3404_, 0, v_msg_3379_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
return v___x_3405_;
}
else
{
lean_object* v_val_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3440_; 
v_val_3406_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3408_ = v___x_3398_;
v_isShared_3409_ = v_isSharedCheck_3440_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_val_3406_);
lean_dec(v___x_3398_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3440_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3410_; lean_object* v_moduleNames_3411_; lean_object* v_mod_3412_; uint8_t v___x_3413_; 
v___x_3410_ = l_Lean_Environment_header(v_env_3385_);
lean_dec_ref(v_env_3385_);
v_moduleNames_3411_ = lean_ctor_get(v___x_3410_, 4);
lean_inc_ref(v_moduleNames_3411_);
lean_dec_ref(v___x_3410_);
v_mod_3412_ = lean_array_get(v___x_3383_, v_moduleNames_3411_, v_val_3406_);
lean_dec(v_val_3406_);
lean_dec_ref(v_moduleNames_3411_);
v___x_3413_ = l_Lean_isPrivateName(v_declHint_3380_);
lean_dec(v_declHint_3380_);
if (v___x_3413_ == 0)
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3425_; 
v___x_3414_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8);
v___x_3415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
lean_ctor_set(v___x_3415_, 1, v_c_3397_);
v___x_3416_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10);
v___x_3417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3415_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
v___x_3418_ = l_Lean_MessageData_ofName(v_mod_3412_);
v___x_3419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___x_3420_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12);
v___x_3421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3419_);
lean_ctor_set(v___x_3421_, 1, v___x_3420_);
v___x_3422_ = l_Lean_MessageData_note(v___x_3421_);
v___x_3423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3423_, 0, v_msg_3379_);
lean_ctor_set(v___x_3423_, 1, v___x_3422_);
if (v_isShared_3409_ == 0)
{
lean_ctor_set_tag(v___x_3408_, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3423_);
v___x_3425_ = v___x_3408_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3423_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
else
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
v___x_3427_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4);
v___x_3428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
lean_ctor_set(v___x_3428_, 1, v_c_3397_);
v___x_3429_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14);
v___x_3430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = l_Lean_MessageData_ofName(v_mod_3412_);
v___x_3432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3430_);
lean_ctor_set(v___x_3432_, 1, v___x_3431_);
v___x_3433_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16);
v___x_3434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = l_Lean_MessageData_note(v___x_3434_);
v___x_3436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3436_, 0, v_msg_3379_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
if (v_isShared_3409_ == 0)
{
lean_ctor_set_tag(v___x_3408_, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3436_);
v___x_3438_ = v___x_3408_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3441_; 
lean_dec_ref(v_env_3385_);
lean_dec(v_declHint_3380_);
v___x_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3441_, 0, v_msg_3379_);
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___boxed(lean_object* v_msg_3442_, lean_object* v_declHint_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3442_, v_declHint_3443_, v___y_3444_);
lean_dec(v___y_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(lean_object* v_msg_3447_, lean_object* v_declHint_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3464_; 
v___x_3454_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3447_, v_declHint_3448_, v___y_3452_);
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3464_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3464_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3459_ = l_Lean_unknownIdentifierMessageTag;
v___x_3460_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
lean_ctor_set(v___x_3460_, 1, v_a_3455_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v___x_3460_);
v___x_3462_ = v___x_3457_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12___boxed(lean_object* v_msg_3465_, lean_object* v_declHint_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(v_msg_3465_, v_declHint_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(lean_object* v_ref_3473_, lean_object* v_msg_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
lean_object* v_toCold_3480_; lean_object* v_currRecDepth_3481_; lean_object* v_ref_3482_; uint16_t v_optionFlags_3483_; uint8_t v_suppressElabErrors_3484_; uint8_t v_isRecordingDeps_3485_; lean_object* v_ref_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v_toCold_3480_ = lean_ctor_get(v___y_3477_, 0);
v_currRecDepth_3481_ = lean_ctor_get(v___y_3477_, 1);
v_ref_3482_ = lean_ctor_get(v___y_3477_, 2);
v_optionFlags_3483_ = lean_ctor_get_uint16(v___y_3477_, sizeof(void*)*3);
v_suppressElabErrors_3484_ = lean_ctor_get_uint8(v___y_3477_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3485_ = lean_ctor_get_uint8(v___y_3477_, sizeof(void*)*3 + 3);
v_ref_3486_ = l_Lean_replaceRef(v_ref_3473_, v_ref_3482_);
lean_inc(v_currRecDepth_3481_);
lean_inc_ref(v_toCold_3480_);
v___x_3487_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3487_, 0, v_toCold_3480_);
lean_ctor_set(v___x_3487_, 1, v_currRecDepth_3481_);
lean_ctor_set(v___x_3487_, 2, v_ref_3486_);
lean_ctor_set_uint16(v___x_3487_, sizeof(void*)*3, v_optionFlags_3483_);
lean_ctor_set_uint8(v___x_3487_, sizeof(void*)*3 + 2, v_suppressElabErrors_3484_);
lean_ctor_set_uint8(v___x_3487_, sizeof(void*)*3 + 3, v_isRecordingDeps_3485_);
v___x_3488_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_3474_, v___y_3475_, v___y_3476_, v___x_3487_, v___y_3478_);
lean_dec_ref_known(v___x_3487_, 3);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg___boxed(lean_object* v_ref_3489_, lean_object* v_msg_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3489_, v_msg_3490_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v_ref_3489_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_ref_3497_, lean_object* v_msg_3498_, lean_object* v_declHint_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
lean_object* v___x_3505_; lean_object* v_a_3506_; lean_object* v___x_3507_; 
v___x_3505_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(v_msg_3498_, v_declHint_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref(v___x_3505_);
v___x_3507_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3497_, v_a_3506_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_ref_3508_, lean_object* v_msg_3509_, lean_object* v_declHint_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_){
_start:
{
lean_object* v_res_3516_; 
v_res_3516_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3508_, v_msg_3509_, v_declHint_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec(v_ref_3508_);
return v_res_3516_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0));
v___x_3519_ = l_Lean_stringToMessageData(v___x_3518_);
return v___x_3519_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2));
v___x_3522_ = l_Lean_stringToMessageData(v___x_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(lean_object* v_ref_3523_, lean_object* v_constName_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3530_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1);
v___x_3531_ = 0;
lean_inc(v_constName_3524_);
v___x_3532_ = l_Lean_MessageData_ofConstName(v_constName_3524_, v___x_3531_);
v___x_3533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3530_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_3535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3533_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
v___x_3536_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3523_, v___x_3535_, v_constName_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_ref_3537_, lean_object* v_constName_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3537_, v_constName_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec(v___y_3540_);
lean_dec_ref(v___y_3539_);
lean_dec(v_ref_3537_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(lean_object* v_constName_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_){
_start:
{
lean_object* v_ref_3551_; lean_object* v___x_3552_; 
v_ref_3551_ = lean_ctor_get(v___y_3548_, 2);
v___x_3552_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3551_, v_constName_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg___boxed(lean_object* v_constName_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3553_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
lean_dec(v___y_3557_);
lean_dec_ref(v___y_3556_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(lean_object* v_constName_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_){
_start:
{
lean_object* v___x_3566_; lean_object* v_env_3567_; uint8_t v___x_3568_; lean_object* v___x_3569_; 
v___x_3566_ = lean_st_ref_get(v___y_3564_);
v_env_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc_ref(v_env_3567_);
lean_dec(v___x_3566_);
v___x_3568_ = 0;
lean_inc(v_constName_3560_);
v___x_3569_ = l_Lean_Environment_find_x3f(v_env_3567_, v_constName_3560_, v___x_3568_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v___x_3570_; 
v___x_3570_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
return v___x_3570_;
}
else
{
lean_object* v_val_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec(v_constName_3560_);
v_val_3571_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3569_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_val_3571_);
lean_dec(v___x_3569_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
lean_ctor_set_tag(v___x_3573_, 0);
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_val_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0___boxed(lean_object* v_constName_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
lean_object* v_res_3585_; 
v_res_3585_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_constName_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
lean_dec(v___y_3583_);
lean_dec_ref(v___y_3582_);
lean_dec(v___y_3581_);
lean_dec_ref(v___y_3580_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(lean_object* v_a_3586_, lean_object* v_a_3587_){
_start:
{
if (lean_obj_tag(v_a_3586_) == 0)
{
lean_object* v___x_3588_; 
v___x_3588_ = l_List_reverse___redArg(v_a_3587_);
return v___x_3588_;
}
else
{
lean_object* v_head_3589_; lean_object* v_tail_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3599_; 
v_head_3589_ = lean_ctor_get(v_a_3586_, 0);
v_tail_3590_ = lean_ctor_get(v_a_3586_, 1);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_a_3586_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3592_ = v_a_3586_;
v_isShared_3593_ = v_isSharedCheck_3599_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_tail_3590_);
lean_inc(v_head_3589_);
lean_dec(v_a_3586_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3599_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3594_; lean_object* v___x_3596_; 
v___x_3594_ = l_Lean_mkLevelParam(v_head_3589_);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 1, v_a_3587_);
lean_ctor_set(v___x_3592_, 0, v___x_3594_);
v___x_3596_ = v___x_3592_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3594_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v_a_3587_);
v___x_3596_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
v_a_3586_ = v_tail_3590_;
v_a_3587_ = v___x_3596_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1(void){
_start:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3601_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0));
v___x_3602_ = l_Lean_stringToMessageData(v___x_3601_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(lean_object* v_matchDeclName_3603_, lean_object* v_baseName_3604_, lean_object* v_splitterName_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v___x_3611_; uint8_t v_foApprox_3612_; uint8_t v_ctxApprox_3613_; uint8_t v_quasiPatternApprox_3614_; uint8_t v_constApprox_3615_; uint8_t v_isDefEqStuckEx_3616_; uint8_t v_unificationHints_3617_; uint8_t v_proofIrrelevance_3618_; uint8_t v_assignSyntheticOpaque_3619_; uint8_t v_offsetCnstrs_3620_; uint8_t v_transparency_3621_; uint8_t v_univApprox_3622_; uint8_t v_iota_3623_; uint8_t v_beta_3624_; uint8_t v_proj_3625_; uint8_t v_zeta_3626_; uint8_t v_zetaDelta_3627_; uint8_t v_zetaUnused_3628_; uint8_t v_zetaHave_3629_; uint8_t v_canUnfoldPredicateConfig_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3695_; 
v___x_3611_ = l_Lean_Meta_Context_config(v_a_3606_);
v_foApprox_3612_ = lean_ctor_get_uint8(v___x_3611_, 0);
v_ctxApprox_3613_ = lean_ctor_get_uint8(v___x_3611_, 1);
v_quasiPatternApprox_3614_ = lean_ctor_get_uint8(v___x_3611_, 2);
v_constApprox_3615_ = lean_ctor_get_uint8(v___x_3611_, 3);
v_isDefEqStuckEx_3616_ = lean_ctor_get_uint8(v___x_3611_, 4);
v_unificationHints_3617_ = lean_ctor_get_uint8(v___x_3611_, 5);
v_proofIrrelevance_3618_ = lean_ctor_get_uint8(v___x_3611_, 6);
v_assignSyntheticOpaque_3619_ = lean_ctor_get_uint8(v___x_3611_, 7);
v_offsetCnstrs_3620_ = lean_ctor_get_uint8(v___x_3611_, 8);
v_transparency_3621_ = lean_ctor_get_uint8(v___x_3611_, 9);
v_univApprox_3622_ = lean_ctor_get_uint8(v___x_3611_, 11);
v_iota_3623_ = lean_ctor_get_uint8(v___x_3611_, 12);
v_beta_3624_ = lean_ctor_get_uint8(v___x_3611_, 13);
v_proj_3625_ = lean_ctor_get_uint8(v___x_3611_, 14);
v_zeta_3626_ = lean_ctor_get_uint8(v___x_3611_, 15);
v_zetaDelta_3627_ = lean_ctor_get_uint8(v___x_3611_, 16);
v_zetaUnused_3628_ = lean_ctor_get_uint8(v___x_3611_, 17);
v_zetaHave_3629_ = lean_ctor_get_uint8(v___x_3611_, 18);
v_canUnfoldPredicateConfig_3630_ = lean_ctor_get_uint8(v___x_3611_, 19);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3632_ = v___x_3611_;
v_isShared_3633_ = v_isSharedCheck_3695_;
goto v_resetjp_3631_;
}
else
{
lean_dec(v___x_3611_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3695_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
uint8_t v_trackZetaDelta_3634_; lean_object* v_zetaDeltaSet_3635_; lean_object* v_lctx_3636_; lean_object* v_localInstances_3637_; lean_object* v_defEqCtx_x3f_3638_; lean_object* v_synthPendingDepth_3639_; lean_object* v_customCanUnfoldPredicate_x3f_3640_; uint8_t v_univApprox_3641_; uint8_t v_inTypeClassResolution_3642_; uint8_t v_cacheInferType_3643_; lean_object* v_rewriteSet_x3f_3644_; uint8_t v_rewriteFuelScope_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3693_; 
v_trackZetaDelta_3634_ = lean_ctor_get_uint8(v_a_3606_, sizeof(void*)*8);
v_zetaDeltaSet_3635_ = lean_ctor_get(v_a_3606_, 1);
v_lctx_3636_ = lean_ctor_get(v_a_3606_, 2);
v_localInstances_3637_ = lean_ctor_get(v_a_3606_, 3);
v_defEqCtx_x3f_3638_ = lean_ctor_get(v_a_3606_, 4);
v_synthPendingDepth_3639_ = lean_ctor_get(v_a_3606_, 5);
v_customCanUnfoldPredicate_x3f_3640_ = lean_ctor_get(v_a_3606_, 6);
v_univApprox_3641_ = lean_ctor_get_uint8(v_a_3606_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3642_ = lean_ctor_get_uint8(v_a_3606_, sizeof(void*)*8 + 2);
v_cacheInferType_3643_ = lean_ctor_get_uint8(v_a_3606_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3644_ = lean_ctor_get(v_a_3606_, 7);
v_rewriteFuelScope_3645_ = lean_ctor_get_uint8(v_a_3606_, sizeof(void*)*8 + 4);
v_isSharedCheck_3693_ = !lean_is_exclusive(v_a_3606_);
if (v_isSharedCheck_3693_ == 0)
{
lean_object* v_unused_3694_; 
v_unused_3694_ = lean_ctor_get(v_a_3606_, 0);
lean_dec(v_unused_3694_);
v___x_3647_ = v_a_3606_;
v_isShared_3648_ = v_isSharedCheck_3693_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_rewriteSet_x3f_3644_);
lean_inc(v_customCanUnfoldPredicate_x3f_3640_);
lean_inc(v_synthPendingDepth_3639_);
lean_inc(v_defEqCtx_x3f_3638_);
lean_inc(v_localInstances_3637_);
lean_inc(v_lctx_3636_);
lean_inc(v_zetaDeltaSet_3635_);
lean_dec(v_a_3606_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3693_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
uint8_t v___x_3649_; lean_object* v___x_3651_; 
v___x_3649_ = 2;
if (v_isShared_3633_ == 0)
{
v___x_3651_ = v___x_3632_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 0, v_foApprox_3612_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 1, v_ctxApprox_3613_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 2, v_quasiPatternApprox_3614_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 3, v_constApprox_3615_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 4, v_isDefEqStuckEx_3616_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 5, v_unificationHints_3617_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 6, v_proofIrrelevance_3618_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 7, v_assignSyntheticOpaque_3619_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 8, v_offsetCnstrs_3620_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 9, v_transparency_3621_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 11, v_univApprox_3622_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 12, v_iota_3623_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 13, v_beta_3624_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 14, v_proj_3625_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 15, v_zeta_3626_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 16, v_zetaDelta_3627_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 17, v_zetaUnused_3628_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 18, v_zetaHave_3629_);
lean_ctor_set_uint8(v_reuseFailAlloc_3692_, 19, v_canUnfoldPredicateConfig_3630_);
v___x_3651_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
uint64_t v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3656_; 
lean_ctor_set_uint8(v___x_3651_, 10, v___x_3649_);
v___x_3652_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3651_);
v___x_3653_ = l_Lean_instInhabitedExpr;
v___x_3654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3654_, 0, v___x_3651_);
lean_ctor_set_uint64(v___x_3654_, sizeof(void*)*1, v___x_3652_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 0, v___x_3654_);
v___x_3656_ = v___x_3647_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3654_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v_zetaDeltaSet_3635_);
lean_ctor_set(v_reuseFailAlloc_3691_, 2, v_lctx_3636_);
lean_ctor_set(v_reuseFailAlloc_3691_, 3, v_localInstances_3637_);
lean_ctor_set(v_reuseFailAlloc_3691_, 4, v_defEqCtx_x3f_3638_);
lean_ctor_set(v_reuseFailAlloc_3691_, 5, v_synthPendingDepth_3639_);
lean_ctor_set(v_reuseFailAlloc_3691_, 6, v_customCanUnfoldPredicate_x3f_3640_);
lean_ctor_set(v_reuseFailAlloc_3691_, 7, v_rewriteSet_x3f_3644_);
lean_ctor_set_uint8(v_reuseFailAlloc_3691_, sizeof(void*)*8, v_trackZetaDelta_3634_);
lean_ctor_set_uint8(v_reuseFailAlloc_3691_, sizeof(void*)*8 + 1, v_univApprox_3641_);
lean_ctor_set_uint8(v_reuseFailAlloc_3691_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3642_);
lean_ctor_set_uint8(v_reuseFailAlloc_3691_, sizeof(void*)*8 + 3, v_cacheInferType_3643_);
lean_ctor_set_uint8(v_reuseFailAlloc_3691_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3645_);
v___x_3656_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; 
lean_inc(v_matchDeclName_3603_);
v___x_3657_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_matchDeclName_3603_, v___x_3656_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v_a_3663_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v___x_3657_, 1);
v___x_3659_ = l_Lean_ConstantInfo_levelParams(v_a_3658_);
v___x_3660_ = lean_box(0);
lean_inc(v___x_3659_);
v___x_3661_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(v___x_3659_, v___x_3660_);
lean_inc(v_matchDeclName_3603_);
v___x_3662_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(v_matchDeclName_3603_, v_a_3609_);
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref(v___x_3662_);
if (lean_obj_tag(v_a_3663_) == 1)
{
lean_object* v_val_3664_; lean_object* v_numParams_3665_; lean_object* v_numDiscrs_3666_; lean_object* v_altInfos_3667_; lean_object* v_uElimPos_x3f_3668_; lean_object* v_discrInfos_3669_; lean_object* v_overlaps_3670_; lean_object* v___f_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___f_3674_; uint8_t v___x_3675_; lean_object* v___x_3676_; 
v_val_3664_ = lean_ctor_get(v_a_3663_, 0);
lean_inc(v_val_3664_);
lean_dec_ref_known(v_a_3663_, 1);
v_numParams_3665_ = lean_ctor_get(v_val_3664_, 0);
lean_inc(v_numParams_3665_);
v_numDiscrs_3666_ = lean_ctor_get(v_val_3664_, 1);
lean_inc(v_numDiscrs_3666_);
v_altInfos_3667_ = lean_ctor_get(v_val_3664_, 2);
lean_inc_ref(v_altInfos_3667_);
v_uElimPos_x3f_3668_ = lean_ctor_get(v_val_3664_, 3);
lean_inc(v_uElimPos_x3f_3668_);
v_discrInfos_3669_ = lean_ctor_get(v_val_3664_, 4);
lean_inc_ref(v_discrInfos_3669_);
v_overlaps_3670_ = lean_ctor_get(v_val_3664_, 5);
lean_inc_ref_n(v_overlaps_3670_, 2);
lean_inc(v_splitterName_3605_);
v___f_3671_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3671_, 0, v_overlaps_3670_);
lean_closure_set(v___f_3671_, 1, v_splitterName_3605_);
v___x_3672_ = l_Lean_Meta_Match_getNumEqsFromDiscrInfos(v_discrInfos_3669_);
v___x_3673_ = l_Lean_ConstantInfo_type(v_a_3658_);
lean_inc_ref(v___x_3673_);
v___f_3674_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed), 24, 17);
lean_closure_set(v___f_3674_, 0, v_splitterName_3605_);
lean_closure_set(v___f_3674_, 1, v_matchDeclName_3603_);
lean_closure_set(v___f_3674_, 2, v_numParams_3665_);
lean_closure_set(v___f_3674_, 3, v_val_3664_);
lean_closure_set(v___f_3674_, 4, v___x_3653_);
lean_closure_set(v___f_3674_, 5, v_numDiscrs_3666_);
lean_closure_set(v___f_3674_, 6, v_baseName_3604_);
lean_closure_set(v___f_3674_, 7, v_a_3658_);
lean_closure_set(v___f_3674_, 8, v___x_3661_);
lean_closure_set(v___f_3674_, 9, v___x_3659_);
lean_closure_set(v___f_3674_, 10, v___x_3672_);
lean_closure_set(v___f_3674_, 11, v_uElimPos_x3f_3668_);
lean_closure_set(v___f_3674_, 12, v_discrInfos_3669_);
lean_closure_set(v___f_3674_, 13, v_overlaps_3670_);
lean_closure_set(v___f_3674_, 14, v___f_3671_);
lean_closure_set(v___f_3674_, 15, v___x_3673_);
lean_closure_set(v___f_3674_, 16, v_altInfos_3667_);
v___x_3675_ = 0;
v___x_3676_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v___x_3673_, v___f_3674_, v___x_3675_, v___x_3675_, v___x_3656_, v_a_3607_, v_a_3608_, v_a_3609_);
lean_dec_ref(v___x_3656_);
return v___x_3676_;
}
else
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
lean_dec(v_a_3663_);
lean_dec(v___x_3661_);
lean_dec(v___x_3659_);
lean_dec(v_a_3658_);
lean_dec(v_splitterName_3605_);
lean_dec(v_baseName_3604_);
v___x_3677_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_3678_ = l_Lean_MessageData_ofName(v_matchDeclName_3603_);
v___x_3679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3677_);
lean_ctor_set(v___x_3679_, 1, v___x_3678_);
v___x_3680_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_3681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3679_);
lean_ctor_set(v___x_3681_, 1, v___x_3680_);
v___x_3682_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_3681_, v___x_3656_, v_a_3607_, v_a_3608_, v_a_3609_);
lean_dec_ref(v___x_3656_);
return v___x_3682_;
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
lean_dec_ref(v___x_3656_);
lean_dec(v_splitterName_3605_);
lean_dec(v_baseName_3604_);
lean_dec(v_matchDeclName_3603_);
v_a_3683_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3657_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3657_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed(lean_object* v_matchDeclName_3696_, lean_object* v_baseName_3697_, lean_object* v_splitterName_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(v_matchDeclName_3696_, v_baseName_3697_, v_splitterName_3698_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_);
lean_dec(v_a_3702_);
lean_dec_ref(v_a_3701_);
lean_dec(v_a_3700_);
return v_res_3704_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(lean_object* v_xs_3705_, lean_object* v_ys_3706_, lean_object* v_hsz_3707_, lean_object* v_x_3708_, lean_object* v_x_3709_){
_start:
{
uint8_t v___x_3710_; 
v___x_3710_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_xs_3705_, v_ys_3706_, v_x_3708_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___boxed(lean_object* v_xs_3711_, lean_object* v_ys_3712_, lean_object* v_hsz_3713_, lean_object* v_x_3714_, lean_object* v_x_3715_){
_start:
{
uint8_t v_res_3716_; lean_object* v_r_3717_; 
v_res_3716_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(v_xs_3711_, v_ys_3712_, v_hsz_3713_, v_x_3714_, v_x_3715_);
lean_dec_ref(v_ys_3712_);
lean_dec_ref(v_xs_3711_);
v_r_3717_ = lean_box(v_res_3716_);
return v_r_3717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6(lean_object* v_inst_3718_, lean_object* v_R_3719_, lean_object* v_a_3720_, lean_object* v_b_3721_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v_a_3720_, v_b_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(lean_object* v_upperBound_3723_, lean_object* v_val_3724_, lean_object* v_baseName_3725_, lean_object* v___x_3726_, lean_object* v_a_3727_, lean_object* v___x_3728_, lean_object* v___x_3729_, lean_object* v___x_3730_, lean_object* v_matchDeclName_3731_, lean_object* v___x_3732_, lean_object* v___x_3733_, lean_object* v___x_3734_, lean_object* v_inst_3735_, lean_object* v_R_3736_, lean_object* v_a_3737_, lean_object* v_b_3738_, lean_object* v_c_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v_upperBound_3723_, v_val_3724_, v_baseName_3725_, v___x_3726_, v_a_3727_, v___x_3728_, v___x_3729_, v___x_3730_, v_matchDeclName_3731_, v___x_3732_, v___x_3733_, v___x_3734_, v_a_3737_, v_b_3738_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_3746_ = _args[0];
lean_object* v_val_3747_ = _args[1];
lean_object* v_baseName_3748_ = _args[2];
lean_object* v___x_3749_ = _args[3];
lean_object* v_a_3750_ = _args[4];
lean_object* v___x_3751_ = _args[5];
lean_object* v___x_3752_ = _args[6];
lean_object* v___x_3753_ = _args[7];
lean_object* v_matchDeclName_3754_ = _args[8];
lean_object* v___x_3755_ = _args[9];
lean_object* v___x_3756_ = _args[10];
lean_object* v___x_3757_ = _args[11];
lean_object* v_inst_3758_ = _args[12];
lean_object* v_R_3759_ = _args[13];
lean_object* v_a_3760_ = _args[14];
lean_object* v_b_3761_ = _args[15];
lean_object* v_c_3762_ = _args[16];
lean_object* v___y_3763_ = _args[17];
lean_object* v___y_3764_ = _args[18];
lean_object* v___y_3765_ = _args[19];
lean_object* v___y_3766_ = _args[20];
lean_object* v___y_3767_ = _args[21];
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(v_upperBound_3746_, v_val_3747_, v_baseName_3748_, v___x_3749_, v_a_3750_, v___x_3751_, v___x_3752_, v___x_3753_, v_matchDeclName_3754_, v___x_3755_, v___x_3756_, v___x_3757_, v_inst_3758_, v_R_3759_, v_a_3760_, v_b_3761_, v_c_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
lean_dec(v___y_3766_);
lean_dec_ref(v___y_3765_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
lean_dec(v_upperBound_3746_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(lean_object* v_00_u03b1_3769_, lean_object* v_constName_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3770_, v___y_3771_, v___y_3772_, v___y_3773_, v___y_3774_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3777_, lean_object* v_constName_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(v_00_u03b1_3777_, v_constName_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_3785_, lean_object* v_ref_3786_, lean_object* v_constName_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3786_, v_constName_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_3794_, lean_object* v_ref_3795_, lean_object* v_constName_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(v_00_u03b1_3794_, v_ref_3795_, v_constName_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
lean_dec(v_ref_3795_);
return v_res_3802_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b1_3803_, lean_object* v_ref_3804_, lean_object* v_msg_3805_, lean_object* v_declHint_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v___x_3812_; 
v___x_3812_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3804_, v_msg_3805_, v_declHint_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b1_3813_, lean_object* v_ref_3814_, lean_object* v_msg_3815_, lean_object* v_declHint_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(v_00_u03b1_3813_, v_ref_3814_, v_msg_3815_, v_declHint_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3818_);
lean_dec_ref(v___y_3817_);
lean_dec(v_ref_3814_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(lean_object* v_msg_3823_, lean_object* v_declHint_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v___x_3830_; 
v___x_3830_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3823_, v_declHint_3824_, v___y_3828_);
return v___x_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___boxed(lean_object* v_msg_3831_, lean_object* v_declHint_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(v_msg_3831_, v_declHint_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(lean_object* v_00_u03b1_3839_, lean_object* v_ref_3840_, lean_object* v_msg_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
lean_object* v___x_3847_; 
v___x_3847_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3840_, v_msg_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___boxed(lean_object* v_00_u03b1_3848_, lean_object* v_ref_3849_, lean_object* v_msg_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(v_00_u03b1_3848_, v_ref_3849_, v_msg_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v_ref_3849_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3857_, lean_object* v_vals_3858_, lean_object* v_i_3859_, lean_object* v_k_3860_){
_start:
{
lean_object* v___x_3861_; uint8_t v___x_3862_; 
v___x_3861_ = lean_array_get_size(v_keys_3857_);
v___x_3862_ = lean_nat_dec_lt(v_i_3859_, v___x_3861_);
if (v___x_3862_ == 0)
{
lean_object* v___x_3863_; 
lean_dec(v_i_3859_);
v___x_3863_ = lean_box(0);
return v___x_3863_;
}
else
{
lean_object* v_k_x27_3864_; uint8_t v___x_3865_; 
v_k_x27_3864_ = lean_array_fget_borrowed(v_keys_3857_, v_i_3859_);
v___x_3865_ = lean_name_eq(v_k_3860_, v_k_x27_3864_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_unsigned_to_nat(1u);
v___x_3867_ = lean_nat_add(v_i_3859_, v___x_3866_);
lean_dec(v_i_3859_);
v_i_3859_ = v___x_3867_;
goto _start;
}
else
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3869_ = lean_array_fget_borrowed(v_vals_3858_, v_i_3859_);
lean_dec(v_i_3859_);
lean_inc(v___x_3869_);
v___x_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
return v___x_3870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3871_, lean_object* v_vals_3872_, lean_object* v_i_3873_, lean_object* v_k_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_keys_3871_, v_vals_3872_, v_i_3873_, v_k_3874_);
lean_dec(v_k_3874_);
lean_dec_ref(v_vals_3872_);
lean_dec_ref(v_keys_3871_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(lean_object* v_x_3876_, size_t v_x_3877_, lean_object* v_x_3878_){
_start:
{
if (lean_obj_tag(v_x_3876_) == 0)
{
lean_object* v_es_3879_; lean_object* v___x_3880_; size_t v___x_3881_; size_t v___x_3882_; lean_object* v_j_3883_; lean_object* v___x_3884_; 
v_es_3879_ = lean_ctor_get(v_x_3876_, 0);
v___x_3880_ = lean_box(2);
v___x_3881_ = ((size_t)31ULL);
v___x_3882_ = lean_usize_land(v_x_3877_, v___x_3881_);
v_j_3883_ = lean_usize_to_nat(v___x_3882_);
v___x_3884_ = lean_array_get_borrowed(v___x_3880_, v_es_3879_, v_j_3883_);
lean_dec(v_j_3883_);
switch(lean_obj_tag(v___x_3884_))
{
case 0:
{
lean_object* v_key_3885_; lean_object* v_val_3886_; uint8_t v___x_3887_; 
v_key_3885_ = lean_ctor_get(v___x_3884_, 0);
v_val_3886_ = lean_ctor_get(v___x_3884_, 1);
v___x_3887_ = lean_name_eq(v_x_3878_, v_key_3885_);
if (v___x_3887_ == 0)
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_box(0);
return v___x_3888_;
}
else
{
lean_object* v___x_3889_; 
lean_inc(v_val_3886_);
v___x_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3889_, 0, v_val_3886_);
return v___x_3889_;
}
}
case 1:
{
lean_object* v_node_3890_; size_t v___x_3891_; size_t v___x_3892_; 
v_node_3890_ = lean_ctor_get(v___x_3884_, 0);
v___x_3891_ = ((size_t)5ULL);
v___x_3892_ = lean_usize_shift_right(v_x_3877_, v___x_3891_);
v_x_3876_ = v_node_3890_;
v_x_3877_ = v___x_3892_;
goto _start;
}
default: 
{
lean_object* v___x_3894_; 
v___x_3894_ = lean_box(0);
return v___x_3894_;
}
}
}
else
{
lean_object* v_ks_3895_; lean_object* v_vs_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_ks_3895_ = lean_ctor_get(v_x_3876_, 0);
v_vs_3896_ = lean_ctor_get(v_x_3876_, 1);
v___x_3897_ = lean_unsigned_to_nat(0u);
v___x_3898_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_ks_3895_, v_vs_3896_, v___x_3897_, v_x_3878_);
return v___x_3898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___boxed(lean_object* v_x_3899_, lean_object* v_x_3900_, lean_object* v_x_3901_){
_start:
{
size_t v_x_710__boxed_3902_; lean_object* v_res_3903_; 
v_x_710__boxed_3902_ = lean_unbox_usize(v_x_3900_);
lean_dec(v_x_3900_);
v_res_3903_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_3899_, v_x_710__boxed_3902_, v_x_3901_);
lean_dec(v_x_3901_);
lean_dec_ref(v_x_3899_);
return v_res_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(lean_object* v_x_3904_, lean_object* v_x_3905_){
_start:
{
uint64_t v___y_3907_; 
if (lean_obj_tag(v_x_3905_) == 0)
{
uint64_t v___x_3910_; 
v___x_3910_ = 1723ULL;
v___y_3907_ = v___x_3910_;
goto v___jp_3906_;
}
else
{
uint64_t v_hash_3911_; 
v_hash_3911_ = lean_ctor_get_uint64(v_x_3905_, sizeof(void*)*2);
v___y_3907_ = v_hash_3911_;
goto v___jp_3906_;
}
v___jp_3906_:
{
size_t v___x_3908_; lean_object* v___x_3909_; 
v___x_3908_ = lean_uint64_to_usize(v___y_3907_);
v___x_3909_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_3904_, v___x_3908_, v_x_3905_);
return v___x_3909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___boxed(lean_object* v_x_3912_, lean_object* v_x_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_x_3912_, v_x_3913_);
lean_dec(v_x_3913_);
lean_dec_ref(v_x_3912_);
return v_res_3914_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__4(void){
_start:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3921_ = ((lean_object*)(l_Lean_Meta_Match_getEquationsForImpl___closed__3));
v___x_3922_ = l_Lean_stringToMessageData(v___x_3921_);
return v___x_3922_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__6(void){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3924_ = ((lean_object*)(l_Lean_Meta_Match_getEquationsForImpl___closed__5));
v___x_3925_ = l_Lean_stringToMessageData(v___x_3924_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* lean_get_match_equations_for(lean_object* v_matchDeclName_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v_env_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3932_ = l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
v___x_3933_ = lean_st_ref_get(v_a_3930_);
v_env_3934_ = lean_ctor_get(v___x_3933_, 0);
lean_inc_ref(v_env_3934_);
lean_dec(v___x_3933_);
lean_inc_n(v_matchDeclName_3926_, 3);
v___x_3935_ = l_Lean_mkPrivateName(v_env_3934_, v_matchDeclName_3926_);
lean_dec_ref(v_env_3934_);
v___x_3936_ = ((lean_object*)(l_Lean_Meta_Match_getEquationsForImpl___closed__1));
lean_inc(v___x_3935_);
v___x_3937_ = l_Lean_Name_append(v___x_3935_, v___x_3936_);
lean_inc_n(v___x_3937_, 2);
v___x_3938_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed), 8, 3);
lean_closure_set(v___x_3938_, 0, v_matchDeclName_3926_);
lean_closure_set(v___x_3938_, 1, v___x_3935_);
lean_closure_set(v___x_3938_, 2, v___x_3937_);
v___x_3939_ = l_Lean_Meta_realizeConst(v_matchDeclName_3926_, v___x_3937_, v___x_3938_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3968_; 
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3968_ == 0)
{
lean_object* v_unused_3969_; 
v_unused_3969_ = lean_ctor_get(v___x_3939_, 0);
lean_dec(v_unused_3969_);
v___x_3941_ = v___x_3939_;
v_isShared_3942_ = v_isSharedCheck_3968_;
goto v_resetjp_3940_;
}
else
{
lean_dec(v___x_3939_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3968_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3943_; lean_object* v_env_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; lean_object* v___x_3948_; lean_object* v_map_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3966_; 
v___x_3943_ = lean_st_ref_get(v_a_3930_);
v_env_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc_ref(v_env_3944_);
lean_dec(v___x_3943_);
v___x_3945_ = l_Lean_Meta_Match_matchEqnsExt;
v___x_3946_ = ((lean_object*)(l_Lean_Meta_Match_getEquationsForImpl___closed__2));
v___x_3947_ = 0;
v___x_3948_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3932_, v___x_3945_, v_env_3944_, v___x_3946_, v___x_3937_, v___x_3947_);
v_map_3949_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3966_ == 0)
{
lean_object* v_unused_3967_; 
v_unused_3967_ = lean_ctor_get(v___x_3948_, 1);
lean_dec(v_unused_3967_);
v___x_3951_ = v___x_3948_;
v_isShared_3952_ = v_isSharedCheck_3966_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_map_3949_);
lean_dec(v___x_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3966_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3953_; 
v___x_3953_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_map_3949_, v_matchDeclName_3926_);
lean_dec_ref(v_map_3949_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3957_; 
lean_del_object(v___x_3941_);
v___x_3954_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__4, &l_Lean_Meta_Match_getEquationsForImpl___closed__4_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__4);
v___x_3955_ = l_Lean_MessageData_ofName(v_matchDeclName_3926_);
if (v_isShared_3952_ == 0)
{
lean_ctor_set_tag(v___x_3951_, 7);
lean_ctor_set(v___x_3951_, 1, v___x_3955_);
lean_ctor_set(v___x_3951_, 0, v___x_3954_);
v___x_3957_ = v___x_3951_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v___x_3954_);
lean_ctor_set(v_reuseFailAlloc_3961_, 1, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__6, &l_Lean_Meta_Match_getEquationsForImpl___closed__6_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__6);
v___x_3959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_3959_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_);
lean_dec(v_a_3930_);
lean_dec_ref(v_a_3929_);
lean_dec(v_a_3928_);
lean_dec_ref(v_a_3927_);
return v___x_3960_;
}
}
else
{
lean_object* v_val_3962_; lean_object* v___x_3964_; 
lean_del_object(v___x_3951_);
lean_dec(v_a_3930_);
lean_dec_ref(v_a_3929_);
lean_dec(v_a_3928_);
lean_dec_ref(v_a_3927_);
lean_dec(v_matchDeclName_3926_);
v_val_3962_ = lean_ctor_get(v___x_3953_, 0);
lean_inc(v_val_3962_);
lean_dec_ref_known(v___x_3953_, 1);
if (v_isShared_3942_ == 0)
{
lean_ctor_set(v___x_3941_, 0, v_val_3962_);
v___x_3964_ = v___x_3941_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_val_3962_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec(v___x_3937_);
lean_dec(v_a_3930_);
lean_dec_ref(v_a_3929_);
lean_dec(v_a_3928_);
lean_dec_ref(v_a_3927_);
lean_dec(v_matchDeclName_3926_);
v_a_3970_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3939_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3939_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsForImpl___boxed(lean_object* v_matchDeclName_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = lean_get_match_equations_for(v_matchDeclName_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(lean_object* v_00_u03b2_3985_, lean_object* v_x_3986_, lean_object* v_x_3987_){
_start:
{
lean_object* v___x_3988_; 
v___x_3988_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_x_3986_, v_x_3987_);
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___boxed(lean_object* v_00_u03b2_3989_, lean_object* v_x_3990_, lean_object* v_x_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(v_00_u03b2_3989_, v_x_3990_, v_x_3991_);
lean_dec(v_x_3991_);
lean_dec_ref(v_x_3990_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(lean_object* v_00_u03b2_3993_, lean_object* v_x_3994_, size_t v_x_3995_, lean_object* v_x_3996_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_3994_, v_x_3995_, v_x_3996_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3998_, lean_object* v_x_3999_, lean_object* v_x_4000_, lean_object* v_x_4001_){
_start:
{
size_t v_x_904__boxed_4002_; lean_object* v_res_4003_; 
v_x_904__boxed_4002_ = lean_unbox_usize(v_x_4000_);
lean_dec(v_x_4000_);
v_res_4003_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(v_00_u03b2_3998_, v_x_3999_, v_x_904__boxed_4002_, v_x_4001_);
lean_dec(v_x_4001_);
lean_dec_ref(v_x_3999_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4004_, lean_object* v_keys_4005_, lean_object* v_vals_4006_, lean_object* v_heq_4007_, lean_object* v_i_4008_, lean_object* v_k_4009_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_keys_4005_, v_vals_4006_, v_i_4008_, v_k_4009_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4011_, lean_object* v_keys_4012_, lean_object* v_vals_4013_, lean_object* v_heq_4014_, lean_object* v_i_4015_, lean_object* v_k_4016_){
_start:
{
lean_object* v_res_4017_; 
v_res_4017_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(v_00_u03b2_4011_, v_keys_4012_, v_vals_4013_, v_heq_4014_, v_i_4015_, v_k_4016_);
lean_dec(v_k_4016_);
lean_dec_ref(v_vals_4013_);
lean_dec_ref(v_keys_4012_);
return v_res_4017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(lean_object* v_type_4018_, lean_object* v_k_4019_, uint8_t v_cleanupAnnotations_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_){
_start:
{
lean_object* v___f_4026_; uint8_t v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___f_4026_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4026_, 0, v_k_4019_);
v___x_4027_ = 0;
v___x_4028_ = lean_box(0);
v___x_4029_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_4027_, v___x_4028_, v_type_4018_, v___f_4026_, v_cleanupAnnotations_4020_, v___x_4027_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4037_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4032_ = v___x_4029_;
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_4029_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4030_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
else
{
lean_object* v_a_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4045_; 
v_a_4038_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_4040_ = v___x_4029_;
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_a_4038_);
lean_dec(v___x_4029_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v___x_4043_; 
if (v_isShared_4041_ == 0)
{
v___x_4043_ = v___x_4040_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4038_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg___boxed(lean_object* v_type_4046_, lean_object* v_k_4047_, lean_object* v_cleanupAnnotations_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4054_; lean_object* v_res_4055_; 
v_cleanupAnnotations_boxed_4054_ = lean_unbox(v_cleanupAnnotations_4048_);
v_res_4055_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_type_4046_, v_k_4047_, v_cleanupAnnotations_boxed_4054_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(lean_object* v_00_u03b1_4056_, lean_object* v_type_4057_, lean_object* v_k_4058_, uint8_t v_cleanupAnnotations_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v___x_4065_; 
v___x_4065_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_type_4057_, v_k_4058_, v_cleanupAnnotations_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4066_, lean_object* v_type_4067_, lean_object* v_k_4068_, lean_object* v_cleanupAnnotations_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4075_; lean_object* v_res_4076_; 
v_cleanupAnnotations_boxed_4075_ = lean_unbox(v_cleanupAnnotations_4069_);
v_res_4076_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(v_00_u03b1_4066_, v_type_4067_, v_k_4068_, v_cleanupAnnotations_boxed_4075_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(lean_object* v_msg_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v___f_4083_; lean_object* v___x_18858__overap_4084_; lean_object* v___x_4085_; 
v___f_4083_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0));
v___x_18858__overap_4084_ = lean_panic_fn_borrowed(v___f_4083_, v_msg_4077_);
lean_inc(v___y_4081_);
lean_inc_ref(v___y_4080_);
lean_inc(v___y_4079_);
lean_inc_ref(v___y_4078_);
v___x_4085_ = lean_apply_5(v___x_18858__overap_4084_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, lean_box(0));
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___boxed(lean_object* v_msg_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(v_msg_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
return v_res_4092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(lean_object* v_c_4093_){
_start:
{
uint8_t v_foApprox_4094_; uint8_t v_ctxApprox_4095_; uint8_t v_quasiPatternApprox_4096_; uint8_t v_constApprox_4097_; uint8_t v_isDefEqStuckEx_4098_; uint8_t v_unificationHints_4099_; uint8_t v_proofIrrelevance_4100_; uint8_t v_assignSyntheticOpaque_4101_; uint8_t v_offsetCnstrs_4102_; uint8_t v_transparency_4103_; uint8_t v_univApprox_4104_; uint8_t v_iota_4105_; uint8_t v_beta_4106_; uint8_t v_proj_4107_; uint8_t v_zeta_4108_; uint8_t v_zetaDelta_4109_; uint8_t v_zetaUnused_4110_; uint8_t v_zetaHave_4111_; uint8_t v_canUnfoldPredicateConfig_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4120_; 
v_foApprox_4094_ = lean_ctor_get_uint8(v_c_4093_, 0);
v_ctxApprox_4095_ = lean_ctor_get_uint8(v_c_4093_, 1);
v_quasiPatternApprox_4096_ = lean_ctor_get_uint8(v_c_4093_, 2);
v_constApprox_4097_ = lean_ctor_get_uint8(v_c_4093_, 3);
v_isDefEqStuckEx_4098_ = lean_ctor_get_uint8(v_c_4093_, 4);
v_unificationHints_4099_ = lean_ctor_get_uint8(v_c_4093_, 5);
v_proofIrrelevance_4100_ = lean_ctor_get_uint8(v_c_4093_, 6);
v_assignSyntheticOpaque_4101_ = lean_ctor_get_uint8(v_c_4093_, 7);
v_offsetCnstrs_4102_ = lean_ctor_get_uint8(v_c_4093_, 8);
v_transparency_4103_ = lean_ctor_get_uint8(v_c_4093_, 9);
v_univApprox_4104_ = lean_ctor_get_uint8(v_c_4093_, 11);
v_iota_4105_ = lean_ctor_get_uint8(v_c_4093_, 12);
v_beta_4106_ = lean_ctor_get_uint8(v_c_4093_, 13);
v_proj_4107_ = lean_ctor_get_uint8(v_c_4093_, 14);
v_zeta_4108_ = lean_ctor_get_uint8(v_c_4093_, 15);
v_zetaDelta_4109_ = lean_ctor_get_uint8(v_c_4093_, 16);
v_zetaUnused_4110_ = lean_ctor_get_uint8(v_c_4093_, 17);
v_zetaHave_4111_ = lean_ctor_get_uint8(v_c_4093_, 18);
v_canUnfoldPredicateConfig_4112_ = lean_ctor_get_uint8(v_c_4093_, 19);
v_isSharedCheck_4120_ = !lean_is_exclusive(v_c_4093_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4114_ = v_c_4093_;
v_isShared_4115_ = v_isSharedCheck_4120_;
goto v_resetjp_4113_;
}
else
{
lean_dec(v_c_4093_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4120_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
uint8_t v___x_4116_; lean_object* v___x_4118_; 
v___x_4116_ = 2;
if (v_isShared_4115_ == 0)
{
v___x_4118_ = v___x_4114_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 0, v_foApprox_4094_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 1, v_ctxApprox_4095_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 2, v_quasiPatternApprox_4096_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 3, v_constApprox_4097_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 4, v_isDefEqStuckEx_4098_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 5, v_unificationHints_4099_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 6, v_proofIrrelevance_4100_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 7, v_assignSyntheticOpaque_4101_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 8, v_offsetCnstrs_4102_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 9, v_transparency_4103_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 11, v_univApprox_4104_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 12, v_iota_4105_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 13, v_beta_4106_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 14, v_proj_4107_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 15, v_zeta_4108_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 16, v_zetaDelta_4109_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 17, v_zetaUnused_4110_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 18, v_zetaHave_4111_);
lean_ctor_set_uint8(v_reuseFailAlloc_4119_, 19, v_canUnfoldPredicateConfig_4112_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_ctor_set_uint8(v___x_4118_, 10, v___x_4116_);
return v___x_4118_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(lean_object* v_x_4121_, lean_object* v_t_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_dummy_4128_; lean_object* v_nargs_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; 
v_dummy_4128_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0);
v_nargs_4129_ = l_Lean_Expr_getAppNumArgs(v_t_4122_);
lean_inc(v_nargs_4129_);
v___x_4130_ = lean_mk_array(v_nargs_4129_, v_dummy_4128_);
v___x_4131_ = lean_unsigned_to_nat(1u);
v___x_4132_ = lean_nat_sub(v_nargs_4129_, v___x_4131_);
lean_dec(v_nargs_4129_);
v___x_4133_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_t_4122_, v___x_4130_, v___x_4132_);
v___x_4134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4133_);
return v___x_4134_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed(lean_object* v_x_4135_, lean_object* v_t_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v_res_4142_; 
v_res_4142_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(v_x_4135_, v_t_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec_ref(v_x_4135_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(lean_object* v_snd_4143_, lean_object* v_x_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4150_, 0, v_snd_4143_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed(lean_object* v_snd_4151_, lean_object* v_x_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(v_snd_4151_, v_x_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec(v___y_4154_);
lean_dec_ref(v___y_4153_);
lean_dec_ref(v_x_4152_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(size_t v_sz_4159_, size_t v_i_4160_, lean_object* v_bs_4161_){
_start:
{
uint8_t v___x_4162_; 
v___x_4162_ = lean_usize_dec_lt(v_i_4160_, v_sz_4159_);
if (v___x_4162_ == 0)
{
return v_bs_4161_;
}
else
{
lean_object* v_v_4163_; lean_object* v_fst_4164_; lean_object* v_snd_4165_; lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4179_; 
v_v_4163_ = lean_array_uget(v_bs_4161_, v_i_4160_);
v_fst_4164_ = lean_ctor_get(v_v_4163_, 0);
v_snd_4165_ = lean_ctor_get(v_v_4163_, 1);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_v_4163_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4167_ = v_v_4163_;
v_isShared_4168_ = v_isSharedCheck_4179_;
goto v_resetjp_4166_;
}
else
{
lean_inc(v_snd_4165_);
lean_inc(v_fst_4164_);
lean_dec(v_v_4163_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4179_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
lean_object* v___x_4169_; lean_object* v_bs_x27_4170_; lean_object* v___f_4171_; lean_object* v___x_4173_; 
v___x_4169_ = lean_unsigned_to_nat(0u);
v_bs_x27_4170_ = lean_array_uset(v_bs_4161_, v_i_4160_, v___x_4169_);
v___f_4171_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4171_, 0, v_snd_4165_);
if (v_isShared_4168_ == 0)
{
lean_ctor_set(v___x_4167_, 1, v___f_4171_);
v___x_4173_ = v___x_4167_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_fst_4164_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v___f_4171_);
v___x_4173_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
size_t v___x_4174_; size_t v___x_4175_; lean_object* v___x_4176_; 
v___x_4174_ = ((size_t)1ULL);
v___x_4175_ = lean_usize_add(v_i_4160_, v___x_4174_);
v___x_4176_ = lean_array_uset(v_bs_x27_4170_, v_i_4160_, v___x_4173_);
v_i_4160_ = v___x_4175_;
v_bs_4161_ = v___x_4176_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___boxed(lean_object* v_sz_4180_, lean_object* v_i_4181_, lean_object* v_bs_4182_){
_start:
{
size_t v_sz_boxed_4183_; size_t v_i_boxed_4184_; lean_object* v_res_4185_; 
v_sz_boxed_4183_ = lean_unbox_usize(v_sz_4180_);
lean_dec(v_sz_4180_);
v_i_boxed_4184_ = lean_unbox_usize(v_i_4181_);
lean_dec(v_i_4181_);
v_res_4185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(v_sz_boxed_4183_, v_i_boxed_4184_, v_bs_4182_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(size_t v_sz_4186_, size_t v_i_4187_, lean_object* v_bs_4188_){
_start:
{
uint8_t v___x_4189_; 
v___x_4189_ = lean_usize_dec_lt(v_i_4187_, v_sz_4186_);
if (v___x_4189_ == 0)
{
return v_bs_4188_;
}
else
{
lean_object* v_v_4190_; lean_object* v_fst_4191_; lean_object* v_snd_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4208_; 
v_v_4190_ = lean_array_uget(v_bs_4188_, v_i_4187_);
v_fst_4191_ = lean_ctor_get(v_v_4190_, 0);
v_snd_4192_ = lean_ctor_get(v_v_4190_, 1);
v_isSharedCheck_4208_ = !lean_is_exclusive(v_v_4190_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4194_ = v_v_4190_;
v_isShared_4195_ = v_isSharedCheck_4208_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_snd_4192_);
lean_inc(v_fst_4191_);
lean_dec(v_v_4190_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4208_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4196_; lean_object* v_bs_x27_4197_; uint8_t v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4201_; 
v___x_4196_ = lean_unsigned_to_nat(0u);
v_bs_x27_4197_ = lean_array_uset(v_bs_4188_, v_i_4187_, v___x_4196_);
v___x_4198_ = 0;
v___x_4199_ = lean_box(v___x_4198_);
if (v_isShared_4195_ == 0)
{
lean_ctor_set(v___x_4194_, 0, v___x_4199_);
v___x_4201_ = v___x_4194_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v___x_4199_);
lean_ctor_set(v_reuseFailAlloc_4207_, 1, v_snd_4192_);
v___x_4201_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
lean_object* v___x_4202_; size_t v___x_4203_; size_t v___x_4204_; lean_object* v___x_4205_; 
v___x_4202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4202_, 0, v_fst_4191_);
lean_ctor_set(v___x_4202_, 1, v___x_4201_);
v___x_4203_ = ((size_t)1ULL);
v___x_4204_ = lean_usize_add(v_i_4187_, v___x_4203_);
v___x_4205_ = lean_array_uset(v_bs_x27_4197_, v_i_4187_, v___x_4202_);
v_i_4187_ = v___x_4204_;
v_bs_4188_ = v___x_4205_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6___boxed(lean_object* v_sz_4209_, lean_object* v_i_4210_, lean_object* v_bs_4211_){
_start:
{
size_t v_sz_boxed_4212_; size_t v_i_boxed_4213_; lean_object* v_res_4214_; 
v_sz_boxed_4212_ = lean_unbox_usize(v_sz_4209_);
lean_dec(v_sz_4209_);
v_i_boxed_4213_ = lean_unbox_usize(v_i_4210_);
lean_dec(v_i_4210_);
v_res_4214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(v_sz_boxed_4212_, v_i_boxed_4213_, v_bs_4211_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(lean_object* v___x_4215_, lean_object* v___x_4216_, lean_object* v_a_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_20564__overap_4223_; lean_object* v___x_4224_; 
v___x_20564__overap_4223_ = l_instInhabitedOfMonad___redArg(v___x_4215_, v___x_4216_);
lean_inc(v___y_4221_);
lean_inc_ref(v___y_4220_);
lean_inc(v___y_4219_);
lean_inc_ref(v___y_4218_);
v___x_4224_ = lean_apply_5(v___x_20564__overap_4223_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, lean_box(0));
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed(lean_object* v___x_4225_, lean_object* v___x_4226_, lean_object* v_a_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_){
_start:
{
lean_object* v_res_4233_; 
v_res_4233_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(v___x_4225_, v___x_4226_, v_a_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
lean_dec(v___y_4229_);
lean_dec_ref(v___y_4228_);
lean_dec_ref(v_a_4227_);
return v_res_4233_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0(void){
_start:
{
lean_object* v___x_4234_; 
v___x_4234_ = l_instMonadEIO___redArg();
return v___x_4234_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1(void){
_start:
{
lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4235_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0);
v___x_4236_ = l_StateRefT_x27_instMonad___redArg(v___x_4235_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed(lean_object* v_acc_4241_, lean_object* v_declInfos_4242_, lean_object* v_k_4243_, lean_object* v_kind_4244_, lean_object* v_x_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
uint8_t v_kind_boxed_4251_; lean_object* v_res_4252_; 
v_kind_boxed_4251_ = lean_unbox(v_kind_4244_);
v_res_4252_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(v_acc_4241_, v_declInfos_4242_, v_k_4243_, v_kind_boxed_4251_, v_x_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_);
lean_dec(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(lean_object* v_declInfos_4253_, lean_object* v_k_4254_, uint8_t v_kind_4255_, lean_object* v_acc_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v___x_4262_; lean_object* v_toApplicative_4263_; lean_object* v_toFunctor_4264_; lean_object* v_toSeq_4265_; lean_object* v_toSeqLeft_4266_; lean_object* v_toSeqRight_4267_; lean_object* v___f_4268_; lean_object* v___f_4269_; lean_object* v___f_4270_; lean_object* v___f_4271_; lean_object* v___x_4272_; lean_object* v___f_4273_; lean_object* v___f_4274_; lean_object* v___f_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v_toApplicative_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4329_; 
v___x_4262_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1);
v_toApplicative_4263_ = lean_ctor_get(v___x_4262_, 0);
v_toFunctor_4264_ = lean_ctor_get(v_toApplicative_4263_, 0);
v_toSeq_4265_ = lean_ctor_get(v_toApplicative_4263_, 2);
v_toSeqLeft_4266_ = lean_ctor_get(v_toApplicative_4263_, 3);
v_toSeqRight_4267_ = lean_ctor_get(v_toApplicative_4263_, 4);
v___f_4268_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2));
v___f_4269_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3));
lean_inc_ref_n(v_toFunctor_4264_, 2);
v___f_4270_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4270_, 0, v_toFunctor_4264_);
v___f_4271_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4271_, 0, v_toFunctor_4264_);
v___x_4272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4272_, 0, v___f_4270_);
lean_ctor_set(v___x_4272_, 1, v___f_4271_);
lean_inc(v_toSeqRight_4267_);
v___f_4273_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4273_, 0, v_toSeqRight_4267_);
lean_inc(v_toSeqLeft_4266_);
v___f_4274_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4274_, 0, v_toSeqLeft_4266_);
lean_inc(v_toSeq_4265_);
v___f_4275_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4275_, 0, v_toSeq_4265_);
v___x_4276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4272_);
lean_ctor_set(v___x_4276_, 1, v___f_4268_);
lean_ctor_set(v___x_4276_, 2, v___f_4275_);
lean_ctor_set(v___x_4276_, 3, v___f_4274_);
lean_ctor_set(v___x_4276_, 4, v___f_4273_);
v___x_4277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4277_, 0, v___x_4276_);
lean_ctor_set(v___x_4277_, 1, v___f_4269_);
v___x_4278_ = l_StateRefT_x27_instMonad___redArg(v___x_4277_);
v_toApplicative_4279_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4329_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4329_ == 0)
{
lean_object* v_unused_4330_; 
v_unused_4330_ = lean_ctor_get(v___x_4278_, 1);
lean_dec(v_unused_4330_);
v___x_4281_ = v___x_4278_;
v_isShared_4282_ = v_isSharedCheck_4329_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_toApplicative_4279_);
lean_dec(v___x_4278_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4329_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v_toFunctor_4283_; lean_object* v_toSeq_4284_; lean_object* v_toSeqLeft_4285_; lean_object* v_toSeqRight_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4327_; 
v_toFunctor_4283_ = lean_ctor_get(v_toApplicative_4279_, 0);
v_toSeq_4284_ = lean_ctor_get(v_toApplicative_4279_, 2);
v_toSeqLeft_4285_ = lean_ctor_get(v_toApplicative_4279_, 3);
v_toSeqRight_4286_ = lean_ctor_get(v_toApplicative_4279_, 4);
v_isSharedCheck_4327_ = !lean_is_exclusive(v_toApplicative_4279_);
if (v_isSharedCheck_4327_ == 0)
{
lean_object* v_unused_4328_; 
v_unused_4328_ = lean_ctor_get(v_toApplicative_4279_, 1);
lean_dec(v_unused_4328_);
v___x_4288_ = v_toApplicative_4279_;
v_isShared_4289_ = v_isSharedCheck_4327_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_toSeqRight_4286_);
lean_inc(v_toSeqLeft_4285_);
lean_inc(v_toSeq_4284_);
lean_inc(v_toFunctor_4283_);
lean_dec(v_toApplicative_4279_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4327_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___f_4290_; lean_object* v___f_4291_; lean_object* v___f_4292_; lean_object* v___f_4293_; lean_object* v___x_4294_; lean_object* v___f_4295_; lean_object* v___f_4296_; lean_object* v___f_4297_; lean_object* v___x_4299_; 
v___f_4290_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4));
v___f_4291_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5));
lean_inc_ref(v_toFunctor_4283_);
v___f_4292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4292_, 0, v_toFunctor_4283_);
v___f_4293_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4293_, 0, v_toFunctor_4283_);
v___x_4294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4294_, 0, v___f_4292_);
lean_ctor_set(v___x_4294_, 1, v___f_4293_);
v___f_4295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4295_, 0, v_toSeqRight_4286_);
v___f_4296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4296_, 0, v_toSeqLeft_4285_);
v___f_4297_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4297_, 0, v_toSeq_4284_);
if (v_isShared_4289_ == 0)
{
lean_ctor_set(v___x_4288_, 4, v___f_4295_);
lean_ctor_set(v___x_4288_, 3, v___f_4296_);
lean_ctor_set(v___x_4288_, 2, v___f_4297_);
lean_ctor_set(v___x_4288_, 1, v___f_4290_);
lean_ctor_set(v___x_4288_, 0, v___x_4294_);
v___x_4299_ = v___x_4288_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4326_; 
v_reuseFailAlloc_4326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4326_, 0, v___x_4294_);
lean_ctor_set(v_reuseFailAlloc_4326_, 1, v___f_4290_);
lean_ctor_set(v_reuseFailAlloc_4326_, 2, v___f_4297_);
lean_ctor_set(v_reuseFailAlloc_4326_, 3, v___f_4296_);
lean_ctor_set(v_reuseFailAlloc_4326_, 4, v___f_4295_);
v___x_4299_ = v_reuseFailAlloc_4326_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
lean_object* v___x_4301_; 
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 1, v___f_4291_);
lean_ctor_set(v___x_4281_, 0, v___x_4299_);
v___x_4301_ = v___x_4281_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v___x_4299_);
lean_ctor_set(v_reuseFailAlloc_4325_, 1, v___f_4291_);
v___x_4301_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
lean_object* v___x_4302_; lean_object* v___x_4303_; uint8_t v___x_4304_; 
v___x_4302_ = lean_array_get_size(v_acc_4256_);
v___x_4303_ = lean_array_get_size(v_declInfos_4253_);
v___x_4304_ = lean_nat_dec_lt(v___x_4302_, v___x_4303_);
if (v___x_4304_ == 0)
{
lean_object* v___x_4305_; 
lean_dec_ref(v___x_4301_);
lean_dec_ref(v_declInfos_4253_);
lean_inc(v___y_4260_);
lean_inc_ref(v___y_4259_);
lean_inc(v___y_4258_);
lean_inc_ref(v___y_4257_);
v___x_4305_ = lean_apply_6(v_k_4254_, v_acc_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, lean_box(0));
return v___x_4305_;
}
else
{
lean_object* v___x_4306_; uint8_t v___x_4307_; lean_object* v___x_4308_; lean_object* v___f_4309_; lean_object* v___f_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v_snd_4315_; lean_object* v_fst_4316_; lean_object* v_fst_4317_; lean_object* v_snd_4318_; lean_object* v___x_4319_; lean_object* v___f_4320_; lean_object* v___x_4321_; 
v___x_4306_ = lean_box(0);
v___x_4307_ = 0;
v___x_4308_ = l_Lean_instInhabitedExpr;
v___f_4309_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4309_, 0, v___x_4301_);
lean_closure_set(v___f_4309_, 1, v___x_4308_);
v___f_4310_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4310_, 0, v___f_4309_);
v___x_4311_ = lean_box(v___x_4307_);
v___x_4312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4311_);
lean_ctor_set(v___x_4312_, 1, v___f_4310_);
v___x_4313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4306_);
lean_ctor_set(v___x_4313_, 1, v___x_4312_);
v___x_4314_ = lean_array_get(v___x_4313_, v_declInfos_4253_, v___x_4302_);
lean_dec_ref_known(v___x_4313_, 2);
v_snd_4315_ = lean_ctor_get(v___x_4314_, 1);
lean_inc(v_snd_4315_);
v_fst_4316_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_fst_4316_);
lean_dec(v___x_4314_);
v_fst_4317_ = lean_ctor_get(v_snd_4315_, 0);
lean_inc(v_fst_4317_);
v_snd_4318_ = lean_ctor_get(v_snd_4315_, 1);
lean_inc(v_snd_4318_);
lean_dec(v_snd_4315_);
v___x_4319_ = lean_box(v_kind_4255_);
lean_inc_ref(v_acc_4256_);
v___f_4320_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed), 10, 4);
lean_closure_set(v___f_4320_, 0, v_acc_4256_);
lean_closure_set(v___f_4320_, 1, v_declInfos_4253_);
lean_closure_set(v___f_4320_, 2, v_k_4254_);
lean_closure_set(v___f_4320_, 3, v___x_4319_);
lean_inc(v___y_4260_);
lean_inc_ref(v___y_4259_);
lean_inc(v___y_4258_);
lean_inc_ref(v___y_4257_);
v___x_4321_ = lean_apply_6(v_snd_4318_, v_acc_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, lean_box(0));
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; uint8_t v___x_4323_; lean_object* v___x_4324_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = lean_unbox(v_fst_4317_);
lean_dec(v_fst_4317_);
v___x_4324_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_fst_4316_, v___x_4323_, v_a_4322_, v___f_4320_, v_kind_4255_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_);
return v___x_4324_;
}
else
{
lean_dec_ref(v___f_4320_);
lean_dec(v_fst_4317_);
lean_dec(v_fst_4316_);
return v___x_4321_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(lean_object* v_acc_4331_, lean_object* v_declInfos_4332_, lean_object* v_k_4333_, uint8_t v_kind_4334_, lean_object* v_x_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_){
_start:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4341_ = lean_array_push(v_acc_4331_, v_x_4335_);
v___x_4342_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4332_, v_k_4333_, v_kind_4334_, v___x_4341_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___boxed(lean_object* v_declInfos_4343_, lean_object* v_k_4344_, lean_object* v_kind_4345_, lean_object* v_acc_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
uint8_t v_kind_boxed_4352_; lean_object* v_res_4353_; 
v_kind_boxed_4352_ = lean_unbox(v_kind_4345_);
v_res_4353_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4343_, v_k_4344_, v_kind_boxed_4352_, v_acc_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(lean_object* v_declInfos_4354_, lean_object* v_k_4355_, uint8_t v_kind_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4362_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0));
v___x_4363_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4354_, v_k_4355_, v_kind_4356_, v___x_4362_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7___boxed(lean_object* v_declInfos_4364_, lean_object* v_k_4365_, lean_object* v_kind_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_){
_start:
{
uint8_t v_kind_boxed_4372_; lean_object* v_res_4373_; 
v_kind_boxed_4372_ = lean_unbox(v_kind_4366_);
v_res_4373_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(v_declInfos_4364_, v_k_4365_, v_kind_boxed_4372_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_);
lean_dec(v___y_4370_);
lean_dec_ref(v___y_4369_);
lean_dec(v___y_4368_);
lean_dec_ref(v___y_4367_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(lean_object* v_declInfos_4374_, lean_object* v_k_4375_, uint8_t v_kind_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_){
_start:
{
size_t v_sz_4382_; size_t v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v_sz_4382_ = lean_array_size(v_declInfos_4374_);
v___x_4383_ = ((size_t)0ULL);
v___x_4384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(v_sz_4382_, v___x_4383_, v_declInfos_4374_);
v___x_4385_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(v___x_4384_, v_k_4375_, v_kind_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v___x_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5___boxed(lean_object* v_declInfos_4386_, lean_object* v_k_4387_, lean_object* v_kind_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
uint8_t v_kind_boxed_4394_; lean_object* v_res_4395_; 
v_kind_boxed_4394_ = lean_unbox(v_kind_4388_);
v_res_4395_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(v_declInfos_4386_, v_k_4387_, v_kind_boxed_4394_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
return v_res_4395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(lean_object* v_declInfos_4396_, lean_object* v_k_4397_, uint8_t v_kind_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_){
_start:
{
size_t v_sz_4404_; size_t v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v_sz_4404_ = lean_array_size(v_declInfos_4396_);
v___x_4405_ = ((size_t)0ULL);
v___x_4406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(v_sz_4404_, v___x_4405_, v_declInfos_4396_);
v___x_4407_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(v___x_4406_, v_k_4397_, v_kind_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
return v___x_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4___boxed(lean_object* v_declInfos_4408_, lean_object* v_k_4409_, lean_object* v_kind_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_){
_start:
{
uint8_t v_kind_boxed_4416_; lean_object* v_res_4417_; 
v_kind_boxed_4416_ = lean_unbox(v_kind_4410_);
v_res_4417_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(v_declInfos_4408_, v_k_4409_, v_kind_boxed_4416_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
lean_dec(v___y_4414_);
lean_dec_ref(v___y_4413_);
lean_dec(v___y_4412_);
lean_dec_ref(v___y_4411_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg(lean_object* v_a_4421_, lean_object* v_b_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_){
_start:
{
lean_object* v_array_4428_; lean_object* v_start_4429_; lean_object* v_stop_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4488_; 
v_array_4428_ = lean_ctor_get(v_a_4421_, 0);
v_start_4429_ = lean_ctor_get(v_a_4421_, 1);
v_stop_4430_ = lean_ctor_get(v_a_4421_, 2);
v_isSharedCheck_4488_ = !lean_is_exclusive(v_a_4421_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4432_ = v_a_4421_;
v_isShared_4433_ = v_isSharedCheck_4488_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_stop_4430_);
lean_inc(v_start_4429_);
lean_inc(v_array_4428_);
lean_dec(v_a_4421_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4488_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
uint8_t v___x_4434_; 
v___x_4434_ = lean_nat_dec_lt(v_start_4429_, v_stop_4430_);
if (v___x_4434_ == 0)
{
lean_object* v___x_4435_; 
lean_del_object(v___x_4432_);
lean_dec(v_stop_4430_);
lean_dec(v_start_4429_);
lean_dec_ref(v_array_4428_);
v___x_4435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4435_, 0, v_b_4422_);
return v___x_4435_;
}
else
{
lean_object* v_snd_4436_; lean_object* v_fst_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4487_; 
v_snd_4436_ = lean_ctor_get(v_b_4422_, 1);
v_fst_4437_ = lean_ctor_get(v_b_4422_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v_b_4422_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4439_ = v_b_4422_;
v_isShared_4440_ = v_isSharedCheck_4487_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_snd_4436_);
lean_inc(v_fst_4437_);
lean_dec(v_b_4422_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4487_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v_array_4441_; lean_object* v_start_4442_; lean_object* v_stop_4443_; uint8_t v___x_4444_; 
v_array_4441_ = lean_ctor_get(v_snd_4436_, 0);
v_start_4442_ = lean_ctor_get(v_snd_4436_, 1);
v_stop_4443_ = lean_ctor_get(v_snd_4436_, 2);
v___x_4444_ = lean_nat_dec_lt(v_start_4442_, v_stop_4443_);
if (v___x_4444_ == 0)
{
lean_object* v___x_4446_; 
lean_del_object(v___x_4432_);
lean_dec(v_stop_4430_);
lean_dec(v_start_4429_);
lean_dec_ref(v_array_4428_);
if (v_isShared_4440_ == 0)
{
v___x_4446_ = v___x_4439_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_fst_4437_);
lean_ctor_set(v_reuseFailAlloc_4448_, 1, v_snd_4436_);
v___x_4446_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
lean_object* v___x_4447_; 
v___x_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
return v___x_4447_;
}
}
else
{
lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4483_; 
lean_inc(v_stop_4443_);
lean_inc(v_start_4442_);
lean_inc_ref(v_array_4441_);
v_isSharedCheck_4483_ = !lean_is_exclusive(v_snd_4436_);
if (v_isSharedCheck_4483_ == 0)
{
lean_object* v_unused_4484_; lean_object* v_unused_4485_; lean_object* v_unused_4486_; 
v_unused_4484_ = lean_ctor_get(v_snd_4436_, 2);
lean_dec(v_unused_4484_);
v_unused_4485_ = lean_ctor_get(v_snd_4436_, 1);
lean_dec(v_unused_4485_);
v_unused_4486_ = lean_ctor_get(v_snd_4436_, 0);
lean_dec(v_unused_4486_);
v___x_4450_ = v_snd_4436_;
v_isShared_4451_ = v_isSharedCheck_4483_;
goto v_resetjp_4449_;
}
else
{
lean_dec(v_snd_4436_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4483_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4455_; 
v___x_4452_ = lean_unsigned_to_nat(1u);
v___x_4453_ = lean_nat_add(v_start_4429_, v___x_4452_);
lean_inc_ref(v_array_4428_);
if (v_isShared_4451_ == 0)
{
lean_ctor_set(v___x_4450_, 2, v_stop_4430_);
lean_ctor_set(v___x_4450_, 1, v___x_4453_);
lean_ctor_set(v___x_4450_, 0, v_array_4428_);
v___x_4455_ = v___x_4450_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_array_4428_);
lean_ctor_set(v_reuseFailAlloc_4482_, 1, v___x_4453_);
lean_ctor_set(v_reuseFailAlloc_4482_, 2, v_stop_4430_);
v___x_4455_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4460_; 
v___x_4456_ = lean_array_fget(v_array_4428_, v_start_4429_);
lean_dec(v_start_4429_);
lean_dec_ref(v_array_4428_);
v___x_4457_ = lean_array_fget(v_array_4441_, v_start_4442_);
v___x_4458_ = lean_nat_add(v_start_4442_, v___x_4452_);
lean_dec(v_start_4442_);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 2, v_stop_4443_);
lean_ctor_set(v___x_4432_, 1, v___x_4458_);
lean_ctor_set(v___x_4432_, 0, v_array_4441_);
v___x_4460_ = v___x_4432_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4481_; 
v_reuseFailAlloc_4481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4481_, 0, v_array_4441_);
lean_ctor_set(v_reuseFailAlloc_4481_, 1, v___x_4458_);
lean_ctor_set(v_reuseFailAlloc_4481_, 2, v_stop_4443_);
v___x_4460_ = v_reuseFailAlloc_4481_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
lean_object* v___x_4461_; 
v___x_4461_ = l_Lean_Meta_mkEqHEq(v___x_4456_, v___x_4457_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v_a_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4468_; 
v_a_4462_ = lean_ctor_get(v___x_4461_, 0);
lean_inc(v_a_4462_);
lean_dec_ref_known(v___x_4461_, 1);
v___x_4463_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___closed__1));
v___x_4464_ = lean_array_get_size(v_fst_4437_);
v___x_4465_ = lean_nat_add(v___x_4464_, v___x_4452_);
v___x_4466_ = lean_name_append_index_after(v___x_4463_, v___x_4465_);
if (v_isShared_4440_ == 0)
{
lean_ctor_set(v___x_4439_, 1, v_a_4462_);
lean_ctor_set(v___x_4439_, 0, v___x_4466_);
v___x_4468_ = v___x_4439_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v___x_4466_);
lean_ctor_set(v_reuseFailAlloc_4472_, 1, v_a_4462_);
v___x_4468_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4469_ = lean_array_push(v_fst_4437_, v___x_4468_);
v___x_4470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
lean_ctor_set(v___x_4470_, 1, v___x_4460_);
v_a_4421_ = v___x_4455_;
v_b_4422_ = v___x_4470_;
goto _start;
}
}
else
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4480_; 
lean_dec_ref(v___x_4460_);
lean_dec_ref(v___x_4455_);
lean_del_object(v___x_4439_);
lean_dec(v_fst_4437_);
v_a_4473_ = lean_ctor_get(v___x_4461_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4475_ = v___x_4461_;
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4461_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___x_4478_; 
if (v_isShared_4476_ == 0)
{
v___x_4478_ = v___x_4475_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
return v___x_4478_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg___boxed(lean_object* v_a_4489_, lean_object* v_b_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v_res_4496_; 
v_res_4496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg(v_a_4489_, v_b_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
lean_dec(v___y_4492_);
lean_dec_ref(v___y_4491_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(lean_object* v___x_4497_, lean_object* v_a_4498_, lean_object* v___x_4499_, lean_object* v_as_4500_, size_t v_sz_4501_, size_t v_i_4502_, lean_object* v_b_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v_a_4510_; uint8_t v___x_4514_; 
v___x_4514_ = lean_usize_dec_lt(v_i_4502_, v_sz_4501_);
if (v___x_4514_ == 0)
{
lean_object* v___x_4515_; 
lean_dec(v___x_4499_);
v___x_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4515_, 0, v_b_4503_);
return v___x_4515_;
}
else
{
lean_object* v___x_4516_; lean_object* v_a_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4516_ = l_Lean_instInhabitedExpr;
v_a_4517_ = lean_array_uget_borrowed(v_as_4500_, v_i_4502_);
v___x_4518_ = lean_array_get_borrowed(v___x_4516_, v___x_4497_, v_a_4517_);
lean_inc(v___x_4518_);
v___x_4519_ = l_Lean_Meta_instantiateForall(v___x_4518_, v_a_4498_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_);
if (lean_obj_tag(v___x_4519_) == 0)
{
lean_object* v_a_4520_; lean_object* v___x_4521_; 
v_a_4520_ = lean_ctor_get(v___x_4519_, 0);
lean_inc(v_a_4520_);
lean_dec_ref_known(v___x_4519_, 1);
lean_inc(v___x_4499_);
v___x_4521_ = l_Lean_Meta_Match_simpH_x3f(v_a_4520_, v___x_4499_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_);
if (lean_obj_tag(v___x_4521_) == 0)
{
lean_object* v_a_4522_; 
v_a_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc(v_a_4522_);
lean_dec_ref_known(v___x_4521_, 1);
if (lean_obj_tag(v_a_4522_) == 1)
{
lean_object* v_val_4523_; lean_object* v___x_4524_; 
v_val_4523_ = lean_ctor_get(v_a_4522_, 0);
lean_inc(v_val_4523_);
lean_dec_ref_known(v_a_4522_, 1);
v___x_4524_ = lean_array_push(v_b_4503_, v_val_4523_);
v_a_4510_ = v___x_4524_;
goto v___jp_4509_;
}
else
{
lean_dec(v_a_4522_);
v_a_4510_ = v_b_4503_;
goto v___jp_4509_;
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec_ref(v_b_4503_);
lean_dec(v___x_4499_);
v_a_4525_ = lean_ctor_get(v___x_4521_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4521_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4521_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4521_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4540_; 
lean_dec_ref(v_b_4503_);
lean_dec(v___x_4499_);
v_a_4533_ = lean_ctor_get(v___x_4519_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___x_4519_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4535_ = v___x_4519_;
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4519_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4538_; 
if (v_isShared_4536_ == 0)
{
v___x_4538_ = v___x_4535_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v_a_4533_);
v___x_4538_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
return v___x_4538_;
}
}
}
}
v___jp_4509_:
{
size_t v___x_4511_; size_t v___x_4512_; 
v___x_4511_ = ((size_t)1ULL);
v___x_4512_ = lean_usize_add(v_i_4502_, v___x_4511_);
v_i_4502_ = v___x_4512_;
v_b_4503_ = v_a_4510_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1___boxed(lean_object* v___x_4541_, lean_object* v_a_4542_, lean_object* v___x_4543_, lean_object* v_as_4544_, lean_object* v_sz_4545_, lean_object* v_i_4546_, lean_object* v_b_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
size_t v_sz_boxed_4553_; size_t v_i_boxed_4554_; lean_object* v_res_4555_; 
v_sz_boxed_4553_ = lean_unbox_usize(v_sz_4545_);
lean_dec(v_sz_4545_);
v_i_boxed_4554_ = lean_unbox_usize(v_i_4546_);
lean_dec(v_i_4546_);
v_res_4555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(v___x_4541_, v_a_4542_, v___x_4543_, v_as_4544_, v_sz_boxed_4553_, v_i_boxed_4554_, v_b_4547_, v___y_4548_, v___y_4549_, v___y_4550_, v___y_4551_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec_ref(v_as_4544_);
lean_dec_ref(v_a_4542_);
lean_dec_ref(v___x_4541_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(lean_object* v___y_4556_, lean_object* v_args_4557_, lean_object* v___x_4558_, lean_object* v_overlaps_4559_, lean_object* v_a_4560_, lean_object* v_fst_4561_, lean_object* v_a_4562_, lean_object* v___x_4563_, lean_object* v___x_4564_, lean_object* v___x_4565_, lean_object* v___x_4566_, lean_object* v_altVars_4567_, uint8_t v___x_4568_, uint8_t v___x_4569_, lean_object* v_a_4570_, lean_object* v___x_4571_, lean_object* v___x_4572_, lean_object* v___x_4573_, lean_object* v___x_4574_, lean_object* v___x_4575_, lean_object* v___x_4576_, lean_object* v___x_4577_, lean_object* v_matchDeclName_4578_, lean_object* v___x_4579_, lean_object* v___x_4580_, lean_object* v___x_4581_, lean_object* v_heqs_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = l_Lean_mkAppN(v___y_4556_, v_args_4557_);
lean_inc_ref(v_heqs_4582_);
v___x_4589_ = l_Lean_Meta_Match_mkAppDiscrEqs(v___x_4588_, v_heqs_4582_, v___x_4558_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4591_; size_t v_sz_4592_; size_t v___x_4593_; lean_object* v___x_4594_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc(v_a_4590_);
lean_dec_ref_known(v___x_4589_, 1);
v___x_4591_ = l_Lean_Meta_Match_Overlaps_overlapping(v_overlaps_4559_, v_a_4560_);
v_sz_4592_ = lean_array_size(v___x_4591_);
v___x_4593_ = ((size_t)0ULL);
lean_inc_ref(v___x_4564_);
v___x_4594_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(v_fst_4561_, v_a_4562_, v___x_4563_, v___x_4591_, v_sz_4592_, v___x_4593_, v___x_4564_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
lean_dec_ref(v___x_4591_);
if (lean_obj_tag(v___x_4594_) == 0)
{
lean_object* v_a_4595_; lean_object* v___y_4597_; lean_object* v___y_4598_; lean_object* v___y_4599_; lean_object* v___y_4600_; lean_object* v_toCold_4707_; lean_object* v_options_4708_; uint8_t v_hasTrace_4709_; 
v_a_4595_ = lean_ctor_get(v___x_4594_, 0);
lean_inc(v_a_4595_);
lean_dec_ref_known(v___x_4594_, 1);
v_toCold_4707_ = lean_ctor_get(v___y_4585_, 0);
v_options_4708_ = lean_ctor_get(v_toCold_4707_, 2);
v_hasTrace_4709_ = lean_ctor_get_uint8(v_options_4708_, sizeof(void*)*1);
if (v_hasTrace_4709_ == 0)
{
v___y_4597_ = v___y_4583_;
v___y_4598_ = v___y_4584_;
v___y_4599_ = v___y_4585_;
v___y_4600_ = v___y_4586_;
goto v___jp_4596_;
}
else
{
lean_object* v_inheritedTraceOptions_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; uint8_t v___x_4713_; 
v_inheritedTraceOptions_4710_ = lean_ctor_get(v_toCold_4707_, 11);
v___x_4711_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
v___x_4712_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_4713_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4710_, v_options_4708_, v___x_4712_);
if (v___x_4713_ == 0)
{
v___y_4597_ = v___y_4583_;
v___y_4598_ = v___y_4584_;
v___y_4599_ = v___y_4585_;
v___y_4600_ = v___y_4586_;
goto v___jp_4596_;
}
else
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4714_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5);
lean_inc(v_a_4595_);
v___x_4715_ = lean_array_to_list(v_a_4595_);
v___x_4716_ = lean_box(0);
v___x_4717_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_4715_, v___x_4716_);
v___x_4718_ = l_Lean_MessageData_ofList(v___x_4717_);
v___x_4719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4714_);
lean_ctor_set(v___x_4719_, 1, v___x_4718_);
v___x_4720_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_4711_, v___x_4719_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
if (lean_obj_tag(v___x_4720_) == 0)
{
lean_dec_ref_known(v___x_4720_, 1);
v___y_4597_ = v___y_4583_;
v___y_4598_ = v___y_4584_;
v___y_4599_ = v___y_4585_;
v___y_4600_ = v___y_4586_;
goto v___jp_4596_;
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
lean_dec(v_a_4595_);
lean_dec(v_a_4590_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4575_);
lean_dec_ref(v___x_4574_);
lean_dec_ref(v___x_4572_);
lean_dec(v___x_4571_);
lean_dec_ref(v___x_4566_);
lean_dec(v___x_4565_);
lean_dec_ref(v___x_4564_);
lean_dec_ref(v_a_4562_);
v_a_4721_ = lean_ctor_get(v___x_4720_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4720_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4720_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4720_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
}
v___jp_4596_:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; size_t v_sz_4608_; lean_object* v___x_4609_; 
v___x_4601_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3);
v___x_4602_ = l_Array_reverse___redArg(v_a_4562_);
v___x_4603_ = lean_array_get_size(v___x_4602_);
v___x_4604_ = l_Array_toSubarray___redArg(v___x_4602_, v___x_4565_, v___x_4603_);
lean_inc_ref(v___x_4566_);
v___x_4605_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v___x_4566_, v___x_4564_);
v___x_4606_ = l_Array_reverse___redArg(v___x_4605_);
v___x_4607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4607_, 0, v___x_4601_);
lean_ctor_set(v___x_4607_, 1, v___x_4604_);
v_sz_4608_ = lean_array_size(v___x_4606_);
v___x_4609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v___x_4606_, v_sz_4608_, v___x_4593_, v___x_4607_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
lean_dec_ref(v___x_4606_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v_a_4610_; lean_object* v_fst_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4697_; 
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
lean_inc(v_a_4610_);
lean_dec_ref_known(v___x_4609_, 1);
v_fst_4611_ = lean_ctor_get(v_a_4610_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v_a_4610_);
if (v_isSharedCheck_4697_ == 0)
{
lean_object* v_unused_4698_; 
v_unused_4698_ = lean_ctor_get(v_a_4610_, 1);
lean_dec(v_unused_4698_);
v___x_4613_ = v_a_4610_;
v_isShared_4614_ = v_isSharedCheck_4697_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_fst_4611_);
lean_dec(v_a_4610_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4697_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; 
v___x_4615_ = l_Subarray_copy___redArg(v___x_4566_);
lean_inc_ref(v___x_4615_);
v___x_4616_ = l_Array_append___redArg(v___x_4615_, v_altVars_4567_);
v___x_4617_ = 1;
v___x_4618_ = l_Lean_Meta_mkForallFVars(v___x_4616_, v_fst_4611_, v___x_4568_, v___x_4569_, v___x_4569_, v___x_4617_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
lean_dec_ref(v___x_4616_);
if (lean_obj_tag(v___x_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; 
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
lean_inc(v_a_4619_);
lean_dec_ref_known(v___x_4618_, 1);
v___x_4620_ = l_Lean_ConstantInfo_name(v_a_4570_);
v___x_4621_ = l_Lean_mkConst(v___x_4620_, v___x_4571_);
lean_inc_ref(v___x_4572_);
v___x_4622_ = l_Subarray_copy___redArg(v___x_4572_);
v___x_4623_ = lean_mk_empty_array_with_capacity(v___x_4573_);
v___x_4624_ = lean_array_push(v___x_4623_, v___x_4574_);
v___x_4625_ = l_Array_append___redArg(v___x_4622_, v___x_4624_);
lean_dec_ref(v___x_4624_);
v___x_4626_ = l_Array_append___redArg(v___x_4625_, v___x_4615_);
lean_dec_ref(v___x_4615_);
v___x_4627_ = l_Subarray_copy___redArg(v___x_4575_);
v___x_4628_ = l_Array_append___redArg(v___x_4626_, v___x_4627_);
lean_dec_ref(v___x_4627_);
v___x_4629_ = l_Lean_mkAppN(v___x_4621_, v___x_4628_);
v___x_4630_ = l_Lean_Meta_mkHEq(v___x_4629_, v_a_4590_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
if (lean_obj_tag(v___x_4630_) == 0)
{
lean_object* v_a_4631_; lean_object* v___x_4632_; 
v_a_4631_ = lean_ctor_get(v___x_4630_, 0);
lean_inc(v_a_4631_);
lean_dec_ref_known(v___x_4630_, 1);
v___x_4632_ = l_Lean_mkArrowN(v_a_4595_, v_a_4631_, v___y_4599_, v___y_4600_);
lean_dec(v_a_4595_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v_a_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; 
v_a_4633_ = lean_ctor_get(v___x_4632_, 0);
lean_inc(v_a_4633_);
lean_dec_ref_known(v___x_4632_, 1);
v___x_4634_ = l_Array_append___redArg(v___x_4628_, v_altVars_4567_);
v___x_4635_ = l_Array_append___redArg(v___x_4634_, v_heqs_4582_);
v___x_4636_ = l_Lean_Meta_mkForallFVars(v___x_4635_, v_a_4633_, v___x_4568_, v___x_4569_, v___x_4569_, v___x_4617_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
lean_dec_ref(v___x_4635_);
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v_a_4637_; lean_object* v___x_4638_; 
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
lean_inc(v_a_4637_);
lean_dec_ref_known(v___x_4636_, 1);
v___x_4638_ = l_Lean_Meta_Match_unfoldNamedPattern(v_a_4637_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
if (lean_obj_tag(v___x_4638_) == 0)
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4696_; 
v_a_4639_ = lean_ctor_get(v___x_4638_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4638_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4641_ = v___x_4638_;
v_isShared_4642_ = v_isSharedCheck_4696_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v___x_4638_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4696_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v_start_4643_; lean_object* v_stop_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4694_; 
v_start_4643_ = lean_ctor_get(v___x_4572_, 1);
v_stop_4644_ = lean_ctor_get(v___x_4572_, 2);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4694_ == 0)
{
lean_object* v_unused_4695_; 
v_unused_4695_ = lean_ctor_get(v___x_4572_, 0);
lean_dec(v_unused_4695_);
v___x_4646_ = v___x_4572_;
v_isShared_4647_ = v_isSharedCheck_4694_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_stop_4644_);
lean_inc(v_start_4643_);
lean_dec(v___x_4572_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4694_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4648_ = lean_nat_sub(v_stop_4644_, v_start_4643_);
lean_dec(v_start_4643_);
lean_dec(v_stop_4644_);
v___x_4649_ = lean_nat_add(v___x_4648_, v___x_4573_);
lean_dec(v___x_4648_);
v___x_4650_ = lean_nat_add(v___x_4649_, v___x_4576_);
lean_dec(v___x_4649_);
v___x_4651_ = lean_nat_add(v___x_4650_, v___x_4577_);
lean_dec(v___x_4650_);
v___x_4652_ = lean_array_get_size(v_altVars_4567_);
v___x_4653_ = lean_nat_add(v___x_4651_, v___x_4652_);
lean_dec(v___x_4651_);
v___x_4654_ = lean_array_get_size(v_heqs_4582_);
lean_dec_ref(v_heqs_4582_);
lean_inc(v_a_4639_);
v___x_4655_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_4578_, v_a_4639_, v___x_4653_, v___x_4654_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4693_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4658_ = v___x_4655_;
v_isShared_4659_ = v_isSharedCheck_4693_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4655_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4693_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4660_; lean_object* v_env_4661_; uint8_t v___x_4662_; 
v___x_4660_ = lean_st_ref_get(v___y_4600_);
v_env_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc_ref(v_env_4661_);
lean_dec(v___x_4660_);
lean_inc(v___x_4579_);
v___x_4662_ = l_Lean_Environment_contains(v_env_4661_, v___x_4579_, v___x_4569_);
if (v___x_4662_ == 0)
{
lean_object* v___x_4664_; 
lean_del_object(v___x_4658_);
lean_inc(v___x_4579_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 2, v_a_4639_);
lean_ctor_set(v___x_4646_, 1, v___x_4580_);
lean_ctor_set(v___x_4646_, 0, v___x_4579_);
v___x_4664_ = v___x_4646_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v___x_4579_);
lean_ctor_set(v_reuseFailAlloc_4689_, 1, v___x_4580_);
lean_ctor_set(v_reuseFailAlloc_4689_, 2, v_a_4639_);
v___x_4664_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
lean_object* v___x_4666_; 
if (v_isShared_4614_ == 0)
{
lean_ctor_set_tag(v___x_4613_, 1);
lean_ctor_set(v___x_4613_, 1, v___x_4581_);
lean_ctor_set(v___x_4613_, 0, v___x_4579_);
v___x_4666_ = v___x_4613_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v___x_4579_);
lean_ctor_set(v_reuseFailAlloc_4688_, 1, v___x_4581_);
v___x_4666_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
lean_object* v___x_4667_; lean_object* v___x_4669_; 
v___x_4667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4664_);
lean_ctor_set(v___x_4667_, 1, v_a_4656_);
lean_ctor_set(v___x_4667_, 2, v___x_4666_);
if (v_isShared_4642_ == 0)
{
lean_ctor_set_tag(v___x_4641_, 2);
lean_ctor_set(v___x_4641_, 0, v___x_4667_);
v___x_4669_ = v___x_4641_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4667_);
v___x_4669_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
lean_object* v___x_4670_; 
v___x_4670_ = l_Lean_addDecl(v___x_4669_, v___x_4568_, v___y_4599_, v___y_4600_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4677_; 
v_isSharedCheck_4677_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4677_ == 0)
{
lean_object* v_unused_4678_; 
v_unused_4678_ = lean_ctor_get(v___x_4670_, 0);
lean_dec(v_unused_4678_);
v___x_4672_ = v___x_4670_;
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
else
{
lean_dec(v___x_4670_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
lean_ctor_set(v___x_4672_, 0, v_a_4619_);
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_a_4619_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
return v___x_4675_;
}
}
}
else
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
lean_dec(v_a_4619_);
v_a_4679_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4681_ = v___x_4670_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4670_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4691_; 
lean_dec(v_a_4656_);
lean_del_object(v___x_4646_);
lean_del_object(v___x_4641_);
lean_dec(v_a_4639_);
lean_del_object(v___x_4613_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
if (v_isShared_4659_ == 0)
{
lean_ctor_set(v___x_4658_, 0, v_a_4619_);
v___x_4691_ = v___x_4658_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4619_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
return v___x_4691_;
}
}
}
}
else
{
lean_del_object(v___x_4646_);
lean_del_object(v___x_4641_);
lean_dec(v_a_4639_);
lean_dec(v_a_4619_);
lean_del_object(v___x_4613_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
return v___x_4655_;
}
}
}
}
else
{
lean_dec(v_a_4619_);
lean_del_object(v___x_4613_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4572_);
return v___x_4638_;
}
}
else
{
lean_dec(v_a_4619_);
lean_del_object(v___x_4613_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4572_);
return v___x_4636_;
}
}
else
{
lean_dec_ref(v___x_4628_);
lean_dec(v_a_4619_);
lean_del_object(v___x_4613_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4572_);
return v___x_4632_;
}
}
else
{
lean_dec_ref(v___x_4628_);
lean_dec(v_a_4619_);
lean_del_object(v___x_4613_);
lean_dec(v_a_4595_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4572_);
return v___x_4630_;
}
}
else
{
lean_dec_ref(v___x_4615_);
lean_del_object(v___x_4613_);
lean_dec(v_a_4595_);
lean_dec(v_a_4590_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4575_);
lean_dec_ref(v___x_4574_);
lean_dec_ref(v___x_4572_);
lean_dec(v___x_4571_);
return v___x_4618_;
}
}
}
else
{
lean_object* v_a_4699_; lean_object* v___x_4701_; uint8_t v_isShared_4702_; uint8_t v_isSharedCheck_4706_; 
lean_dec(v_a_4595_);
lean_dec(v_a_4590_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4575_);
lean_dec_ref(v___x_4574_);
lean_dec_ref(v___x_4572_);
lean_dec(v___x_4571_);
lean_dec_ref(v___x_4566_);
v_a_4699_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4706_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4706_ == 0)
{
v___x_4701_ = v___x_4609_;
v_isShared_4702_ = v_isSharedCheck_4706_;
goto v_resetjp_4700_;
}
else
{
lean_inc(v_a_4699_);
lean_dec(v___x_4609_);
v___x_4701_ = lean_box(0);
v_isShared_4702_ = v_isSharedCheck_4706_;
goto v_resetjp_4700_;
}
v_resetjp_4700_:
{
lean_object* v___x_4704_; 
if (v_isShared_4702_ == 0)
{
v___x_4704_ = v___x_4701_;
goto v_reusejp_4703_;
}
else
{
lean_object* v_reuseFailAlloc_4705_; 
v_reuseFailAlloc_4705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4705_, 0, v_a_4699_);
v___x_4704_ = v_reuseFailAlloc_4705_;
goto v_reusejp_4703_;
}
v_reusejp_4703_:
{
return v___x_4704_;
}
}
}
}
}
else
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4736_; 
lean_dec(v_a_4590_);
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4575_);
lean_dec_ref(v___x_4574_);
lean_dec_ref(v___x_4572_);
lean_dec(v___x_4571_);
lean_dec_ref(v___x_4566_);
lean_dec(v___x_4565_);
lean_dec_ref(v___x_4564_);
lean_dec_ref(v_a_4562_);
v_a_4729_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4731_ = v___x_4594_;
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v___x_4594_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4734_; 
if (v_isShared_4732_ == 0)
{
v___x_4734_ = v___x_4731_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4735_; 
v_reuseFailAlloc_4735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4735_, 0, v_a_4729_);
v___x_4734_ = v_reuseFailAlloc_4735_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
return v___x_4734_;
}
}
}
}
else
{
lean_dec_ref(v_heqs_4582_);
lean_dec(v___x_4581_);
lean_dec(v___x_4580_);
lean_dec(v___x_4579_);
lean_dec(v_matchDeclName_4578_);
lean_dec_ref(v___x_4575_);
lean_dec_ref(v___x_4574_);
lean_dec_ref(v___x_4572_);
lean_dec(v___x_4571_);
lean_dec_ref(v___x_4566_);
lean_dec(v___x_4565_);
lean_dec_ref(v___x_4564_);
lean_dec(v___x_4563_);
lean_dec_ref(v_a_4562_);
return v___x_4589_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___y_4737_ = _args[0];
lean_object* v_args_4738_ = _args[1];
lean_object* v___x_4739_ = _args[2];
lean_object* v_overlaps_4740_ = _args[3];
lean_object* v_a_4741_ = _args[4];
lean_object* v_fst_4742_ = _args[5];
lean_object* v_a_4743_ = _args[6];
lean_object* v___x_4744_ = _args[7];
lean_object* v___x_4745_ = _args[8];
lean_object* v___x_4746_ = _args[9];
lean_object* v___x_4747_ = _args[10];
lean_object* v_altVars_4748_ = _args[11];
lean_object* v___x_4749_ = _args[12];
lean_object* v___x_4750_ = _args[13];
lean_object* v_a_4751_ = _args[14];
lean_object* v___x_4752_ = _args[15];
lean_object* v___x_4753_ = _args[16];
lean_object* v___x_4754_ = _args[17];
lean_object* v___x_4755_ = _args[18];
lean_object* v___x_4756_ = _args[19];
lean_object* v___x_4757_ = _args[20];
lean_object* v___x_4758_ = _args[21];
lean_object* v_matchDeclName_4759_ = _args[22];
lean_object* v___x_4760_ = _args[23];
lean_object* v___x_4761_ = _args[24];
lean_object* v___x_4762_ = _args[25];
lean_object* v_heqs_4763_ = _args[26];
lean_object* v___y_4764_ = _args[27];
lean_object* v___y_4765_ = _args[28];
lean_object* v___y_4766_ = _args[29];
lean_object* v___y_4767_ = _args[30];
lean_object* v___y_4768_ = _args[31];
_start:
{
uint8_t v___x_21307__boxed_4769_; uint8_t v___x_21308__boxed_4770_; lean_object* v_res_4771_; 
v___x_21307__boxed_4769_ = lean_unbox(v___x_4749_);
v___x_21308__boxed_4770_ = lean_unbox(v___x_4750_);
v_res_4771_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(v___y_4737_, v_args_4738_, v___x_4739_, v_overlaps_4740_, v_a_4741_, v_fst_4742_, v_a_4743_, v___x_4744_, v___x_4745_, v___x_4746_, v___x_4747_, v_altVars_4748_, v___x_21307__boxed_4769_, v___x_21308__boxed_4770_, v_a_4751_, v___x_4752_, v___x_4753_, v___x_4754_, v___x_4755_, v___x_4756_, v___x_4757_, v___x_4758_, v_matchDeclName_4759_, v___x_4760_, v___x_4761_, v___x_4762_, v_heqs_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
lean_dec(v___y_4765_);
lean_dec_ref(v___y_4764_);
lean_dec(v___x_4758_);
lean_dec(v___x_4757_);
lean_dec(v___x_4754_);
lean_dec_ref(v_a_4751_);
lean_dec_ref(v_altVars_4748_);
lean_dec(v_fst_4742_);
lean_dec(v_a_4741_);
lean_dec_ref(v_overlaps_4740_);
lean_dec_ref(v_args_4738_);
return v_res_4771_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4774_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1));
v___x_4775_ = lean_unsigned_to_nat(8u);
v___x_4776_ = lean_unsigned_to_nat(295u);
v___x_4777_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0));
v___x_4778_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0));
v___x_4779_ = l_mkPanicMessageWithDecl(v___x_4778_, v___x_4777_, v___x_4776_, v___x_4775_, v___x_4774_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(lean_object* v___f_4780_, lean_object* v___x_4781_, lean_object* v___y_4782_, lean_object* v___x_4783_, lean_object* v_overlaps_4784_, lean_object* v_a_4785_, lean_object* v_fst_4786_, lean_object* v___x_4787_, lean_object* v___x_4788_, uint8_t v___x_4789_, lean_object* v_a_4790_, lean_object* v___x_4791_, lean_object* v___x_4792_, lean_object* v___x_4793_, lean_object* v___x_4794_, lean_object* v___x_4795_, lean_object* v___x_4796_, lean_object* v_matchDeclName_4797_, lean_object* v___x_4798_, lean_object* v___x_4799_, lean_object* v___x_4800_, lean_object* v_altVars_4801_, lean_object* v_args_4802_, lean_object* v___mask_4803_, lean_object* v_altResultType_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_){
_start:
{
uint8_t v___x_4810_; lean_object* v___x_4811_; 
v___x_4810_ = 0;
v___x_4811_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_altResultType_4804_, v___f_4780_, v___x_4810_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_);
if (lean_obj_tag(v___x_4811_) == 0)
{
lean_object* v_a_4812_; lean_object* v_start_4813_; lean_object* v_stop_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; uint8_t v___x_4817_; 
v_a_4812_ = lean_ctor_get(v___x_4811_, 0);
lean_inc(v_a_4812_);
lean_dec_ref_known(v___x_4811_, 1);
v_start_4813_ = lean_ctor_get(v___x_4781_, 1);
v_stop_4814_ = lean_ctor_get(v___x_4781_, 2);
v___x_4815_ = lean_array_get_size(v_a_4812_);
v___x_4816_ = lean_nat_sub(v_stop_4814_, v_start_4813_);
v___x_4817_ = lean_nat_dec_eq(v___x_4815_, v___x_4816_);
if (v___x_4817_ == 0)
{
lean_object* v___x_4818_; lean_object* v___x_4819_; 
lean_dec(v___x_4816_);
lean_dec(v_a_4812_);
lean_dec_ref(v_args_4802_);
lean_dec_ref(v_altVars_4801_);
lean_dec(v___x_4800_);
lean_dec(v___x_4799_);
lean_dec(v___x_4798_);
lean_dec(v_matchDeclName_4797_);
lean_dec(v___x_4796_);
lean_dec_ref(v___x_4795_);
lean_dec_ref(v___x_4794_);
lean_dec(v___x_4793_);
lean_dec_ref(v___x_4792_);
lean_dec(v___x_4791_);
lean_dec_ref(v_a_4790_);
lean_dec(v___x_4788_);
lean_dec_ref(v___x_4787_);
lean_dec(v_fst_4786_);
lean_dec(v_a_4785_);
lean_dec_ref(v_overlaps_4784_);
lean_dec(v___x_4783_);
lean_dec_ref(v___y_4782_);
lean_dec_ref(v___x_4781_);
v___x_4818_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2);
v___x_4819_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(v___x_4818_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_);
return v___x_4819_;
}
else
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___f_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4820_ = lean_box(v___x_4810_);
v___x_4821_ = lean_box(v___x_4789_);
lean_inc_ref(v___x_4781_);
lean_inc(v___x_4788_);
lean_inc(v_a_4812_);
v___f_4822_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed), 32, 26);
lean_closure_set(v___f_4822_, 0, v___y_4782_);
lean_closure_set(v___f_4822_, 1, v_args_4802_);
lean_closure_set(v___f_4822_, 2, v___x_4783_);
lean_closure_set(v___f_4822_, 3, v_overlaps_4784_);
lean_closure_set(v___f_4822_, 4, v_a_4785_);
lean_closure_set(v___f_4822_, 5, v_fst_4786_);
lean_closure_set(v___f_4822_, 6, v_a_4812_);
lean_closure_set(v___f_4822_, 7, v___x_4815_);
lean_closure_set(v___f_4822_, 8, v___x_4787_);
lean_closure_set(v___f_4822_, 9, v___x_4788_);
lean_closure_set(v___f_4822_, 10, v___x_4781_);
lean_closure_set(v___f_4822_, 11, v_altVars_4801_);
lean_closure_set(v___f_4822_, 12, v___x_4820_);
lean_closure_set(v___f_4822_, 13, v___x_4821_);
lean_closure_set(v___f_4822_, 14, v_a_4790_);
lean_closure_set(v___f_4822_, 15, v___x_4791_);
lean_closure_set(v___f_4822_, 16, v___x_4792_);
lean_closure_set(v___f_4822_, 17, v___x_4793_);
lean_closure_set(v___f_4822_, 18, v___x_4794_);
lean_closure_set(v___f_4822_, 19, v___x_4795_);
lean_closure_set(v___f_4822_, 20, v___x_4816_);
lean_closure_set(v___f_4822_, 21, v___x_4796_);
lean_closure_set(v___f_4822_, 22, v_matchDeclName_4797_);
lean_closure_set(v___f_4822_, 23, v___x_4798_);
lean_closure_set(v___f_4822_, 24, v___x_4799_);
lean_closure_set(v___f_4822_, 25, v___x_4800_);
v___x_4823_ = lean_mk_empty_array_with_capacity(v___x_4788_);
v___x_4824_ = l_Array_toSubarray___redArg(v_a_4812_, v___x_4788_, v___x_4815_);
v___x_4825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4825_, 0, v___x_4823_);
lean_ctor_set(v___x_4825_, 1, v___x_4824_);
v___x_4826_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg(v___x_4781_, v___x_4825_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_);
if (lean_obj_tag(v___x_4826_) == 0)
{
lean_object* v_a_4827_; lean_object* v_fst_4828_; uint8_t v___x_4829_; lean_object* v___x_4830_; 
v_a_4827_ = lean_ctor_get(v___x_4826_, 0);
lean_inc(v_a_4827_);
lean_dec_ref_known(v___x_4826_, 1);
v_fst_4828_ = lean_ctor_get(v_a_4827_, 0);
lean_inc(v_fst_4828_);
lean_dec(v_a_4827_);
v___x_4829_ = 0;
v___x_4830_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(v_fst_4828_, v___f_4822_, v___x_4829_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_);
return v___x_4830_;
}
else
{
lean_object* v_a_4831_; lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_4838_; 
lean_dec_ref(v___f_4822_);
v_a_4831_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4838_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4838_ == 0)
{
v___x_4833_ = v___x_4826_;
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
else
{
lean_inc(v_a_4831_);
lean_dec(v___x_4826_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4836_; 
if (v_isShared_4834_ == 0)
{
v___x_4836_ = v___x_4833_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_a_4831_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
}
}
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
lean_dec_ref(v_args_4802_);
lean_dec_ref(v_altVars_4801_);
lean_dec(v___x_4800_);
lean_dec(v___x_4799_);
lean_dec(v___x_4798_);
lean_dec(v_matchDeclName_4797_);
lean_dec(v___x_4796_);
lean_dec_ref(v___x_4795_);
lean_dec_ref(v___x_4794_);
lean_dec(v___x_4793_);
lean_dec_ref(v___x_4792_);
lean_dec(v___x_4791_);
lean_dec_ref(v_a_4790_);
lean_dec(v___x_4788_);
lean_dec_ref(v___x_4787_);
lean_dec(v_fst_4786_);
lean_dec(v_a_4785_);
lean_dec_ref(v_overlaps_4784_);
lean_dec(v___x_4783_);
lean_dec_ref(v___y_4782_);
lean_dec_ref(v___x_4781_);
v_a_4839_ = lean_ctor_get(v___x_4811_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4811_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v___x_4811_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_a_4839_);
lean_dec(v___x_4811_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___f_4847_ = _args[0];
lean_object* v___x_4848_ = _args[1];
lean_object* v___y_4849_ = _args[2];
lean_object* v___x_4850_ = _args[3];
lean_object* v_overlaps_4851_ = _args[4];
lean_object* v_a_4852_ = _args[5];
lean_object* v_fst_4853_ = _args[6];
lean_object* v___x_4854_ = _args[7];
lean_object* v___x_4855_ = _args[8];
lean_object* v___x_4856_ = _args[9];
lean_object* v_a_4857_ = _args[10];
lean_object* v___x_4858_ = _args[11];
lean_object* v___x_4859_ = _args[12];
lean_object* v___x_4860_ = _args[13];
lean_object* v___x_4861_ = _args[14];
lean_object* v___x_4862_ = _args[15];
lean_object* v___x_4863_ = _args[16];
lean_object* v_matchDeclName_4864_ = _args[17];
lean_object* v___x_4865_ = _args[18];
lean_object* v___x_4866_ = _args[19];
lean_object* v___x_4867_ = _args[20];
lean_object* v_altVars_4868_ = _args[21];
lean_object* v_args_4869_ = _args[22];
lean_object* v___mask_4870_ = _args[23];
lean_object* v_altResultType_4871_ = _args[24];
lean_object* v___y_4872_ = _args[25];
lean_object* v___y_4873_ = _args[26];
lean_object* v___y_4874_ = _args[27];
lean_object* v___y_4875_ = _args[28];
lean_object* v___y_4876_ = _args[29];
_start:
{
uint8_t v___x_21694__boxed_4877_; lean_object* v_res_4878_; 
v___x_21694__boxed_4877_ = lean_unbox(v___x_4856_);
v_res_4878_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(v___f_4847_, v___x_4848_, v___y_4849_, v___x_4850_, v_overlaps_4851_, v_a_4852_, v_fst_4853_, v___x_4854_, v___x_4855_, v___x_21694__boxed_4877_, v_a_4857_, v___x_4858_, v___x_4859_, v___x_4860_, v___x_4861_, v___x_4862_, v___x_4863_, v_matchDeclName_4864_, v___x_4865_, v___x_4866_, v___x_4867_, v_altVars_4868_, v_args_4869_, v___mask_4870_, v_altResultType_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_);
lean_dec(v___y_4875_);
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
lean_dec_ref(v___mask_4870_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(lean_object* v_upperBound_4880_, lean_object* v_val_4881_, lean_object* v_matchDeclName_4882_, lean_object* v___x_4883_, lean_object* v___x_4884_, lean_object* v_a_4885_, lean_object* v___x_4886_, lean_object* v___x_4887_, lean_object* v___x_4888_, lean_object* v___x_4889_, lean_object* v___x_4890_, lean_object* v___x_4891_, lean_object* v_a_4892_, lean_object* v_b_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
uint8_t v___x_4899_; 
v___x_4899_ = lean_nat_dec_lt(v_a_4892_, v_upperBound_4880_);
if (v___x_4899_ == 0)
{
lean_object* v___x_4900_; 
lean_dec(v_a_4892_);
lean_dec(v___x_4891_);
lean_dec(v___x_4890_);
lean_dec_ref(v___x_4889_);
lean_dec_ref(v___x_4888_);
lean_dec_ref(v___x_4887_);
lean_dec(v___x_4886_);
lean_dec_ref(v_a_4885_);
lean_dec(v___x_4884_);
lean_dec_ref(v___x_4883_);
lean_dec(v_matchDeclName_4882_);
lean_dec_ref(v_val_4881_);
v___x_4900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4900_, 0, v_b_4893_);
return v___x_4900_;
}
else
{
lean_object* v_snd_4901_; lean_object* v_fst_4902_; lean_object* v___x_4904_; uint8_t v_isShared_4905_; uint8_t v_isSharedCheck_4966_; 
v_snd_4901_ = lean_ctor_get(v_b_4893_, 1);
v_fst_4902_ = lean_ctor_get(v_b_4893_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v_b_4893_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4904_ = v_b_4893_;
v_isShared_4905_ = v_isSharedCheck_4966_;
goto v_resetjp_4903_;
}
else
{
lean_inc(v_snd_4901_);
lean_inc(v_fst_4902_);
lean_dec(v_b_4893_);
v___x_4904_ = lean_box(0);
v_isShared_4905_ = v_isSharedCheck_4966_;
goto v_resetjp_4903_;
}
v_resetjp_4903_:
{
lean_object* v_fst_4906_; lean_object* v_snd_4907_; lean_object* v___x_4909_; uint8_t v_isShared_4910_; uint8_t v_isSharedCheck_4965_; 
v_fst_4906_ = lean_ctor_get(v_snd_4901_, 0);
v_snd_4907_ = lean_ctor_get(v_snd_4901_, 1);
v_isSharedCheck_4965_ = !lean_is_exclusive(v_snd_4901_);
if (v_isSharedCheck_4965_ == 0)
{
v___x_4909_ = v_snd_4901_;
v_isShared_4910_ = v_isSharedCheck_4965_;
goto v_resetjp_4908_;
}
else
{
lean_inc(v_snd_4907_);
lean_inc(v_fst_4906_);
lean_dec(v_snd_4901_);
v___x_4909_ = lean_box(0);
v_isShared_4910_ = v_isSharedCheck_4965_;
goto v_resetjp_4908_;
}
v_resetjp_4908_:
{
lean_object* v_altInfos_4911_; lean_object* v_overlaps_4912_; lean_object* v_start_4913_; lean_object* v_stop_4914_; lean_object* v___f_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___y_4927_; lean_object* v___x_4960_; uint8_t v___x_4961_; 
v_altInfos_4911_ = lean_ctor_get(v_val_4881_, 2);
v_overlaps_4912_ = lean_ctor_get(v_val_4881_, 5);
v_start_4913_ = lean_ctor_get(v___x_4889_, 1);
v_stop_4914_ = lean_ctor_get(v___x_4889_, 2);
v___f_4915_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0));
v___x_4916_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_4917_ = lean_unsigned_to_nat(0u);
v___x_4918_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0));
v___x_4919_ = lean_unsigned_to_nat(1u);
v___x_4920_ = lean_box(0);
v___x_4921_ = lean_array_get_borrowed(v___x_4916_, v_altInfos_4911_, v_a_4892_);
v___x_4922_ = l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_inc(v_matchDeclName_4882_);
v___x_4923_ = l_Lean_Name_str___override(v_matchDeclName_4882_, v___x_4922_);
lean_inc(v_snd_4907_);
v___x_4924_ = lean_name_append_index_after(v___x_4923_, v_snd_4907_);
lean_inc(v___x_4924_);
v___x_4925_ = lean_array_push(v_fst_4902_, v___x_4924_);
v___x_4960_ = lean_nat_sub(v_stop_4914_, v_start_4913_);
v___x_4961_ = lean_nat_dec_lt(v_a_4892_, v___x_4960_);
lean_dec(v___x_4960_);
if (v___x_4961_ == 0)
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4962_ = l_Lean_instInhabitedExpr;
v___x_4963_ = l_outOfBounds___redArg(v___x_4962_);
v___y_4927_ = v___x_4963_;
goto v___jp_4926_;
}
else
{
lean_object* v___x_4964_; 
v___x_4964_ = l_Subarray_get___redArg(v___x_4889_, v_a_4892_);
v___y_4927_ = v___x_4964_;
goto v___jp_4926_;
}
v___jp_4926_:
{
lean_object* v___x_4928_; lean_object* v___f_4929_; lean_object* v___x_4930_; 
v___x_4928_ = lean_box(v___x_4899_);
lean_inc(v___x_4891_);
lean_inc(v_matchDeclName_4882_);
lean_inc(v___x_4890_);
lean_inc_ref(v___x_4889_);
lean_inc_ref(v___x_4888_);
lean_inc_ref(v___x_4887_);
lean_inc(v___x_4886_);
lean_inc_ref(v_a_4885_);
lean_inc(v_fst_4906_);
lean_inc(v_a_4892_);
lean_inc_ref(v_overlaps_4912_);
lean_inc(v___x_4884_);
lean_inc_ref(v___y_4927_);
lean_inc_ref(v___x_4883_);
v___f_4929_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed), 30, 21);
lean_closure_set(v___f_4929_, 0, v___f_4915_);
lean_closure_set(v___f_4929_, 1, v___x_4883_);
lean_closure_set(v___f_4929_, 2, v___y_4927_);
lean_closure_set(v___f_4929_, 3, v___x_4884_);
lean_closure_set(v___f_4929_, 4, v_overlaps_4912_);
lean_closure_set(v___f_4929_, 5, v_a_4892_);
lean_closure_set(v___f_4929_, 6, v_fst_4906_);
lean_closure_set(v___f_4929_, 7, v___x_4918_);
lean_closure_set(v___f_4929_, 8, v___x_4917_);
lean_closure_set(v___f_4929_, 9, v___x_4928_);
lean_closure_set(v___f_4929_, 10, v_a_4885_);
lean_closure_set(v___f_4929_, 11, v___x_4886_);
lean_closure_set(v___f_4929_, 12, v___x_4887_);
lean_closure_set(v___f_4929_, 13, v___x_4919_);
lean_closure_set(v___f_4929_, 14, v___x_4888_);
lean_closure_set(v___f_4929_, 15, v___x_4889_);
lean_closure_set(v___f_4929_, 16, v___x_4890_);
lean_closure_set(v___f_4929_, 17, v_matchDeclName_4882_);
lean_closure_set(v___f_4929_, 18, v___x_4924_);
lean_closure_set(v___f_4929_, 19, v___x_4891_);
lean_closure_set(v___f_4929_, 20, v___x_4920_);
lean_inc(v___y_4897_);
lean_inc_ref(v___y_4896_);
lean_inc(v___y_4895_);
lean_inc_ref(v___y_4894_);
v___x_4930_ = lean_infer_type(v___y_4927_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
if (lean_obj_tag(v___x_4930_) == 0)
{
lean_object* v_a_4931_; lean_object* v___x_4932_; 
v_a_4931_ = lean_ctor_get(v___x_4930_, 0);
lean_inc(v_a_4931_);
lean_dec_ref_known(v___x_4930_, 1);
lean_inc(v___x_4921_);
v___x_4932_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_a_4931_, v___x_4921_, v___f_4929_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4937_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4934_ = lean_array_push(v_fst_4906_, v_a_4933_);
v___x_4935_ = lean_nat_add(v_snd_4907_, v___x_4919_);
lean_dec(v_snd_4907_);
if (v_isShared_4910_ == 0)
{
lean_ctor_set(v___x_4909_, 1, v___x_4935_);
lean_ctor_set(v___x_4909_, 0, v___x_4934_);
v___x_4937_ = v___x_4909_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_4943_, 1, v___x_4935_);
v___x_4937_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
lean_object* v___x_4939_; 
if (v_isShared_4905_ == 0)
{
lean_ctor_set(v___x_4904_, 1, v___x_4937_);
lean_ctor_set(v___x_4904_, 0, v___x_4925_);
v___x_4939_ = v___x_4904_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v___x_4925_);
lean_ctor_set(v_reuseFailAlloc_4942_, 1, v___x_4937_);
v___x_4939_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
lean_object* v___x_4940_; 
v___x_4940_ = lean_nat_add(v_a_4892_, v___x_4919_);
lean_dec(v_a_4892_);
v_a_4892_ = v___x_4940_;
v_b_4893_ = v___x_4939_;
goto _start;
}
}
}
else
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
lean_dec_ref(v___x_4925_);
lean_del_object(v___x_4909_);
lean_dec(v_snd_4907_);
lean_dec(v_fst_4906_);
lean_del_object(v___x_4904_);
lean_dec(v_a_4892_);
lean_dec(v___x_4891_);
lean_dec(v___x_4890_);
lean_dec_ref(v___x_4889_);
lean_dec_ref(v___x_4888_);
lean_dec_ref(v___x_4887_);
lean_dec(v___x_4886_);
lean_dec_ref(v_a_4885_);
lean_dec(v___x_4884_);
lean_dec_ref(v___x_4883_);
lean_dec(v_matchDeclName_4882_);
lean_dec_ref(v_val_4881_);
v_a_4944_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4932_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4932_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4959_; 
lean_dec_ref(v___f_4929_);
lean_dec_ref(v___x_4925_);
lean_del_object(v___x_4909_);
lean_dec(v_snd_4907_);
lean_dec(v_fst_4906_);
lean_del_object(v___x_4904_);
lean_dec(v_a_4892_);
lean_dec(v___x_4891_);
lean_dec(v___x_4890_);
lean_dec_ref(v___x_4889_);
lean_dec_ref(v___x_4888_);
lean_dec_ref(v___x_4887_);
lean_dec(v___x_4886_);
lean_dec_ref(v_a_4885_);
lean_dec(v___x_4884_);
lean_dec_ref(v___x_4883_);
lean_dec(v_matchDeclName_4882_);
lean_dec_ref(v_val_4881_);
v_a_4952_ = lean_ctor_get(v___x_4930_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4954_ = v___x_4930_;
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4930_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4955_ == 0)
{
v___x_4957_ = v___x_4954_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_a_4952_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_4967_ = _args[0];
lean_object* v_val_4968_ = _args[1];
lean_object* v_matchDeclName_4969_ = _args[2];
lean_object* v___x_4970_ = _args[3];
lean_object* v___x_4971_ = _args[4];
lean_object* v_a_4972_ = _args[5];
lean_object* v___x_4973_ = _args[6];
lean_object* v___x_4974_ = _args[7];
lean_object* v___x_4975_ = _args[8];
lean_object* v___x_4976_ = _args[9];
lean_object* v___x_4977_ = _args[10];
lean_object* v___x_4978_ = _args[11];
lean_object* v_a_4979_ = _args[12];
lean_object* v_b_4980_ = _args[13];
lean_object* v___y_4981_ = _args[14];
lean_object* v___y_4982_ = _args[15];
lean_object* v___y_4983_ = _args[16];
lean_object* v___y_4984_ = _args[17];
lean_object* v___y_4985_ = _args[18];
_start:
{
lean_object* v_res_4986_; 
v_res_4986_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v_upperBound_4967_, v_val_4968_, v_matchDeclName_4969_, v___x_4970_, v___x_4971_, v_a_4972_, v___x_4973_, v___x_4974_, v___x_4975_, v___x_4976_, v___x_4977_, v___x_4978_, v_a_4979_, v_b_4980_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_);
lean_dec(v___y_4984_);
lean_dec_ref(v___y_4983_);
lean_dec(v___y_4982_);
lean_dec_ref(v___y_4981_);
lean_dec(v_upperBound_4967_);
return v_res_4986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(lean_object* v_val_4993_, lean_object* v___x_4994_, lean_object* v_matchDeclName_4995_, lean_object* v___x_4996_, lean_object* v_a_4997_, lean_object* v___x_4998_, lean_object* v___x_4999_, lean_object* v_xs_5000_, lean_object* v___matchResultType_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_){
_start:
{
lean_object* v_numParams_5007_; lean_object* v_numDiscrs_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v_lower_5014_; lean_object* v_upper_5015_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; uint8_t v___x_5046_; 
v_numParams_5007_ = lean_ctor_get(v_val_4993_, 0);
v_numDiscrs_5008_ = lean_ctor_get(v_val_4993_, 1);
v___x_5009_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_5007_);
lean_inc_ref(v_xs_5000_);
v___x_5010_ = l_Array_toSubarray___redArg(v_xs_5000_, v___x_5009_, v_numParams_5007_);
v___x_5011_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_4993_);
v___x_5012_ = lean_array_get(v___x_4994_, v_xs_5000_, v___x_5011_);
lean_dec(v___x_5011_);
v___x_5043_ = lean_array_get_size(v_xs_5000_);
v___x_5044_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_4993_);
v___x_5045_ = lean_nat_sub(v___x_5043_, v___x_5044_);
lean_dec(v___x_5044_);
v___x_5046_ = lean_nat_dec_le(v___x_5045_, v___x_5009_);
if (v___x_5046_ == 0)
{
v_lower_5014_ = v___x_5045_;
v_upper_5015_ = v___x_5043_;
goto v___jp_5013_;
}
else
{
lean_dec(v___x_5045_);
v_lower_5014_ = v___x_5009_;
v_upper_5015_ = v___x_5043_;
goto v___jp_5013_;
}
v___jp_5013_:
{
lean_object* v___x_5016_; lean_object* v_start_5017_; lean_object* v_stop_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; 
lean_inc_ref(v_xs_5000_);
v___x_5016_ = l_Array_toSubarray___redArg(v_xs_5000_, v_lower_5014_, v_upper_5015_);
v_start_5017_ = lean_ctor_get(v___x_5016_, 1);
v_stop_5018_ = lean_ctor_get(v___x_5016_, 2);
v___x_5019_ = lean_unsigned_to_nat(1u);
v___x_5020_ = lean_nat_add(v_numParams_5007_, v___x_5019_);
v___x_5021_ = lean_nat_add(v___x_5020_, v_numDiscrs_5008_);
v___x_5022_ = lean_nat_sub(v_stop_5018_, v_start_5017_);
v___x_5023_ = l_Array_toSubarray___redArg(v_xs_5000_, v___x_5020_, v___x_5021_);
v___x_5024_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1));
lean_inc(v___x_5022_);
v___x_5025_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v___x_5022_, v_val_4993_, v_matchDeclName_4995_, v___x_5023_, v___x_4996_, v_a_4997_, v___x_4998_, v___x_5010_, v___x_5012_, v___x_5016_, v___x_5022_, v___x_4999_, v___x_5009_, v___x_5024_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_);
lean_dec(v___x_5022_);
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5033_; 
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5033_ == 0)
{
lean_object* v_unused_5034_; 
v_unused_5034_ = lean_ctor_get(v___x_5025_, 0);
lean_dec(v_unused_5034_);
v___x_5027_ = v___x_5025_;
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
else
{
lean_dec(v___x_5025_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5029_; lean_object* v___x_5031_; 
v___x_5029_ = lean_box(0);
if (v_isShared_5028_ == 0)
{
lean_ctor_set(v___x_5027_, 0, v___x_5029_);
v___x_5031_ = v___x_5027_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v___x_5029_);
v___x_5031_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
return v___x_5031_;
}
}
}
else
{
lean_object* v_a_5035_; lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5042_; 
v_a_5035_ = lean_ctor_get(v___x_5025_, 0);
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5042_ == 0)
{
v___x_5037_ = v___x_5025_;
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
else
{
lean_inc(v_a_5035_);
lean_dec(v___x_5025_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
v_resetjp_5036_:
{
lean_object* v___x_5040_; 
if (v_isShared_5038_ == 0)
{
v___x_5040_ = v___x_5037_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v_a_5035_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed(lean_object* v_val_5047_, lean_object* v___x_5048_, lean_object* v_matchDeclName_5049_, lean_object* v___x_5050_, lean_object* v_a_5051_, lean_object* v___x_5052_, lean_object* v___x_5053_, lean_object* v_xs_5054_, lean_object* v___matchResultType_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_){
_start:
{
lean_object* v_res_5061_; 
v_res_5061_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(v_val_5047_, v___x_5048_, v_matchDeclName_5049_, v___x_5050_, v_a_5051_, v___x_5052_, v___x_5053_, v_xs_5054_, v___matchResultType_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_dec_ref(v___matchResultType_5055_);
lean_dec_ref(v___x_5048_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(lean_object* v_matchDeclName_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_){
_start:
{
uint8_t v_trackZetaDelta_5068_; lean_object* v_zetaDeltaSet_5069_; lean_object* v_lctx_5070_; lean_object* v_localInstances_5071_; lean_object* v_defEqCtx_x3f_5072_; lean_object* v_synthPendingDepth_5073_; lean_object* v_customCanUnfoldPredicate_x3f_5074_; uint8_t v_univApprox_5075_; uint8_t v_inTypeClassResolution_5076_; uint8_t v_cacheInferType_5077_; lean_object* v_rewriteSet_x3f_5078_; uint8_t v_rewriteFuelScope_5079_; lean_object* v___x_5080_; lean_object* v___x_5082_; uint8_t v_isShared_5083_; uint8_t v_isSharedCheck_5123_; 
v_trackZetaDelta_5068_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*8);
v_zetaDeltaSet_5069_ = lean_ctor_get(v_a_5063_, 1);
lean_inc(v_zetaDeltaSet_5069_);
v_lctx_5070_ = lean_ctor_get(v_a_5063_, 2);
lean_inc_ref(v_lctx_5070_);
v_localInstances_5071_ = lean_ctor_get(v_a_5063_, 3);
lean_inc_ref(v_localInstances_5071_);
v_defEqCtx_x3f_5072_ = lean_ctor_get(v_a_5063_, 4);
lean_inc(v_defEqCtx_x3f_5072_);
v_synthPendingDepth_5073_ = lean_ctor_get(v_a_5063_, 5);
lean_inc(v_synthPendingDepth_5073_);
v_customCanUnfoldPredicate_x3f_5074_ = lean_ctor_get(v_a_5063_, 6);
lean_inc(v_customCanUnfoldPredicate_x3f_5074_);
v_univApprox_5075_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_5076_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*8 + 2);
v_cacheInferType_5077_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_5078_ = lean_ctor_get(v_a_5063_, 7);
lean_inc(v_rewriteSet_x3f_5078_);
v_rewriteFuelScope_5079_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*8 + 4);
v___x_5080_ = l_Lean_Meta_Context_config(v_a_5063_);
v_isSharedCheck_5123_ = !lean_is_exclusive(v_a_5063_);
if (v_isSharedCheck_5123_ == 0)
{
lean_object* v_unused_5124_; lean_object* v_unused_5125_; lean_object* v_unused_5126_; lean_object* v_unused_5127_; lean_object* v_unused_5128_; lean_object* v_unused_5129_; lean_object* v_unused_5130_; lean_object* v_unused_5131_; 
v_unused_5124_ = lean_ctor_get(v_a_5063_, 7);
lean_dec(v_unused_5124_);
v_unused_5125_ = lean_ctor_get(v_a_5063_, 6);
lean_dec(v_unused_5125_);
v_unused_5126_ = lean_ctor_get(v_a_5063_, 5);
lean_dec(v_unused_5126_);
v_unused_5127_ = lean_ctor_get(v_a_5063_, 4);
lean_dec(v_unused_5127_);
v_unused_5128_ = lean_ctor_get(v_a_5063_, 3);
lean_dec(v_unused_5128_);
v_unused_5129_ = lean_ctor_get(v_a_5063_, 2);
lean_dec(v_unused_5129_);
v_unused_5130_ = lean_ctor_get(v_a_5063_, 1);
lean_dec(v_unused_5130_);
v_unused_5131_ = lean_ctor_get(v_a_5063_, 0);
lean_dec(v_unused_5131_);
v___x_5082_ = v_a_5063_;
v_isShared_5083_ = v_isSharedCheck_5123_;
goto v_resetjp_5081_;
}
else
{
lean_dec(v_a_5063_);
v___x_5082_ = lean_box(0);
v_isShared_5083_ = v_isSharedCheck_5123_;
goto v_resetjp_5081_;
}
v_resetjp_5081_:
{
lean_object* v___x_5084_; uint64_t v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5089_; 
v___x_5084_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(v___x_5080_);
v___x_5085_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5084_);
v___x_5086_ = l_Lean_instInhabitedExpr;
v___x_5087_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5087_, 0, v___x_5084_);
lean_ctor_set_uint64(v___x_5087_, sizeof(void*)*1, v___x_5085_);
lean_inc(v_rewriteSet_x3f_5078_);
lean_inc(v_customCanUnfoldPredicate_x3f_5074_);
lean_inc(v_synthPendingDepth_5073_);
lean_inc(v_defEqCtx_x3f_5072_);
lean_inc_ref(v_localInstances_5071_);
lean_inc_ref(v_lctx_5070_);
lean_inc(v_zetaDeltaSet_5069_);
if (v_isShared_5083_ == 0)
{
lean_ctor_set(v___x_5082_, 0, v___x_5087_);
v___x_5089_ = v___x_5082_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v___x_5087_);
lean_ctor_set(v_reuseFailAlloc_5122_, 1, v_zetaDeltaSet_5069_);
lean_ctor_set(v_reuseFailAlloc_5122_, 2, v_lctx_5070_);
lean_ctor_set(v_reuseFailAlloc_5122_, 3, v_localInstances_5071_);
lean_ctor_set(v_reuseFailAlloc_5122_, 4, v_defEqCtx_x3f_5072_);
lean_ctor_set(v_reuseFailAlloc_5122_, 5, v_synthPendingDepth_5073_);
lean_ctor_set(v_reuseFailAlloc_5122_, 6, v_customCanUnfoldPredicate_x3f_5074_);
lean_ctor_set(v_reuseFailAlloc_5122_, 7, v_rewriteSet_x3f_5078_);
lean_ctor_set_uint8(v_reuseFailAlloc_5122_, sizeof(void*)*8, v_trackZetaDelta_5068_);
lean_ctor_set_uint8(v_reuseFailAlloc_5122_, sizeof(void*)*8 + 1, v_univApprox_5075_);
lean_ctor_set_uint8(v_reuseFailAlloc_5122_, sizeof(void*)*8 + 2, v_inTypeClassResolution_5076_);
lean_ctor_set_uint8(v_reuseFailAlloc_5122_, sizeof(void*)*8 + 3, v_cacheInferType_5077_);
lean_ctor_set_uint8(v_reuseFailAlloc_5122_, sizeof(void*)*8 + 4, v_rewriteFuelScope_5079_);
v___x_5089_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
lean_object* v___x_5090_; lean_object* v___x_5091_; uint64_t v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5090_ = l_Lean_Meta_Context_config(v___x_5089_);
lean_dec_ref(v___x_5089_);
v___x_5091_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(v___x_5090_);
v___x_5092_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5091_);
v___x_5093_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5093_, 0, v___x_5091_);
lean_ctor_set_uint64(v___x_5093_, sizeof(void*)*1, v___x_5092_);
v___x_5094_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_5094_, 0, v___x_5093_);
lean_ctor_set(v___x_5094_, 1, v_zetaDeltaSet_5069_);
lean_ctor_set(v___x_5094_, 2, v_lctx_5070_);
lean_ctor_set(v___x_5094_, 3, v_localInstances_5071_);
lean_ctor_set(v___x_5094_, 4, v_defEqCtx_x3f_5072_);
lean_ctor_set(v___x_5094_, 5, v_synthPendingDepth_5073_);
lean_ctor_set(v___x_5094_, 6, v_customCanUnfoldPredicate_x3f_5074_);
lean_ctor_set(v___x_5094_, 7, v_rewriteSet_x3f_5078_);
lean_ctor_set_uint8(v___x_5094_, sizeof(void*)*8, v_trackZetaDelta_5068_);
lean_ctor_set_uint8(v___x_5094_, sizeof(void*)*8 + 1, v_univApprox_5075_);
lean_ctor_set_uint8(v___x_5094_, sizeof(void*)*8 + 2, v_inTypeClassResolution_5076_);
lean_ctor_set_uint8(v___x_5094_, sizeof(void*)*8 + 3, v_cacheInferType_5077_);
lean_ctor_set_uint8(v___x_5094_, sizeof(void*)*8 + 4, v_rewriteFuelScope_5079_);
lean_inc(v_matchDeclName_5062_);
v___x_5095_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_matchDeclName_5062_, v___x_5094_, v_a_5064_, v_a_5065_, v_a_5066_);
if (lean_obj_tag(v___x_5095_) == 0)
{
lean_object* v_a_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v_a_5101_; 
v_a_5096_ = lean_ctor_get(v___x_5095_, 0);
lean_inc(v_a_5096_);
lean_dec_ref_known(v___x_5095_, 1);
v___x_5097_ = l_Lean_ConstantInfo_levelParams(v_a_5096_);
v___x_5098_ = lean_box(0);
lean_inc(v___x_5097_);
v___x_5099_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(v___x_5097_, v___x_5098_);
lean_inc(v_matchDeclName_5062_);
v___x_5100_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(v_matchDeclName_5062_, v_a_5066_);
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc(v_a_5101_);
lean_dec_ref(v___x_5100_);
if (lean_obj_tag(v_a_5101_) == 1)
{
lean_object* v_val_5102_; lean_object* v___x_5103_; lean_object* v___f_5104_; lean_object* v___x_5105_; uint8_t v___x_5106_; lean_object* v___x_5107_; 
v_val_5102_ = lean_ctor_get(v_a_5101_, 0);
lean_inc(v_val_5102_);
lean_dec_ref_known(v_a_5101_, 1);
v___x_5103_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_5102_);
lean_inc(v_a_5096_);
v___f_5104_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed), 14, 7);
lean_closure_set(v___f_5104_, 0, v_val_5102_);
lean_closure_set(v___f_5104_, 1, v___x_5086_);
lean_closure_set(v___f_5104_, 2, v_matchDeclName_5062_);
lean_closure_set(v___f_5104_, 3, v___x_5103_);
lean_closure_set(v___f_5104_, 4, v_a_5096_);
lean_closure_set(v___f_5104_, 5, v___x_5099_);
lean_closure_set(v___f_5104_, 6, v___x_5097_);
v___x_5105_ = l_Lean_ConstantInfo_type(v_a_5096_);
lean_dec(v_a_5096_);
v___x_5106_ = 0;
v___x_5107_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v___x_5105_, v___f_5104_, v___x_5106_, v___x_5106_, v___x_5094_, v_a_5064_, v_a_5065_, v_a_5066_);
lean_dec_ref_known(v___x_5094_, 8);
return v___x_5107_;
}
else
{
lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
lean_dec(v_a_5101_);
lean_dec(v___x_5099_);
lean_dec(v___x_5097_);
lean_dec(v_a_5096_);
v___x_5108_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_5109_ = l_Lean_MessageData_ofName(v_matchDeclName_5062_);
v___x_5110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5110_, 0, v___x_5108_);
lean_ctor_set(v___x_5110_, 1, v___x_5109_);
v___x_5111_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_5112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5112_, 0, v___x_5110_);
lean_ctor_set(v___x_5112_, 1, v___x_5111_);
v___x_5113_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_5112_, v___x_5094_, v_a_5064_, v_a_5065_, v_a_5066_);
lean_dec_ref_known(v___x_5094_, 8);
return v___x_5113_;
}
}
else
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
lean_dec_ref_known(v___x_5094_, 8);
lean_dec(v_matchDeclName_5062_);
v_a_5114_ = lean_ctor_get(v___x_5095_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5095_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5095_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5095_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed(lean_object* v_matchDeclName_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(v_matchDeclName_5132_, v_a_5133_, v_a_5134_, v_a_5135_, v_a_5136_);
lean_dec(v_a_5136_);
lean_dec_ref(v_a_5135_);
lean_dec(v_a_5134_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(lean_object* v_inst_5139_, lean_object* v_R_5140_, lean_object* v_a_5141_, lean_object* v_b_5142_, lean_object* v_c_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v___x_5149_; 
v___x_5149_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___redArg(v_a_5141_, v_b_5142_, v___y_5144_, v___y_5145_, v___y_5146_, v___y_5147_);
return v___x_5149_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___boxed(lean_object* v_inst_5150_, lean_object* v_R_5151_, lean_object* v_a_5152_, lean_object* v_b_5153_, lean_object* v_c_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(v_inst_5150_, v_R_5151_, v_a_5152_, v_b_5153_, v_c_5154_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_);
lean_dec(v___y_5158_);
lean_dec_ref(v___y_5157_);
lean_dec(v___y_5156_);
lean_dec_ref(v___y_5155_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(lean_object* v_upperBound_5161_, lean_object* v_val_5162_, lean_object* v_matchDeclName_5163_, lean_object* v___x_5164_, lean_object* v___x_5165_, lean_object* v_a_5166_, lean_object* v___x_5167_, lean_object* v___x_5168_, lean_object* v___x_5169_, lean_object* v___x_5170_, lean_object* v___x_5171_, lean_object* v___x_5172_, lean_object* v_inst_5173_, lean_object* v_R_5174_, lean_object* v_a_5175_, lean_object* v_b_5176_, lean_object* v_c_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_){
_start:
{
lean_object* v___x_5183_; 
v___x_5183_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v_upperBound_5161_, v_val_5162_, v_matchDeclName_5163_, v___x_5164_, v___x_5165_, v_a_5166_, v___x_5167_, v___x_5168_, v___x_5169_, v___x_5170_, v___x_5171_, v___x_5172_, v_a_5175_, v_b_5176_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___boxed(lean_object** _args){
lean_object* v_upperBound_5184_ = _args[0];
lean_object* v_val_5185_ = _args[1];
lean_object* v_matchDeclName_5186_ = _args[2];
lean_object* v___x_5187_ = _args[3];
lean_object* v___x_5188_ = _args[4];
lean_object* v_a_5189_ = _args[5];
lean_object* v___x_5190_ = _args[6];
lean_object* v___x_5191_ = _args[7];
lean_object* v___x_5192_ = _args[8];
lean_object* v___x_5193_ = _args[9];
lean_object* v___x_5194_ = _args[10];
lean_object* v___x_5195_ = _args[11];
lean_object* v_inst_5196_ = _args[12];
lean_object* v_R_5197_ = _args[13];
lean_object* v_a_5198_ = _args[14];
lean_object* v_b_5199_ = _args[15];
lean_object* v_c_5200_ = _args[16];
lean_object* v___y_5201_ = _args[17];
lean_object* v___y_5202_ = _args[18];
lean_object* v___y_5203_ = _args[19];
lean_object* v___y_5204_ = _args[20];
lean_object* v___y_5205_ = _args[21];
_start:
{
lean_object* v_res_5206_; 
v_res_5206_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(v_upperBound_5184_, v_val_5185_, v_matchDeclName_5186_, v___x_5187_, v___x_5188_, v_a_5189_, v___x_5190_, v___x_5191_, v___x_5192_, v___x_5193_, v___x_5194_, v___x_5195_, v_inst_5196_, v_R_5197_, v_a_5198_, v_b_5199_, v_c_5200_, v___y_5201_, v___y_5202_, v___y_5203_, v___y_5204_);
lean_dec(v___y_5204_);
lean_dec_ref(v___y_5203_);
lean_dec(v___y_5202_);
lean_dec_ref(v___y_5201_);
lean_dec(v_upperBound_5184_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(lean_object* v_upperBound_5207_, lean_object* v_matchDeclName_5208_, lean_object* v_a_5209_, lean_object* v_b_5210_){
_start:
{
uint8_t v___x_5212_; 
v___x_5212_ = lean_nat_dec_lt(v_a_5209_, v_upperBound_5207_);
if (v___x_5212_ == 0)
{
lean_object* v___x_5213_; 
lean_dec(v_a_5209_);
lean_dec(v_matchDeclName_5208_);
v___x_5213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5213_, 0, v_b_5210_);
return v___x_5213_;
}
else
{
lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; 
v___x_5214_ = l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_inc(v_matchDeclName_5208_);
v___x_5215_ = l_Lean_Name_str___override(v_matchDeclName_5208_, v___x_5214_);
v___x_5216_ = lean_unsigned_to_nat(1u);
v___x_5217_ = lean_nat_add(v_a_5209_, v___x_5216_);
lean_dec(v_a_5209_);
lean_inc(v___x_5217_);
v___x_5218_ = lean_name_append_index_after(v___x_5215_, v___x_5217_);
v___x_5219_ = lean_array_push(v_b_5210_, v___x_5218_);
v_a_5209_ = v___x_5217_;
v_b_5210_ = v___x_5219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg___boxed(lean_object* v_upperBound_5221_, lean_object* v_matchDeclName_5222_, lean_object* v_a_5223_, lean_object* v_b_5224_, lean_object* v___y_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v_upperBound_5221_, v_matchDeclName_5222_, v_a_5223_, v_b_5224_);
lean_dec(v_upperBound_5221_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* lean_get_congr_match_equations_for(lean_object* v_matchDeclName_5227_, lean_object* v_a_5228_, lean_object* v_a_5229_, lean_object* v_a_5230_, lean_object* v_a_5231_){
_start:
{
lean_object* v___x_5233_; lean_object* v_firstEqnName_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5233_ = l_Lean_Meta_Match_congrEqn1ThmSuffix;
lean_inc_n(v_matchDeclName_5227_, 3);
v_firstEqnName_5234_ = l_Lean_Name_str___override(v_matchDeclName_5227_, v___x_5233_);
v___x_5235_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed), 6, 1);
lean_closure_set(v___x_5235_, 0, v_matchDeclName_5227_);
v___x_5236_ = l_Lean_Meta_realizeConst(v_matchDeclName_5227_, v_firstEqnName_5234_, v___x_5235_, v_a_5228_, v_a_5229_, v_a_5230_, v_a_5231_);
if (lean_obj_tag(v___x_5236_) == 0)
{
lean_object* v___x_5237_; lean_object* v_a_5238_; 
lean_dec_ref_known(v___x_5236_, 1);
lean_inc(v_matchDeclName_5227_);
v___x_5237_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2___redArg(v_matchDeclName_5227_, v_a_5231_);
v_a_5238_ = lean_ctor_get(v___x_5237_, 0);
lean_inc(v_a_5238_);
lean_dec_ref(v___x_5237_);
if (lean_obj_tag(v_a_5238_) == 1)
{
lean_object* v_val_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; 
lean_dec(v_a_5231_);
lean_dec_ref(v_a_5230_);
lean_dec(v_a_5229_);
lean_dec_ref(v_a_5228_);
v_val_5239_ = lean_ctor_get(v_a_5238_, 0);
lean_inc(v_val_5239_);
lean_dec_ref_known(v_a_5238_, 1);
v___x_5240_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_5239_);
lean_dec(v_val_5239_);
v___x_5241_ = lean_unsigned_to_nat(0u);
v___x_5242_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7));
v___x_5243_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v___x_5240_, v_matchDeclName_5227_, v___x_5241_, v___x_5242_);
lean_dec(v___x_5240_);
return v___x_5243_;
}
else
{
lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; 
lean_dec(v_a_5238_);
v___x_5244_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_5245_ = l_Lean_MessageData_ofName(v_matchDeclName_5227_);
v___x_5246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5246_, 0, v___x_5244_);
lean_ctor_set(v___x_5246_, 1, v___x_5245_);
v___x_5247_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_5248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5248_, 0, v___x_5246_);
lean_ctor_set(v___x_5248_, 1, v___x_5247_);
v___x_5249_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_5248_, v_a_5228_, v_a_5229_, v_a_5230_, v_a_5231_);
lean_dec(v_a_5231_);
lean_dec_ref(v_a_5230_);
lean_dec(v_a_5229_);
lean_dec_ref(v_a_5228_);
return v___x_5249_;
}
}
else
{
lean_object* v_a_5250_; lean_object* v___x_5252_; uint8_t v_isShared_5253_; uint8_t v_isSharedCheck_5257_; 
lean_dec(v_a_5231_);
lean_dec_ref(v_a_5230_);
lean_dec(v_a_5229_);
lean_dec_ref(v_a_5228_);
lean_dec(v_matchDeclName_5227_);
v_a_5250_ = lean_ctor_get(v___x_5236_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v___x_5236_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5252_ = v___x_5236_;
v_isShared_5253_ = v_isSharedCheck_5257_;
goto v_resetjp_5251_;
}
else
{
lean_inc(v_a_5250_);
lean_dec(v___x_5236_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqnsImpl___boxed(lean_object* v_matchDeclName_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_){
_start:
{
lean_object* v_res_5264_; 
v_res_5264_ = lean_get_congr_match_equations_for(v_matchDeclName_5258_, v_a_5259_, v_a_5260_, v_a_5261_, v_a_5262_);
return v_res_5264_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(lean_object* v_upperBound_5265_, lean_object* v_matchDeclName_5266_, lean_object* v_inst_5267_, lean_object* v_R_5268_, lean_object* v_a_5269_, lean_object* v_b_5270_, lean_object* v_c_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_){
_start:
{
lean_object* v___x_5277_; 
v___x_5277_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v_upperBound_5265_, v_matchDeclName_5266_, v_a_5269_, v_b_5270_);
return v___x_5277_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___boxed(lean_object* v_upperBound_5278_, lean_object* v_matchDeclName_5279_, lean_object* v_inst_5280_, lean_object* v_R_5281_, lean_object* v_a_5282_, lean_object* v_b_5283_, lean_object* v_c_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(v_upperBound_5278_, v_matchDeclName_5279_, v_inst_5280_, v_R_5281_, v_a_5282_, v_b_5283_, v_c_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
lean_dec(v___y_5288_);
lean_dec_ref(v___y_5287_);
lean_dec(v___y_5286_);
lean_dec_ref(v___y_5285_);
lean_dec(v_upperBound_5278_);
return v_res_5290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5341_ = lean_unsigned_to_nat(3248161880u);
v___x_5342_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_));
v___x_5343_ = l_Lean_Name_num___override(v___x_5342_, v___x_5341_);
return v___x_5343_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; 
v___x_5345_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_));
v___x_5346_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_);
v___x_5347_ = l_Lean_Name_str___override(v___x_5346_, v___x_5345_);
return v___x_5347_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; 
v___x_5349_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_));
v___x_5350_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_);
v___x_5351_ = l_Lean_Name_str___override(v___x_5350_, v___x_5349_);
return v___x_5351_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; 
v___x_5352_ = lean_unsigned_to_nat(2u);
v___x_5353_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_);
v___x_5354_ = l_Lean_Name_num___override(v___x_5353_, v___x_5352_);
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5356_; uint8_t v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5356_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14));
v___x_5357_ = 0;
v___x_5358_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_);
v___x_5359_ = l_Lean_registerTraceClass(v___x_5356_, v___x_5357_, v___x_5358_);
return v___x_5359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2____boxed(lean_object* v_a_5360_){
_start:
{
lean_object* v_res_5361_; 
v_res_5361_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_();
return v_res_5361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(lean_object* v_env_5362_, lean_object* v_n_5363_){
_start:
{
if (lean_obj_tag(v_n_5363_) == 1)
{
lean_object* v_pre_5364_; lean_object* v_str_5365_; uint8_t v___x_5371_; 
v_pre_5364_ = lean_ctor_get(v_n_5363_, 0);
lean_inc(v_pre_5364_);
v_str_5365_ = lean_ctor_get(v_n_5363_, 1);
lean_inc_ref_n(v_str_5365_, 2);
lean_dec_ref_known(v_n_5363_, 2);
v___x_5371_ = l_Lean_Meta_isEqnReservedNameSuffix(v_str_5365_);
if (v___x_5371_ == 0)
{
lean_object* v___x_5372_; uint8_t v___x_5373_; 
v___x_5372_ = ((lean_object*)(l_Lean_Meta_Match_getEquationsForImpl___closed__0));
v___x_5373_ = lean_string_dec_eq(v_str_5365_, v___x_5372_);
lean_dec_ref(v_str_5365_);
if (v___x_5373_ == 0)
{
lean_object* v___x_5374_; 
lean_dec(v_pre_5364_);
lean_dec_ref(v_env_5362_);
v___x_5374_ = lean_box(0);
return v___x_5374_;
}
else
{
goto v___jp_5366_;
}
}
else
{
lean_dec_ref(v_str_5365_);
goto v___jp_5366_;
}
v___jp_5366_:
{
lean_object* v___x_5367_; 
v___x_5367_ = l_Lean_privateToUserName_x3f(v_pre_5364_);
if (lean_obj_tag(v___x_5367_) == 0)
{
lean_dec_ref(v_env_5362_);
return v___x_5367_;
}
else
{
lean_object* v_val_5368_; uint8_t v___x_5369_; 
v_val_5368_ = lean_ctor_get(v___x_5367_, 0);
lean_inc(v_val_5368_);
v___x_5369_ = l_Lean_Meta_isMatcherCore(v_env_5362_, v_val_5368_);
if (v___x_5369_ == 0)
{
lean_object* v___x_5370_; 
lean_dec_ref_known(v___x_5367_, 1);
v___x_5370_ = lean_box(0);
return v___x_5370_;
}
else
{
return v___x_5367_;
}
}
}
}
else
{
lean_object* v___x_5375_; 
lean_dec(v_n_5363_);
lean_dec_ref(v_env_5362_);
v___x_5375_ = lean_box(0);
return v___x_5375_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_(lean_object* v_x1_5376_, lean_object* v_x2_5377_){
_start:
{
lean_object* v___x_5378_; 
v___x_5378_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(v_x1_5376_, v_x2_5377_);
if (lean_obj_tag(v___x_5378_) == 0)
{
uint8_t v___x_5379_; 
v___x_5379_ = 0;
return v___x_5379_;
}
else
{
uint8_t v___x_5380_; 
lean_dec_ref_known(v___x_5378_, 1);
v___x_5380_ = 1;
return v___x_5380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2____boxed(lean_object* v_x1_5381_, lean_object* v_x2_5382_){
_start:
{
uint8_t v_res_5383_; lean_object* v_r_5384_; 
v_res_5383_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_(v_x1_5381_, v_x2_5382_);
v_r_5384_ = lean_box(v_res_5383_);
return v_r_5384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5387_; lean_object* v___x_5388_; 
v___f_5387_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_));
v___x_5388_ = l_Lean_registerReservedNamePredicate(v___f_5387_);
return v___x_5388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2____boxed(lean_object* v_a_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_();
return v_res_5390_;
}
}
static uint64_t _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5397_; uint64_t v___x_5398_; 
v___x_5397_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_));
v___x_5398_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5397_);
return v___x_5398_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5399_ = lean_uint64_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5400_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_));
v___x_5401_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5401_, 0, v___x_5400_);
lean_ctor_set_uint64(v___x_5401_, sizeof(void*)*1, v___x_5399_);
return v___x_5401_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5404_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_5405_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5406_ = lean_unsigned_to_nat(0u);
v___x_5407_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5406_);
lean_ctor_set(v___x_5407_, 1, v___x_5406_);
lean_ctor_set(v___x_5407_, 2, v___x_5406_);
lean_ctor_set(v___x_5407_, 3, v___x_5406_);
lean_ctor_set(v___x_5407_, 4, v___x_5405_);
lean_ctor_set(v___x_5407_, 5, v___x_5405_);
lean_ctor_set(v___x_5407_, 6, v___x_5405_);
lean_ctor_set(v___x_5407_, 7, v___x_5405_);
lean_ctor_set(v___x_5407_, 8, v___x_5405_);
lean_ctor_set(v___x_5407_, 9, v___x_5405_);
lean_ctor_set(v___x_5407_, 10, v___x_5405_);
lean_ctor_set(v___x_5407_, 11, v___x_5404_);
return v___x_5407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5408_; lean_object* v___x_5409_; 
v___x_5408_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5409_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5409_, 0, v___x_5408_);
lean_ctor_set(v___x_5409_, 1, v___x_5408_);
lean_ctor_set(v___x_5409_, 2, v___x_5408_);
lean_ctor_set(v___x_5409_, 3, v___x_5408_);
lean_ctor_set(v___x_5409_, 4, v___x_5408_);
lean_ctor_set(v___x_5409_, 5, v___x_5408_);
return v___x_5409_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5410_; lean_object* v___x_5411_; 
v___x_5410_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5411_, 0, v___x_5410_);
lean_ctor_set(v___x_5411_, 1, v___x_5410_);
lean_ctor_set(v___x_5411_, 2, v___x_5410_);
lean_ctor_set(v___x_5411_, 3, v___x_5410_);
lean_ctor_set(v___x_5411_, 4, v___x_5410_);
return v___x_5411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(lean_object* v___x_5412_, lean_object* v_name_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_){
_start:
{
lean_object* v___x_5417_; lean_object* v_env_5418_; lean_object* v___x_5419_; 
v___x_5417_ = lean_st_ref_get(v___y_5415_);
v_env_5418_ = lean_ctor_get(v___x_5417_, 0);
lean_inc_ref(v_env_5418_);
lean_dec(v___x_5417_);
v___x_5419_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(v_env_5418_, v_name_5413_);
if (lean_obj_tag(v___x_5419_) == 1)
{
lean_object* v_val_5420_; uint8_t v___x_5421_; uint8_t v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; 
v_val_5420_ = lean_ctor_get(v___x_5419_, 0);
lean_inc(v_val_5420_);
lean_dec_ref_known(v___x_5419_, 1);
v___x_5421_ = 0;
v___x_5422_ = 1;
v___x_5423_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5424_ = lean_unsigned_to_nat(0u);
v___x_5425_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_5426_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_5427_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_));
v___x_5428_ = lean_box(0);
lean_inc(v___x_5412_);
v___x_5429_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_5429_, 0, v___x_5423_);
lean_ctor_set(v___x_5429_, 1, v___x_5412_);
lean_ctor_set(v___x_5429_, 2, v___x_5426_);
lean_ctor_set(v___x_5429_, 3, v___x_5427_);
lean_ctor_set(v___x_5429_, 4, v___x_5428_);
lean_ctor_set(v___x_5429_, 5, v___x_5424_);
lean_ctor_set(v___x_5429_, 6, v___x_5428_);
lean_ctor_set(v___x_5429_, 7, v___x_5428_);
lean_ctor_set_uint8(v___x_5429_, sizeof(void*)*8, v___x_5421_);
lean_ctor_set_uint8(v___x_5429_, sizeof(void*)*8 + 1, v___x_5421_);
lean_ctor_set_uint8(v___x_5429_, sizeof(void*)*8 + 2, v___x_5421_);
lean_ctor_set_uint8(v___x_5429_, sizeof(void*)*8 + 3, v___x_5422_);
lean_ctor_set_uint8(v___x_5429_, sizeof(void*)*8 + 4, v___x_5421_);
v___x_5430_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5431_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5432_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5433_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5430_);
lean_ctor_set(v___x_5433_, 1, v___x_5431_);
lean_ctor_set(v___x_5433_, 2, v___x_5412_);
lean_ctor_set(v___x_5433_, 3, v___x_5425_);
lean_ctor_set(v___x_5433_, 4, v___x_5432_);
lean_ctor_set(v___x_5433_, 5, v___x_5424_);
v___x_5434_ = lean_st_mk_ref(v___x_5433_);
lean_inc(v___y_5415_);
lean_inc_ref(v___y_5414_);
lean_inc(v___x_5434_);
v___x_5435_ = lean_get_match_equations_for(v_val_5420_, v___x_5429_, v___x_5434_, v___y_5414_, v___y_5415_);
if (lean_obj_tag(v___x_5435_) == 0)
{
lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5444_; 
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5444_ == 0)
{
lean_object* v_unused_5445_; 
v_unused_5445_ = lean_ctor_get(v___x_5435_, 0);
lean_dec(v_unused_5445_);
v___x_5437_ = v___x_5435_;
v_isShared_5438_ = v_isSharedCheck_5444_;
goto v_resetjp_5436_;
}
else
{
lean_dec(v___x_5435_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5444_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5442_; 
v___x_5439_ = lean_st_ref_get(v___x_5434_);
lean_dec(v___x_5434_);
lean_dec(v___x_5439_);
v___x_5440_ = lean_box(v___x_5422_);
if (v_isShared_5438_ == 0)
{
lean_ctor_set(v___x_5437_, 0, v___x_5440_);
v___x_5442_ = v___x_5437_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v___x_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
else
{
lean_object* v_a_5446_; lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5453_; 
lean_dec(v___x_5434_);
v_a_5446_ = lean_ctor_get(v___x_5435_, 0);
v_isSharedCheck_5453_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5453_ == 0)
{
v___x_5448_ = v___x_5435_;
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
else
{
lean_inc(v_a_5446_);
lean_dec(v___x_5435_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v___x_5451_; 
if (v_isShared_5449_ == 0)
{
v___x_5451_ = v___x_5448_;
goto v_reusejp_5450_;
}
else
{
lean_object* v_reuseFailAlloc_5452_; 
v_reuseFailAlloc_5452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5452_, 0, v_a_5446_);
v___x_5451_ = v_reuseFailAlloc_5452_;
goto v_reusejp_5450_;
}
v_reusejp_5450_:
{
return v___x_5451_;
}
}
}
}
else
{
uint8_t v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; 
lean_dec(v___x_5419_);
lean_dec(v___x_5412_);
v___x_5454_ = 0;
v___x_5455_ = lean_box(v___x_5454_);
v___x_5456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5456_, 0, v___x_5455_);
return v___x_5456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2____boxed(lean_object* v___x_5457_, lean_object* v_name_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_){
_start:
{
lean_object* v_res_5462_; 
v_res_5462_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(v___x_5457_, v_name_5458_, v___y_5459_, v___y_5460_);
lean_dec(v___y_5460_);
lean_dec_ref(v___y_5459_);
return v_res_5462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5466_; lean_object* v___x_5467_; 
v___f_5466_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_));
v___x_5467_ = l_Lean_registerReservedNameAction(v___f_5466_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2____boxed(lean_object* v_a_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_();
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(lean_object* v_env_5470_, lean_object* v_n_5471_){
_start:
{
if (lean_obj_tag(v_n_5471_) == 1)
{
lean_object* v_pre_5472_; lean_object* v_str_5473_; uint8_t v___x_5474_; 
v_pre_5472_ = lean_ctor_get(v_n_5471_, 0);
lean_inc(v_pre_5472_);
v_str_5473_ = lean_ctor_get(v_n_5471_, 1);
lean_inc_ref(v_str_5473_);
lean_dec_ref_known(v_n_5471_, 2);
v___x_5474_ = l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(v_str_5473_);
if (v___x_5474_ == 0)
{
lean_object* v___x_5475_; 
lean_dec(v_pre_5472_);
lean_dec_ref(v_env_5470_);
v___x_5475_ = lean_box(0);
return v___x_5475_;
}
else
{
uint8_t v___x_5476_; 
lean_inc(v_pre_5472_);
v___x_5476_ = l_Lean_Meta_isMatcherCore(v_env_5470_, v_pre_5472_);
if (v___x_5476_ == 0)
{
lean_object* v___x_5477_; 
lean_dec(v_pre_5472_);
v___x_5477_ = lean_box(0);
return v___x_5477_;
}
else
{
lean_object* v___x_5478_; 
v___x_5478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5478_, 0, v_pre_5472_);
return v___x_5478_;
}
}
}
else
{
lean_object* v___x_5479_; 
lean_dec(v_n_5471_);
lean_dec_ref(v_env_5470_);
v___x_5479_ = lean_box(0);
return v___x_5479_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_(lean_object* v_x1_5480_, lean_object* v_x2_5481_){
_start:
{
lean_object* v___x_5482_; 
v___x_5482_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(v_x1_5480_, v_x2_5481_);
if (lean_obj_tag(v___x_5482_) == 0)
{
uint8_t v___x_5483_; 
v___x_5483_ = 0;
return v___x_5483_;
}
else
{
uint8_t v___x_5484_; 
lean_dec_ref_known(v___x_5482_, 1);
v___x_5484_ = 1;
return v___x_5484_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2____boxed(lean_object* v_x1_5485_, lean_object* v_x2_5486_){
_start:
{
uint8_t v_res_5487_; lean_object* v_r_5488_; 
v_res_5487_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_(v_x1_5485_, v_x2_5486_);
v_r_5488_ = lean_box(v_res_5487_);
return v_r_5488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5491_; lean_object* v___x_5492_; 
v___f_5491_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_));
v___x_5492_ = l_Lean_registerReservedNamePredicate(v___f_5491_);
return v___x_5492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2____boxed(lean_object* v_a_5493_){
_start:
{
lean_object* v_res_5494_; 
v_res_5494_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_();
return v_res_5494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_(lean_object* v___x_5495_, lean_object* v_name_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_){
_start:
{
lean_object* v___x_5500_; lean_object* v_env_5501_; lean_object* v___x_5502_; 
v___x_5500_ = lean_st_ref_get(v___y_5498_);
v_env_5501_ = lean_ctor_get(v___x_5500_, 0);
lean_inc_ref(v_env_5501_);
lean_dec(v___x_5500_);
v___x_5502_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(v_env_5501_, v_name_5496_);
if (lean_obj_tag(v___x_5502_) == 1)
{
lean_object* v_val_5503_; uint8_t v___x_5504_; uint8_t v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; 
v_val_5503_ = lean_ctor_get(v___x_5502_, 0);
lean_inc(v_val_5503_);
lean_dec_ref_known(v___x_5502_, 1);
v___x_5504_ = 0;
v___x_5505_ = 1;
v___x_5506_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5507_ = lean_unsigned_to_nat(32u);
v___x_5508_ = lean_mk_empty_array_with_capacity(v___x_5507_);
lean_dec_ref(v___x_5508_);
v___x_5509_ = lean_unsigned_to_nat(0u);
v___x_5510_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_5511_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_5512_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_));
v___x_5513_ = lean_box(0);
lean_inc(v___x_5495_);
v___x_5514_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_5514_, 0, v___x_5506_);
lean_ctor_set(v___x_5514_, 1, v___x_5495_);
lean_ctor_set(v___x_5514_, 2, v___x_5511_);
lean_ctor_set(v___x_5514_, 3, v___x_5512_);
lean_ctor_set(v___x_5514_, 4, v___x_5513_);
lean_ctor_set(v___x_5514_, 5, v___x_5509_);
lean_ctor_set(v___x_5514_, 6, v___x_5513_);
lean_ctor_set(v___x_5514_, 7, v___x_5513_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*8, v___x_5504_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*8 + 1, v___x_5504_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*8 + 2, v___x_5504_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*8 + 3, v___x_5505_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*8 + 4, v___x_5504_);
v___x_5515_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5516_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5517_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_);
v___x_5518_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5518_, 0, v___x_5515_);
lean_ctor_set(v___x_5518_, 1, v___x_5516_);
lean_ctor_set(v___x_5518_, 2, v___x_5495_);
lean_ctor_set(v___x_5518_, 3, v___x_5510_);
lean_ctor_set(v___x_5518_, 4, v___x_5517_);
lean_ctor_set(v___x_5518_, 5, v___x_5509_);
v___x_5519_ = lean_st_mk_ref(v___x_5518_);
lean_inc(v___y_5498_);
lean_inc_ref(v___y_5497_);
lean_inc(v___x_5519_);
v___x_5520_ = lean_get_congr_match_equations_for(v_val_5503_, v___x_5514_, v___x_5519_, v___y_5497_, v___y_5498_);
if (lean_obj_tag(v___x_5520_) == 0)
{
lean_object* v___x_5522_; uint8_t v_isShared_5523_; uint8_t v_isSharedCheck_5529_; 
v_isSharedCheck_5529_ = !lean_is_exclusive(v___x_5520_);
if (v_isSharedCheck_5529_ == 0)
{
lean_object* v_unused_5530_; 
v_unused_5530_ = lean_ctor_get(v___x_5520_, 0);
lean_dec(v_unused_5530_);
v___x_5522_ = v___x_5520_;
v_isShared_5523_ = v_isSharedCheck_5529_;
goto v_resetjp_5521_;
}
else
{
lean_dec(v___x_5520_);
v___x_5522_ = lean_box(0);
v_isShared_5523_ = v_isSharedCheck_5529_;
goto v_resetjp_5521_;
}
v_resetjp_5521_:
{
lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5527_; 
v___x_5524_ = lean_st_ref_get(v___x_5519_);
lean_dec(v___x_5519_);
lean_dec(v___x_5524_);
v___x_5525_ = lean_box(v___x_5505_);
if (v_isShared_5523_ == 0)
{
lean_ctor_set(v___x_5522_, 0, v___x_5525_);
v___x_5527_ = v___x_5522_;
goto v_reusejp_5526_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v___x_5525_);
v___x_5527_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5526_;
}
v_reusejp_5526_:
{
return v___x_5527_;
}
}
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5538_; 
lean_dec(v___x_5519_);
v_a_5531_ = lean_ctor_get(v___x_5520_, 0);
v_isSharedCheck_5538_ = !lean_is_exclusive(v___x_5520_);
if (v_isSharedCheck_5538_ == 0)
{
v___x_5533_ = v___x_5520_;
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
else
{
lean_inc(v_a_5531_);
lean_dec(v___x_5520_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5531_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
return v___x_5536_;
}
}
}
}
else
{
uint8_t v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; 
lean_dec(v___x_5502_);
lean_dec(v___x_5495_);
v___x_5539_ = 0;
v___x_5540_ = lean_box(v___x_5539_);
v___x_5541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5541_, 0, v___x_5540_);
return v___x_5541_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2____boxed(lean_object* v___x_5542_, lean_object* v_name_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_){
_start:
{
lean_object* v_res_5547_; 
v_res_5547_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_(v___x_5542_, v_name_5543_, v___y_5544_, v___y_5545_);
lean_dec(v___y_5545_);
lean_dec_ref(v___y_5544_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5551_; lean_object* v___x_5552_; 
v___f_5551_ = ((lean_object*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_));
v___x_5552_ = l_Lean_registerReservedNameAction(v___f_5551_);
return v___x_5552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2____boxed(lean_object* v_a_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_();
return v_res_5554_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_Match(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_SimpH(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3248161880____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1597551399____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3170112230____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_136844199____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2767730534____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_Match(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_SimpH(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
lean_object* initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatchEqs(builtin);
}
#ifdef __cplusplus
}
#endif

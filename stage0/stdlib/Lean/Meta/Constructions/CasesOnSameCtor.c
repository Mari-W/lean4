// Lean compiler output
// Module: Lean.Meta.Constructions.CasesOnSameCtor
// Imports: public import Lean.Meta.Basic import Lean.Meta.CompletionName import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CtorElim import Lean.Elab.App import Lean.Meta.SameCtorUtils
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
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_MessageData_nil;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabAsElim;
lean_object* l_Lean_Meta_Match_Extension_addMatcherInfo(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_mkConstructorElimName(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Meta_markMatcherLike(lean_object*, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_addToCompletionBlackList(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0 = (const lean_object*)&l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 10, 150, 230, 97, 79, 179, 234)}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object**);
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Constructions.CasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__0_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.mkCasesOnSameCtorHet"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unexpected universe levels on `casesOn`"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__3;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__4 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__4_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__5;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "could not apply "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " to close\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unifyEqns\? unexpectedly closed goal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "het"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 194, 63, 63, 137, 239, 65, 92)}};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.mkCasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__3;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object* v_k_78_, lean_object* v_b_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
v___x_85_ = lean_apply_6(v_k_78_, v_b_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, lean_box(0));
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object* v_k_86_, lean_object* v_b_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(v_k_86_, v_b_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object* v_name_94_, uint8_t v_bi_95_, lean_object* v_type_96_, lean_object* v_k_97_, uint8_t v_kind_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___f_104_; lean_object* v___x_105_; 
v___f_104_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_104_, 0, v_k_97_);
v___x_105_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_94_, v_bi_95_, v_type_96_, v___f_104_, v_kind_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_105_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_105_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_105_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object* v_name_122_, lean_object* v_bi_123_, lean_object* v_type_124_, lean_object* v_k_125_, lean_object* v_kind_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_bi_boxed_132_; uint8_t v_kind_boxed_133_; lean_object* v_res_134_; 
v_bi_boxed_132_ = lean_unbox(v_bi_123_);
v_kind_boxed_133_ = lean_unbox(v_kind_126_);
v_res_134_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_122_, v_bi_boxed_132_, v_type_124_, v_k_125_, v_kind_boxed_133_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object* v_00_u03b1_135_, lean_object* v_name_136_, uint8_t v_bi_137_, lean_object* v_type_138_, lean_object* v_k_139_, uint8_t v_kind_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_136_, v_bi_137_, v_type_138_, v_k_139_, v_kind_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object* v_00_u03b1_147_, lean_object* v_name_148_, lean_object* v_bi_149_, lean_object* v_type_150_, lean_object* v_k_151_, lean_object* v_kind_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_bi_boxed_158_; uint8_t v_kind_boxed_159_; lean_object* v_res_160_; 
v_bi_boxed_158_ = lean_unbox(v_bi_149_);
v_kind_boxed_159_ = lean_unbox(v_kind_152_);
v_res_160_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(v_00_u03b1_147_, v_name_148_, v_bi_boxed_158_, v_type_150_, v_k_151_, v_kind_boxed_159_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object* v_type_161_, lean_object* v_maxFVars_x3f_162_, lean_object* v_k_163_, uint8_t v_cleanupAnnotations_164_, uint8_t v_whnfType_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_171_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_171_, 0, v_k_163_);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_161_, v_maxFVars_x3f_162_, v___f_171_, v_cleanupAnnotations_164_, v_whnfType_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_172_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_172_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object* v_type_189_, lean_object* v_maxFVars_x3f_190_, lean_object* v_k_191_, lean_object* v_cleanupAnnotations_192_, lean_object* v_whnfType_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_199_; uint8_t v_whnfType_boxed_200_; lean_object* v_res_201_; 
v_cleanupAnnotations_boxed_199_ = lean_unbox(v_cleanupAnnotations_192_);
v_whnfType_boxed_200_ = lean_unbox(v_whnfType_193_);
v_res_201_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_189_, v_maxFVars_x3f_190_, v_k_191_, v_cleanupAnnotations_boxed_199_, v_whnfType_boxed_200_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object* v_00_u03b1_202_, lean_object* v_type_203_, lean_object* v_maxFVars_x3f_204_, lean_object* v_k_205_, uint8_t v_cleanupAnnotations_206_, uint8_t v_whnfType_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_203_, v_maxFVars_x3f_204_, v_k_205_, v_cleanupAnnotations_206_, v_whnfType_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object* v_00_u03b1_214_, lean_object* v_type_215_, lean_object* v_maxFVars_x3f_216_, lean_object* v_k_217_, lean_object* v_cleanupAnnotations_218_, lean_object* v_whnfType_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_225_; uint8_t v_whnfType_boxed_226_; lean_object* v_res_227_; 
v_cleanupAnnotations_boxed_225_ = lean_unbox(v_cleanupAnnotations_218_);
v_whnfType_boxed_226_ = lean_unbox(v_whnfType_219_);
v_res_227_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(v_00_u03b1_214_, v_type_215_, v_maxFVars_x3f_216_, v_k_217_, v_cleanupAnnotations_boxed_225_, v_whnfType_boxed_226_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object* v_name_228_, lean_object* v_levelParams_229_, lean_object* v_type_230_, lean_object* v_value_231_, lean_object* v_hints_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; uint8_t v___y_237_; lean_object* v_env_245_; uint8_t v___x_246_; 
v___x_235_ = lean_st_ref_get(v___y_233_);
v_env_245_ = lean_ctor_get(v___x_235_, 0);
lean_inc_ref_n(v_env_245_, 2);
lean_dec(v___x_235_);
v___x_246_ = l_Lean_Environment_hasUnsafe(v_env_245_, v_type_230_);
if (v___x_246_ == 0)
{
uint8_t v___x_247_; 
v___x_247_ = l_Lean_Environment_hasUnsafe(v_env_245_, v_value_231_);
if (v___x_247_ == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 1;
v___y_237_ = v___x_248_;
goto v___jp_236_;
}
else
{
goto v___jp_243_;
}
}
else
{
lean_dec_ref(v_env_245_);
goto v___jp_243_;
}
v___jp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_inc(v_name_228_);
v___x_238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_238_, 0, v_name_228_);
lean_ctor_set(v___x_238_, 1, v_levelParams_229_);
lean_ctor_set(v___x_238_, 2, v_type_230_);
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v_name_228_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_241_, 0, v___x_238_);
lean_ctor_set(v___x_241_, 1, v_value_231_);
lean_ctor_set(v___x_241_, 2, v_hints_232_);
lean_ctor_set(v___x_241_, 3, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*4, v___y_237_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
v___jp_243_:
{
uint8_t v___x_244_; 
v___x_244_ = 0;
v___y_237_ = v___x_244_;
goto v___jp_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object* v_name_249_, lean_object* v_levelParams_250_, lean_object* v_type_251_, lean_object* v_value_252_, lean_object* v_hints_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_249_, v_levelParams_250_, v_type_251_, v_value_252_, v_hints_253_, v___y_254_);
lean_dec(v___y_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object* v_name_257_, lean_object* v_levelParams_258_, lean_object* v_type_259_, lean_object* v_value_260_, lean_object* v_hints_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_257_, v_levelParams_258_, v_type_259_, v_value_260_, v_hints_261_, v___y_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object* v_name_268_, lean_object* v_levelParams_269_, lean_object* v_type_270_, lean_object* v_value_271_, lean_object* v_hints_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(v_name_268_, v_levelParams_269_, v_type_270_, v_value_271_, v_hints_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object* v___y_279_, uint8_t v_isExporting_280_, lean_object* v___x_281_, lean_object* v___y_282_, lean_object* v___x_283_, lean_object* v_a_x3f_284_){
_start:
{
lean_object* v___x_286_; lean_object* v_env_287_; lean_object* v_nextMacroScope_288_; lean_object* v_ngen_289_; lean_object* v_auxDeclNGen_290_; lean_object* v_traceState_291_; lean_object* v_recordedDeps_292_; lean_object* v_messages_293_; lean_object* v_infoState_294_; lean_object* v_snapshotTasks_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_321_; 
v___x_286_ = lean_st_ref_take(v___y_279_);
v_env_287_ = lean_ctor_get(v___x_286_, 0);
v_nextMacroScope_288_ = lean_ctor_get(v___x_286_, 1);
v_ngen_289_ = lean_ctor_get(v___x_286_, 2);
v_auxDeclNGen_290_ = lean_ctor_get(v___x_286_, 3);
v_traceState_291_ = lean_ctor_get(v___x_286_, 4);
v_recordedDeps_292_ = lean_ctor_get(v___x_286_, 6);
v_messages_293_ = lean_ctor_get(v___x_286_, 7);
v_infoState_294_ = lean_ctor_get(v___x_286_, 8);
v_snapshotTasks_295_ = lean_ctor_get(v___x_286_, 9);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v___x_286_, 5);
lean_dec(v_unused_322_);
v___x_297_ = v___x_286_;
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_snapshotTasks_295_);
lean_inc(v_infoState_294_);
lean_inc(v_messages_293_);
lean_inc(v_recordedDeps_292_);
lean_inc(v_traceState_291_);
lean_inc(v_auxDeclNGen_290_);
lean_inc(v_ngen_289_);
lean_inc(v_nextMacroScope_288_);
lean_inc(v_env_287_);
lean_dec(v___x_286_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = l_Lean_Environment_setExporting(v_env_287_, v_isExporting_280_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 5, v___x_281_);
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_nextMacroScope_288_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_ngen_289_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v_auxDeclNGen_290_);
lean_ctor_set(v_reuseFailAlloc_320_, 4, v_traceState_291_);
lean_ctor_set(v_reuseFailAlloc_320_, 5, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_320_, 6, v_recordedDeps_292_);
lean_ctor_set(v_reuseFailAlloc_320_, 7, v_messages_293_);
lean_ctor_set(v_reuseFailAlloc_320_, 8, v_infoState_294_);
lean_ctor_set(v_reuseFailAlloc_320_, 9, v_snapshotTasks_295_);
v___x_301_ = v_reuseFailAlloc_320_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_mctx_304_; lean_object* v_zetaDeltaFVarIds_305_; lean_object* v_postponed_306_; lean_object* v_diag_307_; lean_object* v_rewriteFires_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_318_; 
v___x_302_ = lean_st_ref_put(v___y_279_, v___x_301_);
v___x_303_ = lean_st_ref_take(v___y_282_);
v_mctx_304_ = lean_ctor_get(v___x_303_, 0);
v_zetaDeltaFVarIds_305_ = lean_ctor_get(v___x_303_, 2);
v_postponed_306_ = lean_ctor_get(v___x_303_, 3);
v_diag_307_ = lean_ctor_get(v___x_303_, 4);
v_rewriteFires_308_ = lean_ctor_get(v___x_303_, 5);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; 
v_unused_319_ = lean_ctor_get(v___x_303_, 1);
lean_dec(v_unused_319_);
v___x_310_ = v___x_303_;
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_rewriteFires_308_);
lean_inc(v_diag_307_);
lean_inc(v_postponed_306_);
lean_inc(v_zetaDeltaFVarIds_305_);
lean_inc(v_mctx_304_);
lean_dec(v___x_303_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_box(0);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_283_);
v___x_314_ = v___x_310_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_mctx_304_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v_zetaDeltaFVarIds_305_);
lean_ctor_set(v_reuseFailAlloc_317_, 3, v_postponed_306_);
lean_ctor_set(v_reuseFailAlloc_317_, 4, v_diag_307_);
lean_ctor_set(v_reuseFailAlloc_317_, 5, v_rewriteFires_308_);
v___x_314_ = v_reuseFailAlloc_317_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_st_ref_put(v___y_282_, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_312_);
return v___x_316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object* v___y_323_, lean_object* v_isExporting_324_, lean_object* v___x_325_, lean_object* v___y_326_, lean_object* v___x_327_, lean_object* v_a_x3f_328_, lean_object* v___y_329_){
_start:
{
uint8_t v_isExporting_boxed_330_; lean_object* v_res_331_; 
v_isExporting_boxed_330_ = lean_unbox(v_isExporting_324_);
v_res_331_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_323_, v_isExporting_boxed_330_, v___x_325_, v___y_326_, v___x_327_, v_a_x3f_328_);
lean_dec(v_a_x3f_328_);
lean_dec(v___y_326_);
lean_dec(v___y_323_);
return v_res_331_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_332_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_338_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
lean_ctor_set(v___x_338_, 2, v___x_337_);
lean_ctor_set(v___x_338_, 3, v___x_337_);
lean_ctor_set(v___x_338_, 4, v___x_337_);
lean_ctor_set(v___x_338_, 5, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object* v_x_339_, uint8_t v_isExporting_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_346_; lean_object* v_env_347_; lean_object* v___x_348_; uint8_t v_isModule_349_; 
v___x_346_ = lean_st_ref_get(v___y_344_);
v_env_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc_ref(v_env_347_);
lean_dec(v___x_346_);
v___x_348_ = l_Lean_Environment_header(v_env_347_);
v_isModule_349_ = lean_ctor_get_uint8(v___x_348_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_348_);
if (v_isModule_349_ == 0)
{
lean_object* v___x_350_; 
lean_dec_ref(v_env_347_);
lean_inc(v___y_344_);
lean_inc_ref(v___y_343_);
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
v___x_350_ = lean_apply_5(v_x_339_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, lean_box(0));
return v___x_350_;
}
else
{
uint8_t v_isExporting_351_; 
v_isExporting_351_ = lean_ctor_get_uint8(v_env_347_, sizeof(void*)*13);
lean_dec_ref(v_env_347_);
if (v_isExporting_340_ == 0)
{
if (v_isExporting_351_ == 0)
{
lean_object* v___x_419_; 
lean_inc(v___y_344_);
lean_inc_ref(v___y_343_);
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
v___x_419_ = lean_apply_5(v_x_339_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, lean_box(0));
return v___x_419_;
}
else
{
goto v___jp_352_;
}
}
else
{
if (v_isExporting_351_ == 0)
{
goto v___jp_352_;
}
else
{
lean_object* v___x_420_; 
lean_inc(v___y_344_);
lean_inc_ref(v___y_343_);
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
v___x_420_ = lean_apply_5(v_x_339_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, lean_box(0));
return v___x_420_;
}
}
v___jp_352_:
{
lean_object* v___x_353_; lean_object* v_env_354_; lean_object* v_nextMacroScope_355_; lean_object* v_ngen_356_; lean_object* v_auxDeclNGen_357_; lean_object* v_traceState_358_; lean_object* v_recordedDeps_359_; lean_object* v_messages_360_; lean_object* v_infoState_361_; lean_object* v_snapshotTasks_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_417_; 
v___x_353_ = lean_st_ref_take(v___y_344_);
v_env_354_ = lean_ctor_get(v___x_353_, 0);
v_nextMacroScope_355_ = lean_ctor_get(v___x_353_, 1);
v_ngen_356_ = lean_ctor_get(v___x_353_, 2);
v_auxDeclNGen_357_ = lean_ctor_get(v___x_353_, 3);
v_traceState_358_ = lean_ctor_get(v___x_353_, 4);
v_recordedDeps_359_ = lean_ctor_get(v___x_353_, 6);
v_messages_360_ = lean_ctor_get(v___x_353_, 7);
v_infoState_361_ = lean_ctor_get(v___x_353_, 8);
v_snapshotTasks_362_ = lean_ctor_get(v___x_353_, 9);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_417_ == 0)
{
lean_object* v_unused_418_; 
v_unused_418_ = lean_ctor_get(v___x_353_, 5);
lean_dec(v_unused_418_);
v___x_364_ = v___x_353_;
v_isShared_365_ = v_isSharedCheck_417_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_snapshotTasks_362_);
lean_inc(v_infoState_361_);
lean_inc(v_messages_360_);
lean_inc(v_recordedDeps_359_);
lean_inc(v_traceState_358_);
lean_inc(v_auxDeclNGen_357_);
lean_inc(v_ngen_356_);
lean_inc(v_nextMacroScope_355_);
lean_inc(v_env_354_);
lean_dec(v___x_353_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_417_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_366_ = l_Lean_Environment_setExporting(v_env_354_, v_isExporting_340_);
v___x_367_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 5, v___x_367_);
lean_ctor_set(v___x_364_, 0, v___x_366_);
v___x_369_ = v___x_364_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_nextMacroScope_355_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_ngen_356_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v_auxDeclNGen_357_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v_traceState_358_);
lean_ctor_set(v_reuseFailAlloc_416_, 5, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_416_, 6, v_recordedDeps_359_);
lean_ctor_set(v_reuseFailAlloc_416_, 7, v_messages_360_);
lean_ctor_set(v_reuseFailAlloc_416_, 8, v_infoState_361_);
lean_ctor_set(v_reuseFailAlloc_416_, 9, v_snapshotTasks_362_);
v___x_369_ = v_reuseFailAlloc_416_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v_mctx_372_; lean_object* v_zetaDeltaFVarIds_373_; lean_object* v_postponed_374_; lean_object* v_diag_375_; lean_object* v_rewriteFires_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_414_; 
v___x_370_ = lean_st_ref_put(v___y_344_, v___x_369_);
v___x_371_ = lean_st_ref_take(v___y_342_);
v_mctx_372_ = lean_ctor_get(v___x_371_, 0);
v_zetaDeltaFVarIds_373_ = lean_ctor_get(v___x_371_, 2);
v_postponed_374_ = lean_ctor_get(v___x_371_, 3);
v_diag_375_ = lean_ctor_get(v___x_371_, 4);
v_rewriteFires_376_ = lean_ctor_get(v___x_371_, 5);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_371_, 1);
lean_dec(v_unused_415_);
v___x_378_ = v___x_371_;
v_isShared_379_ = v_isSharedCheck_414_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_rewriteFires_376_);
lean_inc(v_diag_375_);
lean_inc(v_postponed_374_);
lean_inc(v_zetaDeltaFVarIds_373_);
lean_inc(v_mctx_372_);
lean_dec(v___x_371_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_414_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v___x_380_);
v___x_382_ = v___x_378_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_mctx_372_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_zetaDeltaFVarIds_373_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_postponed_374_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_diag_375_);
lean_ctor_set(v_reuseFailAlloc_413_, 5, v_rewriteFires_376_);
v___x_382_ = v_reuseFailAlloc_413_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; lean_object* v_r_384_; 
v___x_383_ = lean_st_ref_put(v___y_342_, v___x_382_);
lean_inc(v___y_344_);
lean_inc_ref(v___y_343_);
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
v_r_384_ = lean_apply_5(v_x_339_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, lean_box(0));
if (lean_obj_tag(v_r_384_) == 0)
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_401_; 
v_a_385_ = lean_ctor_get(v_r_384_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v_r_384_);
if (v_isSharedCheck_401_ == 0)
{
v___x_387_ = v_r_384_;
v_isShared_388_ = v_isSharedCheck_401_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v_r_384_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_401_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
lean_inc(v_a_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set_tag(v___x_387_, 1);
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_400_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
lean_object* v___x_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v___x_391_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_344_, v_isExporting_351_, v___x_367_, v___y_342_, v___x_380_, v___x_390_);
lean_dec_ref(v___x_390_);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; 
v_unused_399_ = lean_ctor_get(v___x_391_, 0);
lean_dec(v_unused_399_);
v___x_393_ = v___x_391_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_dec(v___x_391_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v_a_385_);
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_385_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v_a_402_ = lean_ctor_get(v_r_384_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v_r_384_, 1);
v___x_403_ = lean_box(0);
v___x_404_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_344_, v_isExporting_351_, v___x_367_, v___y_342_, v___x_380_, v___x_403_);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_404_, 0);
lean_dec(v_unused_412_);
v___x_406_ = v___x_404_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_dec(v___x_404_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set_tag(v___x_406_, 1);
lean_ctor_set(v___x_406_, 0, v_a_402_);
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_402_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object* v_x_421_, lean_object* v_isExporting_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
uint8_t v_isExporting_boxed_428_; lean_object* v_res_429_; 
v_isExporting_boxed_428_ = lean_unbox(v_isExporting_422_);
v_res_429_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_421_, v_isExporting_boxed_428_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object* v_00_u03b1_430_, lean_object* v_x_431_, uint8_t v_isExporting_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_431_, v_isExporting_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object* v_00_u03b1_439_, lean_object* v_x_440_, lean_object* v_isExporting_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
uint8_t v_isExporting_boxed_447_; lean_object* v_res_448_; 
v_isExporting_boxed_447_ = lean_unbox(v_isExporting_441_);
v_res_448_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(v_00_u03b1_439_, v_x_440_, v_isExporting_boxed_447_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object* v_msg_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v___f_456_; lean_object* v___x_15860__overap_457_; lean_object* v___x_458_; 
v___f_456_ = ((lean_object*)(l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0));
v___x_15860__overap_457_ = lean_panic_fn_borrowed(v___f_456_, v_msg_450_);
lean_inc(v___y_454_);
lean_inc_ref(v___y_453_);
lean_inc(v___y_452_);
lean_inc_ref(v___y_451_);
v___x_458_ = lean_apply_5(v___x_15860__overap_457_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, lean_box(0));
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v_msg_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object* v_name_466_, lean_object* v_type_467_, lean_object* v_k_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
uint8_t v___x_474_; uint8_t v___x_475_; lean_object* v___x_476_; 
v___x_474_ = 0;
v___x_475_ = 0;
v___x_476_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_466_, v___x_474_, v_type_467_, v_k_468_, v___x_475_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object* v_name_477_, lean_object* v_type_478_, lean_object* v_k_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_477_, v_type_478_, v_k_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object* v___x_486_, lean_object* v_ism2_487_, lean_object* v_motive_488_, uint8_t v___x_489_, uint8_t v___x_490_, uint8_t v___x_491_, lean_object* v_a_492_, lean_object* v___f_493_, lean_object* v_zs1_494_, lean_object* v_val_495_, lean_object* v___x_496_, lean_object* v_indName_497_, lean_object* v_v_498_, lean_object* v___x_499_, lean_object* v_params_500_, lean_object* v___x_501_, lean_object* v_h_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = l_Array_append___redArg(v___x_486_, v_ism2_487_);
v___x_509_ = l_Lean_mkAppN(v_motive_488_, v___x_508_);
lean_dec_ref(v___x_508_);
v___x_510_ = l_Lean_Meta_mkLambdaFVars(v_ism2_487_, v___x_509_, v___x_489_, v___x_490_, v___x_489_, v___x_490_, v___x_491_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_512_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v___x_512_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_492_, v___f_493_, v___x_489_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___y_515_; lean_object* v___x_518_; uint8_t v___x_519_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_518_ = l_Lean_InductiveVal_numCtors(v_val_495_);
v___x_519_ = lean_nat_dec_eq(v___x_518_, v___x_496_);
lean_dec(v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
lean_dec(v___x_501_);
v___x_520_ = l_Lean_mkConstructorElimName(v_indName_497_, v_v_498_);
v___x_521_ = l_Lean_mkConst(v___x_520_, v___x_499_);
v___x_522_ = lean_mk_empty_array_with_capacity(v___x_496_);
v___x_523_ = lean_array_push(v___x_522_, v_a_511_);
v___x_524_ = l_Array_append___redArg(v_params_500_, v___x_523_);
lean_dec_ref(v___x_523_);
v___x_525_ = l_Array_append___redArg(v___x_524_, v_ism2_487_);
v___x_526_ = lean_unsigned_to_nat(2u);
v___x_527_ = lean_mk_empty_array_with_capacity(v___x_526_);
lean_inc_ref(v_h_502_);
v___x_528_ = lean_array_push(v___x_527_, v_h_502_);
v___x_529_ = lean_array_push(v___x_528_, v_a_513_);
v___x_530_ = l_Array_append___redArg(v___x_525_, v___x_529_);
lean_dec_ref(v___x_529_);
v___x_531_ = l_Lean_mkAppN(v___x_521_, v___x_530_);
lean_dec_ref(v___x_530_);
v___y_515_ = v___x_531_;
goto v___jp_514_;
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec(v_v_498_);
v___x_532_ = l_Lean_mkConst(v___x_501_, v___x_499_);
v___x_533_ = lean_mk_empty_array_with_capacity(v___x_496_);
lean_inc_ref(v___x_533_);
v___x_534_ = lean_array_push(v___x_533_, v_a_511_);
v___x_535_ = l_Array_append___redArg(v_params_500_, v___x_534_);
lean_dec_ref(v___x_534_);
v___x_536_ = l_Array_append___redArg(v___x_535_, v_ism2_487_);
v___x_537_ = lean_array_push(v___x_533_, v_a_513_);
v___x_538_ = l_Array_append___redArg(v___x_536_, v___x_537_);
lean_dec_ref(v___x_537_);
v___x_539_ = l_Lean_mkAppN(v___x_532_, v___x_538_);
lean_dec_ref(v___x_538_);
v___y_515_ = v___x_539_;
goto v___jp_514_;
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_array_push(v_zs1_494_, v_h_502_);
v___x_517_ = l_Lean_Meta_mkLambdaFVars(v___x_516_, v___y_515_, v___x_489_, v___x_490_, v___x_489_, v___x_490_, v___x_491_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
lean_dec_ref(v___x_516_);
return v___x_517_;
}
}
else
{
lean_dec(v_a_511_);
lean_dec_ref(v_h_502_);
lean_dec(v___x_501_);
lean_dec_ref(v_params_500_);
lean_dec(v___x_499_);
lean_dec(v_v_498_);
lean_dec_ref(v_zs1_494_);
return v___x_512_;
}
}
else
{
lean_dec_ref(v_h_502_);
lean_dec(v___x_501_);
lean_dec_ref(v_params_500_);
lean_dec(v___x_499_);
lean_dec(v_v_498_);
lean_dec_ref(v_zs1_494_);
lean_dec_ref(v___f_493_);
lean_dec_ref(v_a_492_);
return v___x_510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_540_ = _args[0];
lean_object* v_ism2_541_ = _args[1];
lean_object* v_motive_542_ = _args[2];
lean_object* v___x_543_ = _args[3];
lean_object* v___x_544_ = _args[4];
lean_object* v___x_545_ = _args[5];
lean_object* v_a_546_ = _args[6];
lean_object* v___f_547_ = _args[7];
lean_object* v_zs1_548_ = _args[8];
lean_object* v_val_549_ = _args[9];
lean_object* v___x_550_ = _args[10];
lean_object* v_indName_551_ = _args[11];
lean_object* v_v_552_ = _args[12];
lean_object* v___x_553_ = _args[13];
lean_object* v_params_554_ = _args[14];
lean_object* v___x_555_ = _args[15];
lean_object* v_h_556_ = _args[16];
lean_object* v___y_557_ = _args[17];
lean_object* v___y_558_ = _args[18];
lean_object* v___y_559_ = _args[19];
lean_object* v___y_560_ = _args[20];
lean_object* v___y_561_ = _args[21];
_start:
{
uint8_t v___x_20930__boxed_562_; uint8_t v___x_20931__boxed_563_; uint8_t v___x_20932__boxed_564_; lean_object* v_res_565_; 
v___x_20930__boxed_562_ = lean_unbox(v___x_543_);
v___x_20931__boxed_563_ = lean_unbox(v___x_544_);
v___x_20932__boxed_564_ = lean_unbox(v___x_545_);
v_res_565_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(v___x_540_, v_ism2_541_, v_motive_542_, v___x_20930__boxed_562_, v___x_20931__boxed_563_, v___x_20932__boxed_564_, v_a_546_, v___f_547_, v_zs1_548_, v_val_549_, v___x_550_, v_indName_551_, v_v_552_, v___x_553_, v_params_554_, v___x_555_, v_h_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v_indName_551_);
lean_dec(v___x_550_);
lean_dec_ref(v_val_549_);
lean_dec_ref(v_ism2_541_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object* v___x_566_, lean_object* v_alts_567_, lean_object* v___x_568_, lean_object* v_zs1_569_, uint8_t v___x_570_, uint8_t v___x_571_, uint8_t v___x_572_, lean_object* v_zs2_573_, lean_object* v_x_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_580_ = lean_array_get_borrowed(v___x_566_, v_alts_567_, v___x_568_);
v___x_581_ = l_Array_append___redArg(v_zs1_569_, v_zs2_573_);
lean_inc(v___x_580_);
v___x_582_ = l_Lean_mkAppN(v___x_580_, v___x_581_);
lean_dec_ref(v___x_581_);
v___x_583_ = l_Lean_Meta_mkLambdaFVars(v_zs2_573_, v___x_582_, v___x_570_, v___x_571_, v___x_570_, v___x_571_, v___x_572_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object* v___x_584_, lean_object* v_alts_585_, lean_object* v___x_586_, lean_object* v_zs1_587_, lean_object* v___x_588_, lean_object* v___x_589_, lean_object* v___x_590_, lean_object* v_zs2_591_, lean_object* v_x_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
uint8_t v___x_21042__boxed_598_; uint8_t v___x_21043__boxed_599_; uint8_t v___x_21044__boxed_600_; lean_object* v_res_601_; 
v___x_21042__boxed_598_ = lean_unbox(v___x_588_);
v___x_21043__boxed_599_ = lean_unbox(v___x_589_);
v___x_21044__boxed_600_ = lean_unbox(v___x_590_);
v_res_601_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(v___x_584_, v_alts_585_, v___x_586_, v_zs1_587_, v___x_21042__boxed_598_, v___x_21043__boxed_599_, v___x_21044__boxed_600_, v_zs2_591_, v_x_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec_ref(v_x_592_);
lean_dec_ref(v_zs2_591_);
lean_dec(v___x_586_);
lean_dec_ref(v_alts_585_);
lean_dec_ref(v___x_584_);
return v_res_601_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_602_; lean_object* v_dummy_603_; 
v___x_602_ = lean_box(0);
v_dummy_603_ = l_Lean_Expr_sort___override(v___x_602_);
return v_dummy_603_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_box(0);
v___x_611_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4));
v___x_612_ = l_Lean_mkConst(v___x_611_, v___x_610_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object* v___x_613_, lean_object* v_alts_614_, lean_object* v___x_615_, uint8_t v___x_616_, uint8_t v___x_617_, uint8_t v___x_618_, lean_object* v___x_619_, lean_object* v___x_620_, lean_object* v___x_621_, lean_object* v_ism2_622_, lean_object* v_motive_623_, lean_object* v_a_624_, lean_object* v_val_625_, lean_object* v_indName_626_, lean_object* v_v_627_, lean_object* v___x_628_, lean_object* v_params_629_, lean_object* v___x_630_, lean_object* v___x_631_, lean_object* v___x_632_, lean_object* v_zs1_633_, lean_object* v_ctorRet1_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___f_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_640_ = lean_box(v___x_616_);
v___x_641_ = lean_box(v___x_617_);
v___x_642_ = lean_box(v___x_618_);
lean_inc_ref(v_zs1_633_);
lean_inc(v___x_615_);
v___f_643_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_643_, 0, v___x_613_);
lean_closure_set(v___f_643_, 1, v_alts_614_);
lean_closure_set(v___f_643_, 2, v___x_615_);
lean_closure_set(v___f_643_, 3, v_zs1_633_);
lean_closure_set(v___f_643_, 4, v___x_640_);
lean_closure_set(v___f_643_, 5, v___x_641_);
lean_closure_set(v___f_643_, 6, v___x_642_);
v___x_644_ = l_Lean_mkAppN(v___x_619_, v_zs1_633_);
lean_inc(v___y_638_);
lean_inc_ref(v___y_637_);
lean_inc(v___y_636_);
lean_inc_ref(v___y_635_);
v___x_645_ = lean_whnf(v_ctorRet1_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v_dummy_647_; lean_object* v_nargs_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_645_, 1);
v_dummy_647_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_648_ = l_Lean_Expr_getAppNumArgs(v_a_646_);
lean_inc(v_nargs_648_);
v___x_649_ = lean_mk_array(v_nargs_648_, v_dummy_647_);
v___x_650_ = lean_nat_sub(v_nargs_648_, v___x_620_);
lean_dec(v_nargs_648_);
v___x_651_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_646_, v___x_649_, v___x_650_);
v___x_652_ = lean_array_get_size(v___x_651_);
v___x_653_ = l_Array_toSubarray___redArg(v___x_651_, v___x_621_, v___x_652_);
v___x_654_ = l_Subarray_copy___redArg(v___x_653_);
v___x_655_ = lean_array_push(v___x_654_, v___x_644_);
v___x_656_ = lean_box(v___x_616_);
v___x_657_ = lean_box(v___x_617_);
v___x_658_ = lean_box(v___x_618_);
lean_inc(v___x_620_);
v___f_659_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed), 22, 16);
lean_closure_set(v___f_659_, 0, v___x_655_);
lean_closure_set(v___f_659_, 1, v_ism2_622_);
lean_closure_set(v___f_659_, 2, v_motive_623_);
lean_closure_set(v___f_659_, 3, v___x_656_);
lean_closure_set(v___f_659_, 4, v___x_657_);
lean_closure_set(v___f_659_, 5, v___x_658_);
lean_closure_set(v___f_659_, 6, v_a_624_);
lean_closure_set(v___f_659_, 7, v___f_643_);
lean_closure_set(v___f_659_, 8, v_zs1_633_);
lean_closure_set(v___f_659_, 9, v_val_625_);
lean_closure_set(v___f_659_, 10, v___x_620_);
lean_closure_set(v___f_659_, 11, v_indName_626_);
lean_closure_set(v___f_659_, 12, v_v_627_);
lean_closure_set(v___f_659_, 13, v___x_628_);
lean_closure_set(v___f_659_, 14, v_params_629_);
lean_closure_set(v___f_659_, 15, v___x_630_);
v___x_660_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2));
v___x_661_ = l_Lean_Level_ofNat(v___x_620_);
lean_dec(v___x_620_);
v___x_662_ = lean_box(0);
v___x_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = l_Lean_mkConst(v___x_660_, v___x_663_);
v___x_665_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5);
v___x_666_ = l_Lean_mkRawNatLit(v___x_615_);
v___x_667_ = l_Lean_mkApp3(v___x_664_, v___x_665_, v___x_631_, v___x_666_);
v___x_668_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_632_, v___x_667_, v___f_659_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
return v___x_668_;
}
else
{
lean_dec_ref(v___x_644_);
lean_dec_ref(v___f_643_);
lean_dec_ref(v_zs1_633_);
lean_dec(v___x_632_);
lean_dec_ref(v___x_631_);
lean_dec(v___x_630_);
lean_dec_ref(v_params_629_);
lean_dec(v___x_628_);
lean_dec(v_v_627_);
lean_dec(v_indName_626_);
lean_dec_ref(v_val_625_);
lean_dec_ref(v_a_624_);
lean_dec_ref(v_motive_623_);
lean_dec_ref(v_ism2_622_);
lean_dec(v___x_621_);
lean_dec(v___x_620_);
lean_dec(v___x_615_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_669_ = _args[0];
lean_object* v_alts_670_ = _args[1];
lean_object* v___x_671_ = _args[2];
lean_object* v___x_672_ = _args[3];
lean_object* v___x_673_ = _args[4];
lean_object* v___x_674_ = _args[5];
lean_object* v___x_675_ = _args[6];
lean_object* v___x_676_ = _args[7];
lean_object* v___x_677_ = _args[8];
lean_object* v_ism2_678_ = _args[9];
lean_object* v_motive_679_ = _args[10];
lean_object* v_a_680_ = _args[11];
lean_object* v_val_681_ = _args[12];
lean_object* v_indName_682_ = _args[13];
lean_object* v_v_683_ = _args[14];
lean_object* v___x_684_ = _args[15];
lean_object* v_params_685_ = _args[16];
lean_object* v___x_686_ = _args[17];
lean_object* v___x_687_ = _args[18];
lean_object* v___x_688_ = _args[19];
lean_object* v_zs1_689_ = _args[20];
lean_object* v_ctorRet1_690_ = _args[21];
lean_object* v___y_691_ = _args[22];
lean_object* v___y_692_ = _args[23];
lean_object* v___y_693_ = _args[24];
lean_object* v___y_694_ = _args[25];
lean_object* v___y_695_ = _args[26];
_start:
{
uint8_t v___x_21103__boxed_696_; uint8_t v___x_21104__boxed_697_; uint8_t v___x_21105__boxed_698_; lean_object* v_res_699_; 
v___x_21103__boxed_696_ = lean_unbox(v___x_672_);
v___x_21104__boxed_697_ = lean_unbox(v___x_673_);
v___x_21105__boxed_698_ = lean_unbox(v___x_674_);
v_res_699_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(v___x_669_, v_alts_670_, v___x_671_, v___x_21103__boxed_696_, v___x_21104__boxed_697_, v___x_21105__boxed_698_, v___x_675_, v___x_676_, v___x_677_, v_ism2_678_, v_motive_679_, v_a_680_, v_val_681_, v_indName_682_, v_v_683_, v___x_684_, v_params_685_, v___x_686_, v___x_687_, v___x_688_, v_zs1_689_, v_ctorRet1_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object* v_tail_703_, lean_object* v_params_704_, lean_object* v_alts_705_, lean_object* v___x_706_, lean_object* v_ism2_707_, lean_object* v_motive_708_, lean_object* v_val_709_, lean_object* v_indName_710_, lean_object* v___x_711_, lean_object* v___x_712_, lean_object* v___x_713_, size_t v_sz_714_, size_t v_i_715_, lean_object* v_bs_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = lean_usize_dec_lt(v_i_715_, v_sz_714_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec_ref(v___x_713_);
lean_dec(v___x_712_);
lean_dec(v___x_711_);
lean_dec(v_indName_710_);
lean_dec_ref(v_val_709_);
lean_dec_ref(v_motive_708_);
lean_dec_ref(v_ism2_707_);
lean_dec(v___x_706_);
lean_dec_ref(v_alts_705_);
lean_dec_ref(v_params_704_);
lean_dec(v_tail_703_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_bs_716_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; uint8_t v___x_725_; uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v_v_729_; lean_object* v___x_730_; lean_object* v_bs_x27_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_724_ = l_Lean_instInhabitedExpr;
v___x_725_ = 0;
v___x_726_ = 1;
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v_v_729_ = lean_array_uget(v_bs_716_, v_i_715_);
v___x_730_ = lean_unsigned_to_nat(0u);
v_bs_x27_731_ = lean_array_uset(v_bs_716_, v_i_715_, v___x_730_);
v___x_732_ = lean_usize_to_nat(v_i_715_);
lean_inc(v_tail_703_);
lean_inc(v_v_729_);
v___x_733_ = l_Lean_mkConst(v_v_729_, v_tail_703_);
v___x_734_ = l_Lean_mkAppN(v___x_733_, v_params_704_);
lean_inc(v___y_720_);
lean_inc_ref(v___y_719_);
lean_inc(v___y_718_);
lean_inc_ref(v___y_717_);
lean_inc_ref(v___x_734_);
v___x_735_ = lean_infer_type(v___x_734_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___f_740_; lean_object* v___x_741_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc_n(v_a_736_, 2);
lean_dec_ref_known(v___x_735_, 1);
v___x_737_ = lean_box(v___x_725_);
v___x_738_ = lean_box(v___x_722_);
v___x_739_ = lean_box(v___x_726_);
lean_inc_ref(v___x_713_);
lean_inc(v___x_712_);
lean_inc_ref(v_params_704_);
lean_inc(v___x_711_);
lean_inc(v_indName_710_);
lean_inc_ref(v_val_709_);
lean_inc_ref(v_motive_708_);
lean_inc_ref(v_ism2_707_);
lean_inc(v___x_706_);
lean_inc_ref(v_alts_705_);
v___f_740_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed), 27, 20);
lean_closure_set(v___f_740_, 0, v___x_724_);
lean_closure_set(v___f_740_, 1, v_alts_705_);
lean_closure_set(v___f_740_, 2, v___x_732_);
lean_closure_set(v___f_740_, 3, v___x_737_);
lean_closure_set(v___f_740_, 4, v___x_738_);
lean_closure_set(v___f_740_, 5, v___x_739_);
lean_closure_set(v___f_740_, 6, v___x_734_);
lean_closure_set(v___f_740_, 7, v___x_727_);
lean_closure_set(v___f_740_, 8, v___x_706_);
lean_closure_set(v___f_740_, 9, v_ism2_707_);
lean_closure_set(v___f_740_, 10, v_motive_708_);
lean_closure_set(v___f_740_, 11, v_a_736_);
lean_closure_set(v___f_740_, 12, v_val_709_);
lean_closure_set(v___f_740_, 13, v_indName_710_);
lean_closure_set(v___f_740_, 14, v_v_729_);
lean_closure_set(v___f_740_, 15, v___x_711_);
lean_closure_set(v___f_740_, 16, v_params_704_);
lean_closure_set(v___f_740_, 17, v___x_712_);
lean_closure_set(v___f_740_, 18, v___x_713_);
lean_closure_set(v___f_740_, 19, v___x_728_);
v___x_741_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_736_, v___f_740_, v___x_725_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; size_t v___x_743_; size_t v___x_744_; lean_object* v___x_745_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = ((size_t)1ULL);
v___x_744_ = lean_usize_add(v_i_715_, v___x_743_);
v___x_745_ = lean_array_uset(v_bs_x27_731_, v_i_715_, v_a_742_);
v_i_715_ = v___x_744_;
v_bs_716_ = v___x_745_;
goto _start;
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v_bs_x27_731_);
lean_dec_ref(v___x_713_);
lean_dec(v___x_712_);
lean_dec(v___x_711_);
lean_dec(v_indName_710_);
lean_dec_ref(v_val_709_);
lean_dec_ref(v_motive_708_);
lean_dec_ref(v_ism2_707_);
lean_dec(v___x_706_);
lean_dec_ref(v_alts_705_);
lean_dec_ref(v_params_704_);
lean_dec(v_tail_703_);
v_a_747_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_741_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_741_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec_ref(v___x_734_);
lean_dec(v___x_732_);
lean_dec_ref(v_bs_x27_731_);
lean_dec(v_v_729_);
lean_dec_ref(v___x_713_);
lean_dec(v___x_712_);
lean_dec(v___x_711_);
lean_dec(v_indName_710_);
lean_dec_ref(v_val_709_);
lean_dec_ref(v_motive_708_);
lean_dec_ref(v_ism2_707_);
lean_dec(v___x_706_);
lean_dec_ref(v_alts_705_);
lean_dec_ref(v_params_704_);
lean_dec(v_tail_703_);
v_a_755_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_735_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_735_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_tail_763_ = _args[0];
lean_object* v_params_764_ = _args[1];
lean_object* v_alts_765_ = _args[2];
lean_object* v___x_766_ = _args[3];
lean_object* v_ism2_767_ = _args[4];
lean_object* v_motive_768_ = _args[5];
lean_object* v_val_769_ = _args[6];
lean_object* v_indName_770_ = _args[7];
lean_object* v___x_771_ = _args[8];
lean_object* v___x_772_ = _args[9];
lean_object* v___x_773_ = _args[10];
lean_object* v_sz_774_ = _args[11];
lean_object* v_i_775_ = _args[12];
lean_object* v_bs_776_ = _args[13];
lean_object* v___y_777_ = _args[14];
lean_object* v___y_778_ = _args[15];
lean_object* v___y_779_ = _args[16];
lean_object* v___y_780_ = _args[17];
lean_object* v___y_781_ = _args[18];
_start:
{
size_t v_sz_boxed_782_; size_t v_i_boxed_783_; lean_object* v_res_784_; 
v_sz_boxed_782_ = lean_unbox_usize(v_sz_774_);
lean_dec(v_sz_774_);
v_i_boxed_783_ = lean_unbox_usize(v_i_775_);
lean_dec(v_i_775_);
v_res_784_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_763_, v_params_764_, v_alts_765_, v___x_766_, v_ism2_767_, v_motive_768_, v_val_769_, v_indName_770_, v___x_771_, v___x_772_, v___x_773_, v_sz_boxed_782_, v_i_boxed_783_, v_bs_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object* v_motive_785_, lean_object* v___x_786_, lean_object* v_a_787_, lean_object* v_ism1_788_, uint8_t v___x_789_, uint8_t v___x_790_, uint8_t v___x_791_, lean_object* v_name_792_, lean_object* v___x_793_, lean_object* v_params_794_, lean_object* v___x_795_, lean_object* v_tail_796_, lean_object* v_alts_797_, lean_object* v_numParams_798_, lean_object* v_ism2_799_, lean_object* v_val_800_, lean_object* v_indName_801_, lean_object* v___x_802_, lean_object* v___x_803_, lean_object* v___x_804_, lean_object* v_heq_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
lean_inc_ref(v_motive_785_);
v___x_811_ = l_Lean_mkAppN(v_motive_785_, v___x_786_);
v___x_812_ = l_Lean_mkArrow(v_a_787_, v___x_811_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_814_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_a_813_);
lean_dec_ref_known(v___x_812_, 1);
v___x_814_ = l_Lean_Meta_mkLambdaFVars(v_ism1_788_, v_a_813_, v___x_789_, v___x_790_, v___x_789_, v___x_790_, v___x_791_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; size_t v_sz_820_; size_t v___x_821_; lean_object* v___x_822_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
lean_inc(v___x_793_);
v___x_816_ = l_Lean_mkConst(v_name_792_, v___x_793_);
v___x_817_ = l_Lean_mkAppN(v___x_816_, v_params_794_);
v___x_818_ = l_Lean_Expr_app___override(v___x_817_, v_a_815_);
v___x_819_ = l_Lean_mkAppN(v___x_818_, v_ism1_788_);
v_sz_820_ = lean_array_size(v___x_795_);
v___x_821_ = ((size_t)0ULL);
lean_inc_ref(v_motive_785_);
lean_inc_ref(v_ism2_799_);
lean_inc_ref(v_alts_797_);
lean_inc_ref(v_params_794_);
v___x_822_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_796_, v_params_794_, v_alts_797_, v_numParams_798_, v_ism2_799_, v_motive_785_, v_val_800_, v_indName_801_, v___x_793_, v___x_802_, v___x_803_, v_sz_820_, v___x_821_, v___x_795_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
v___x_824_ = l_Lean_mkAppN(v___x_819_, v_a_823_);
lean_dec(v_a_823_);
lean_inc_ref(v_heq_805_);
v___x_825_ = l_Lean_Meta_mkEqSymm(v_heq_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
v___x_827_ = l_Lean_Expr_app___override(v___x_824_, v_a_826_);
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_804_);
lean_inc_ref(v___x_828_);
v___x_829_ = lean_array_push(v___x_828_, v_motive_785_);
v___x_830_ = l_Array_append___redArg(v_params_794_, v___x_829_);
lean_dec_ref(v___x_829_);
v___x_831_ = l_Array_append___redArg(v___x_830_, v_ism1_788_);
v___x_832_ = l_Array_append___redArg(v___x_831_, v_ism2_799_);
lean_dec_ref(v_ism2_799_);
v___x_833_ = lean_array_push(v___x_828_, v_heq_805_);
v___x_834_ = l_Array_append___redArg(v___x_832_, v___x_833_);
lean_dec_ref(v___x_833_);
v___x_835_ = l_Array_append___redArg(v___x_834_, v_alts_797_);
lean_dec_ref(v_alts_797_);
v___x_836_ = l_Lean_Meta_mkLambdaFVars(v___x_835_, v___x_827_, v___x_789_, v___x_790_, v___x_789_, v___x_790_, v___x_791_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
lean_dec_ref(v___x_835_);
return v___x_836_;
}
else
{
lean_dec_ref(v___x_824_);
lean_dec_ref(v_heq_805_);
lean_dec_ref(v_ism2_799_);
lean_dec_ref(v_alts_797_);
lean_dec_ref(v_params_794_);
lean_dec_ref(v_motive_785_);
return v___x_825_;
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec_ref(v___x_819_);
lean_dec_ref(v_heq_805_);
lean_dec_ref(v_ism2_799_);
lean_dec_ref(v_alts_797_);
lean_dec_ref(v_params_794_);
lean_dec_ref(v_motive_785_);
v_a_837_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_822_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_822_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
else
{
lean_dec_ref(v_heq_805_);
lean_dec_ref(v___x_803_);
lean_dec(v___x_802_);
lean_dec(v_indName_801_);
lean_dec_ref(v_val_800_);
lean_dec_ref(v_ism2_799_);
lean_dec(v_numParams_798_);
lean_dec_ref(v_alts_797_);
lean_dec(v_tail_796_);
lean_dec_ref(v___x_795_);
lean_dec_ref(v_params_794_);
lean_dec(v___x_793_);
lean_dec(v_name_792_);
lean_dec_ref(v_motive_785_);
return v___x_814_;
}
}
else
{
lean_dec_ref(v_heq_805_);
lean_dec_ref(v___x_803_);
lean_dec(v___x_802_);
lean_dec(v_indName_801_);
lean_dec_ref(v_val_800_);
lean_dec_ref(v_ism2_799_);
lean_dec(v_numParams_798_);
lean_dec_ref(v_alts_797_);
lean_dec(v_tail_796_);
lean_dec_ref(v___x_795_);
lean_dec_ref(v_params_794_);
lean_dec(v___x_793_);
lean_dec(v_name_792_);
lean_dec_ref(v_motive_785_);
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object** _args){
lean_object* v_motive_845_ = _args[0];
lean_object* v___x_846_ = _args[1];
lean_object* v_a_847_ = _args[2];
lean_object* v_ism1_848_ = _args[3];
lean_object* v___x_849_ = _args[4];
lean_object* v___x_850_ = _args[5];
lean_object* v___x_851_ = _args[6];
lean_object* v_name_852_ = _args[7];
lean_object* v___x_853_ = _args[8];
lean_object* v_params_854_ = _args[9];
lean_object* v___x_855_ = _args[10];
lean_object* v_tail_856_ = _args[11];
lean_object* v_alts_857_ = _args[12];
lean_object* v_numParams_858_ = _args[13];
lean_object* v_ism2_859_ = _args[14];
lean_object* v_val_860_ = _args[15];
lean_object* v_indName_861_ = _args[16];
lean_object* v___x_862_ = _args[17];
lean_object* v___x_863_ = _args[18];
lean_object* v___x_864_ = _args[19];
lean_object* v_heq_865_ = _args[20];
lean_object* v___y_866_ = _args[21];
lean_object* v___y_867_ = _args[22];
lean_object* v___y_868_ = _args[23];
lean_object* v___y_869_ = _args[24];
lean_object* v___y_870_ = _args[25];
_start:
{
uint8_t v___x_21345__boxed_871_; uint8_t v___x_21346__boxed_872_; uint8_t v___x_21347__boxed_873_; lean_object* v_res_874_; 
v___x_21345__boxed_871_ = lean_unbox(v___x_849_);
v___x_21346__boxed_872_ = lean_unbox(v___x_850_);
v___x_21347__boxed_873_ = lean_unbox(v___x_851_);
v_res_874_ = l_Lean_mkCasesOnSameCtorHet___lam__0(v_motive_845_, v___x_846_, v_a_847_, v_ism1_848_, v___x_21345__boxed_871_, v___x_21346__boxed_872_, v___x_21347__boxed_873_, v_name_852_, v___x_853_, v_params_854_, v___x_855_, v_tail_856_, v_alts_857_, v_numParams_858_, v_ism2_859_, v_val_860_, v_indName_861_, v___x_862_, v___x_863_, v___x_864_, v_heq_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___x_864_);
lean_dec_ref(v_ism1_848_);
lean_dec_ref(v___x_846_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object* v_indName_875_, lean_object* v_tail_876_, lean_object* v_params_877_, lean_object* v_ism1_878_, lean_object* v_ism2_879_, lean_object* v_motive_880_, lean_object* v___x_881_, uint8_t v___x_882_, uint8_t v___x_883_, uint8_t v___x_884_, lean_object* v_name_885_, lean_object* v___x_886_, lean_object* v___x_887_, lean_object* v_numParams_888_, lean_object* v_val_889_, lean_object* v___x_890_, lean_object* v___x_891_, lean_object* v_alts_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
lean_inc(v_indName_875_);
v___x_898_ = l_Lean_mkCtorIdxName(v_indName_875_);
lean_inc(v_tail_876_);
v___x_899_ = l_Lean_mkConst(v___x_898_, v_tail_876_);
lean_inc_ref_n(v_params_877_, 2);
v___x_900_ = l_Array_append___redArg(v_params_877_, v_ism1_878_);
lean_inc_ref(v___x_899_);
v___x_901_ = l_Lean_mkAppN(v___x_899_, v___x_900_);
lean_dec_ref(v___x_900_);
v___x_902_ = l_Array_append___redArg(v_params_877_, v_ism2_879_);
v___x_903_ = l_Lean_mkAppN(v___x_899_, v___x_902_);
lean_dec_ref(v___x_902_);
lean_inc_ref(v___x_903_);
lean_inc_ref(v___x_901_);
v___x_904_ = l_Lean_Meta_mkEq(v___x_901_, v___x_903_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
lean_inc_ref(v___x_903_);
v___x_906_ = l_Lean_Meta_mkEq(v___x_903_, v___x_901_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = lean_box(v___x_882_);
v___x_909_ = lean_box(v___x_883_);
v___x_910_ = lean_box(v___x_884_);
v___f_911_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed), 26, 20);
lean_closure_set(v___f_911_, 0, v_motive_880_);
lean_closure_set(v___f_911_, 1, v___x_881_);
lean_closure_set(v___f_911_, 2, v_a_907_);
lean_closure_set(v___f_911_, 3, v_ism1_878_);
lean_closure_set(v___f_911_, 4, v___x_908_);
lean_closure_set(v___f_911_, 5, v___x_909_);
lean_closure_set(v___f_911_, 6, v___x_910_);
lean_closure_set(v___f_911_, 7, v_name_885_);
lean_closure_set(v___f_911_, 8, v___x_886_);
lean_closure_set(v___f_911_, 9, v_params_877_);
lean_closure_set(v___f_911_, 10, v___x_887_);
lean_closure_set(v___f_911_, 11, v_tail_876_);
lean_closure_set(v___f_911_, 12, v_alts_892_);
lean_closure_set(v___f_911_, 13, v_numParams_888_);
lean_closure_set(v___f_911_, 14, v_ism2_879_);
lean_closure_set(v___f_911_, 15, v_val_889_);
lean_closure_set(v___f_911_, 16, v_indName_875_);
lean_closure_set(v___f_911_, 17, v___x_890_);
lean_closure_set(v___f_911_, 18, v___x_903_);
lean_closure_set(v___f_911_, 19, v___x_891_);
v___x_912_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_913_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_912_, v_a_905_, v___f_911_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
return v___x_913_;
}
else
{
lean_dec(v_a_905_);
lean_dec_ref(v___x_903_);
lean_dec_ref(v_alts_892_);
lean_dec(v___x_891_);
lean_dec(v___x_890_);
lean_dec_ref(v_val_889_);
lean_dec(v_numParams_888_);
lean_dec_ref(v___x_887_);
lean_dec(v___x_886_);
lean_dec(v_name_885_);
lean_dec_ref(v___x_881_);
lean_dec_ref(v_motive_880_);
lean_dec_ref(v_ism2_879_);
lean_dec_ref(v_ism1_878_);
lean_dec_ref(v_params_877_);
lean_dec(v_tail_876_);
lean_dec(v_indName_875_);
return v___x_906_;
}
}
else
{
lean_dec_ref(v___x_903_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v_alts_892_);
lean_dec(v___x_891_);
lean_dec(v___x_890_);
lean_dec_ref(v_val_889_);
lean_dec(v_numParams_888_);
lean_dec_ref(v___x_887_);
lean_dec(v___x_886_);
lean_dec(v_name_885_);
lean_dec_ref(v___x_881_);
lean_dec_ref(v_motive_880_);
lean_dec_ref(v_ism2_879_);
lean_dec_ref(v_ism1_878_);
lean_dec_ref(v_params_877_);
lean_dec(v_tail_876_);
lean_dec(v_indName_875_);
return v___x_904_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object** _args){
lean_object* v_indName_914_ = _args[0];
lean_object* v_tail_915_ = _args[1];
lean_object* v_params_916_ = _args[2];
lean_object* v_ism1_917_ = _args[3];
lean_object* v_ism2_918_ = _args[4];
lean_object* v_motive_919_ = _args[5];
lean_object* v___x_920_ = _args[6];
lean_object* v___x_921_ = _args[7];
lean_object* v___x_922_ = _args[8];
lean_object* v___x_923_ = _args[9];
lean_object* v_name_924_ = _args[10];
lean_object* v___x_925_ = _args[11];
lean_object* v___x_926_ = _args[12];
lean_object* v_numParams_927_ = _args[13];
lean_object* v_val_928_ = _args[14];
lean_object* v___x_929_ = _args[15];
lean_object* v___x_930_ = _args[16];
lean_object* v_alts_931_ = _args[17];
lean_object* v___y_932_ = _args[18];
lean_object* v___y_933_ = _args[19];
lean_object* v___y_934_ = _args[20];
lean_object* v___y_935_ = _args[21];
lean_object* v___y_936_ = _args[22];
_start:
{
uint8_t v___x_21468__boxed_937_; uint8_t v___x_21469__boxed_938_; uint8_t v___x_21470__boxed_939_; lean_object* v_res_940_; 
v___x_21468__boxed_937_ = lean_unbox(v___x_921_);
v___x_21469__boxed_938_ = lean_unbox(v___x_922_);
v___x_21470__boxed_939_ = lean_unbox(v___x_923_);
v_res_940_ = l_Lean_mkCasesOnSameCtorHet___lam__1(v_indName_914_, v_tail_915_, v_params_916_, v_ism1_917_, v_ism2_918_, v_motive_919_, v___x_920_, v___x_21468__boxed_937_, v___x_21469__boxed_938_, v___x_21470__boxed_939_, v_name_924_, v___x_925_, v___x_926_, v_numParams_927_, v_val_928_, v___x_929_, v___x_930_, v_alts_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object* v_snd_941_, lean_object* v_x_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_snd_941_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object* v_snd_949_, lean_object* v_x_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(v_snd_949_, v_x_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec_ref(v_x_950_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t v_sz_957_, size_t v_i_958_, lean_object* v_bs_959_){
_start:
{
uint8_t v___x_960_; 
v___x_960_ = lean_usize_dec_lt(v_i_958_, v_sz_957_);
if (v___x_960_ == 0)
{
return v_bs_959_;
}
else
{
lean_object* v_v_961_; lean_object* v_fst_962_; lean_object* v_snd_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_977_; 
v_v_961_ = lean_array_uget(v_bs_959_, v_i_958_);
v_fst_962_ = lean_ctor_get(v_v_961_, 0);
v_snd_963_ = lean_ctor_get(v_v_961_, 1);
v_isSharedCheck_977_ = !lean_is_exclusive(v_v_961_);
if (v_isSharedCheck_977_ == 0)
{
v___x_965_ = v_v_961_;
v_isShared_966_ = v_isSharedCheck_977_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_snd_963_);
lean_inc(v_fst_962_);
lean_dec(v_v_961_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_977_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v_bs_x27_968_; lean_object* v___f_969_; lean_object* v___x_971_; 
v___x_967_ = lean_unsigned_to_nat(0u);
v_bs_x27_968_ = lean_array_uset(v_bs_959_, v_i_958_, v___x_967_);
v___f_969_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed), 7, 1);
lean_closure_set(v___f_969_, 0, v_snd_963_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v___f_969_);
v___x_971_ = v___x_965_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_fst_962_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v___f_969_);
v___x_971_ = v_reuseFailAlloc_976_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
size_t v___x_972_; size_t v___x_973_; lean_object* v___x_974_; 
v___x_972_ = ((size_t)1ULL);
v___x_973_ = lean_usize_add(v_i_958_, v___x_972_);
v___x_974_ = lean_array_uset(v_bs_x27_968_, v_i_958_, v___x_971_);
v_i_958_ = v___x_973_;
v_bs_959_ = v___x_974_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object* v_sz_978_, lean_object* v_i_979_, lean_object* v_bs_980_){
_start:
{
size_t v_sz_boxed_981_; size_t v_i_boxed_982_; lean_object* v_res_983_; 
v_sz_boxed_981_ = lean_unbox_usize(v_sz_978_);
lean_dec(v_sz_978_);
v_i_boxed_982_ = lean_unbox_usize(v_i_979_);
lean_dec(v_i_979_);
v_res_983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_boxed_981_, v_i_boxed_982_, v_bs_980_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object* v___x_984_, lean_object* v___x_985_, lean_object* v_a_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_20343__overap_992_; lean_object* v___x_993_; 
v___x_20343__overap_992_ = l_instInhabitedOfMonad___redArg(v___x_984_, v___x_985_);
lean_inc(v___y_990_);
lean_inc_ref(v___y_989_);
lean_inc(v___y_988_);
lean_inc_ref(v___y_987_);
v___x_993_ = lean_apply_5(v___x_20343__overap_992_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, lean_box(0));
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object* v___x_994_, lean_object* v___x_995_, lean_object* v_a_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(v___x_994_, v___x_995_, v_a_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec_ref(v_a_996_);
return v_res_1002_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_instMonadEIO___redArg();
return v___x_1003_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0);
v___x_1005_ = l_StateRefT_x27_instMonad___redArg(v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object* v_acc_1010_, lean_object* v_declInfos_1011_, lean_object* v_k_1012_, lean_object* v_kind_1013_, lean_object* v_x_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
uint8_t v_kind_boxed_1020_; lean_object* v_res_1021_; 
v_kind_boxed_1020_ = lean_unbox(v_kind_1013_);
v_res_1021_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(v_acc_1010_, v_declInfos_1011_, v_k_1012_, v_kind_boxed_1020_, v_x_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object* v_declInfos_1022_, lean_object* v_k_1023_, uint8_t v_kind_1024_, lean_object* v_acc_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; lean_object* v_toApplicative_1032_; lean_object* v_toFunctor_1033_; lean_object* v_toSeq_1034_; lean_object* v_toSeqLeft_1035_; lean_object* v_toSeqRight_1036_; lean_object* v___f_1037_; lean_object* v___f_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___x_1041_; lean_object* v___f_1042_; lean_object* v___f_1043_; lean_object* v___f_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v_toApplicative_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1098_; 
v___x_1031_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_1032_ = lean_ctor_get(v___x_1031_, 0);
v_toFunctor_1033_ = lean_ctor_get(v_toApplicative_1032_, 0);
v_toSeq_1034_ = lean_ctor_get(v_toApplicative_1032_, 2);
v_toSeqLeft_1035_ = lean_ctor_get(v_toApplicative_1032_, 3);
v_toSeqRight_1036_ = lean_ctor_get(v_toApplicative_1032_, 4);
v___f_1037_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2));
v___f_1038_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3));
lean_inc_ref_n(v_toFunctor_1033_, 2);
v___f_1039_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1039_, 0, v_toFunctor_1033_);
v___f_1040_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1040_, 0, v_toFunctor_1033_);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___f_1039_);
lean_ctor_set(v___x_1041_, 1, v___f_1040_);
lean_inc(v_toSeqRight_1036_);
v___f_1042_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1042_, 0, v_toSeqRight_1036_);
lean_inc(v_toSeqLeft_1035_);
v___f_1043_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1043_, 0, v_toSeqLeft_1035_);
lean_inc(v_toSeq_1034_);
v___f_1044_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1044_, 0, v_toSeq_1034_);
v___x_1045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1041_);
lean_ctor_set(v___x_1045_, 1, v___f_1037_);
lean_ctor_set(v___x_1045_, 2, v___f_1044_);
lean_ctor_set(v___x_1045_, 3, v___f_1043_);
lean_ctor_set(v___x_1045_, 4, v___f_1042_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___f_1038_);
v___x_1047_ = l_StateRefT_x27_instMonad___redArg(v___x_1046_);
v_toApplicative_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1098_ == 0)
{
lean_object* v_unused_1099_; 
v_unused_1099_ = lean_ctor_get(v___x_1047_, 1);
lean_dec(v_unused_1099_);
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1098_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_toApplicative_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1098_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v_toFunctor_1052_; lean_object* v_toSeq_1053_; lean_object* v_toSeqLeft_1054_; lean_object* v_toSeqRight_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1096_; 
v_toFunctor_1052_ = lean_ctor_get(v_toApplicative_1048_, 0);
v_toSeq_1053_ = lean_ctor_get(v_toApplicative_1048_, 2);
v_toSeqLeft_1054_ = lean_ctor_get(v_toApplicative_1048_, 3);
v_toSeqRight_1055_ = lean_ctor_get(v_toApplicative_1048_, 4);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_toApplicative_1048_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; 
v_unused_1097_ = lean_ctor_get(v_toApplicative_1048_, 1);
lean_dec(v_unused_1097_);
v___x_1057_ = v_toApplicative_1048_;
v_isShared_1058_ = v_isSharedCheck_1096_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_toSeqRight_1055_);
lean_inc(v_toSeqLeft_1054_);
lean_inc(v_toSeq_1053_);
lean_inc(v_toFunctor_1052_);
lean_dec(v_toApplicative_1048_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1096_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___f_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; lean_object* v___f_1062_; lean_object* v___x_1063_; lean_object* v___f_1064_; lean_object* v___f_1065_; lean_object* v___f_1066_; lean_object* v___x_1068_; 
v___f_1059_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4));
v___f_1060_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5));
lean_inc_ref(v_toFunctor_1052_);
v___f_1061_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1061_, 0, v_toFunctor_1052_);
v___f_1062_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1062_, 0, v_toFunctor_1052_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___f_1061_);
lean_ctor_set(v___x_1063_, 1, v___f_1062_);
v___f_1064_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1064_, 0, v_toSeqRight_1055_);
v___f_1065_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1065_, 0, v_toSeqLeft_1054_);
v___f_1066_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1066_, 0, v_toSeq_1053_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 4, v___f_1064_);
lean_ctor_set(v___x_1057_, 3, v___f_1065_);
lean_ctor_set(v___x_1057_, 2, v___f_1066_);
lean_ctor_set(v___x_1057_, 1, v___f_1059_);
lean_ctor_set(v___x_1057_, 0, v___x_1063_);
v___x_1068_ = v___x_1057_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___f_1059_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v___f_1066_);
lean_ctor_set(v_reuseFailAlloc_1095_, 3, v___f_1065_);
lean_ctor_set(v_reuseFailAlloc_1095_, 4, v___f_1064_);
v___x_1068_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_object* v___x_1070_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___f_1060_);
lean_ctor_set(v___x_1050_, 0, v___x_1068_);
v___x_1070_ = v___x_1050_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___f_1060_);
v___x_1070_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1071_ = lean_array_get_size(v_acc_1025_);
v___x_1072_ = lean_array_get_size(v_declInfos_1022_);
v___x_1073_ = lean_nat_dec_lt(v___x_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
lean_dec_ref(v___x_1070_);
lean_dec_ref(v_declInfos_1022_);
lean_inc(v___y_1029_);
lean_inc_ref(v___y_1028_);
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
v___x_1074_ = lean_apply_6(v_k_1023_, v_acc_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___f_1078_; lean_object* v___f_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v_snd_1084_; lean_object* v_fst_1085_; lean_object* v_fst_1086_; lean_object* v_snd_1087_; lean_object* v___x_1088_; lean_object* v___f_1089_; lean_object* v___x_1090_; 
v___x_1075_ = lean_box(0);
v___x_1076_ = 0;
v___x_1077_ = l_Lean_instInhabitedExpr;
v___f_1078_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1078_, 0, v___x_1070_);
lean_closure_set(v___f_1078_, 1, v___x_1077_);
v___f_1079_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1079_, 0, v___f_1078_);
v___x_1080_ = lean_box(v___x_1076_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___f_1079_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1075_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_array_get(v___x_1082_, v_declInfos_1022_, v___x_1071_);
lean_dec_ref_known(v___x_1082_, 2);
v_snd_1084_ = lean_ctor_get(v___x_1083_, 1);
lean_inc(v_snd_1084_);
v_fst_1085_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_fst_1085_);
lean_dec(v___x_1083_);
v_fst_1086_ = lean_ctor_get(v_snd_1084_, 0);
lean_inc(v_fst_1086_);
v_snd_1087_ = lean_ctor_get(v_snd_1084_, 1);
lean_inc(v_snd_1087_);
lean_dec(v_snd_1084_);
v___x_1088_ = lean_box(v_kind_1024_);
lean_inc_ref(v_acc_1025_);
v___f_1089_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed), 10, 4);
lean_closure_set(v___f_1089_, 0, v_acc_1025_);
lean_closure_set(v___f_1089_, 1, v_declInfos_1022_);
lean_closure_set(v___f_1089_, 2, v_k_1023_);
lean_closure_set(v___f_1089_, 3, v___x_1088_);
lean_inc(v___y_1029_);
lean_inc_ref(v___y_1028_);
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
v___x_1090_ = lean_apply_6(v_snd_1087_, v_acc_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; uint8_t v___x_1092_; lean_object* v___x_1093_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = lean_unbox(v_fst_1086_);
lean_dec(v_fst_1086_);
v___x_1093_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_1085_, v___x_1092_, v_a_1091_, v___f_1089_, v_kind_1024_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
return v___x_1093_;
}
else
{
lean_dec_ref(v___f_1089_);
lean_dec(v_fst_1086_);
lean_dec(v_fst_1085_);
return v___x_1090_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object* v_acc_1100_, lean_object* v_declInfos_1101_, lean_object* v_k_1102_, uint8_t v_kind_1103_, lean_object* v_x_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = lean_array_push(v_acc_1100_, v_x_1104_);
v___x_1111_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1101_, v_k_1102_, v_kind_1103_, v___x_1110_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object* v_declInfos_1112_, lean_object* v_k_1113_, lean_object* v_kind_1114_, lean_object* v_acc_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
uint8_t v_kind_boxed_1121_; lean_object* v_res_1122_; 
v_kind_boxed_1121_ = lean_unbox(v_kind_1114_);
v_res_1122_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1112_, v_k_1113_, v_kind_boxed_1121_, v_acc_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object* v_declInfos_1125_, lean_object* v_k_1126_, uint8_t v_kind_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_1134_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1125_, v_k_1126_, v_kind_1127_, v___x_1133_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object* v_declInfos_1135_, lean_object* v_k_1136_, lean_object* v_kind_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
uint8_t v_kind_boxed_1143_; lean_object* v_res_1144_; 
v_kind_boxed_1143_ = lean_unbox(v_kind_1137_);
v_res_1144_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v_declInfos_1135_, v_k_1136_, v_kind_boxed_1143_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t v_sz_1145_, size_t v_i_1146_, lean_object* v_bs_1147_){
_start:
{
uint8_t v___x_1148_; 
v___x_1148_ = lean_usize_dec_lt(v_i_1146_, v_sz_1145_);
if (v___x_1148_ == 0)
{
return v_bs_1147_;
}
else
{
lean_object* v_v_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1167_; 
v_v_1149_ = lean_array_uget(v_bs_1147_, v_i_1146_);
v_fst_1150_ = lean_ctor_get(v_v_1149_, 0);
v_snd_1151_ = lean_ctor_get(v_v_1149_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_v_1149_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1153_ = v_v_1149_;
v_isShared_1154_ = v_isSharedCheck_1167_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_snd_1151_);
lean_inc(v_fst_1150_);
lean_dec(v_v_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1167_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v_bs_x27_1156_; uint8_t v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1155_ = lean_unsigned_to_nat(0u);
v_bs_x27_1156_ = lean_array_uset(v_bs_1147_, v_i_1146_, v___x_1155_);
v___x_1157_ = 0;
v___x_1158_ = lean_box(v___x_1157_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1158_);
v___x_1160_ = v___x_1153_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_snd_1151_);
v___x_1160_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; size_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; 
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_fst_1150_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_add(v_i_1146_, v___x_1162_);
v___x_1164_ = lean_array_uset(v_bs_x27_1156_, v_i_1146_, v___x_1161_);
v_i_1146_ = v___x_1163_;
v_bs_1147_ = v___x_1164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object* v_sz_1168_, lean_object* v_i_1169_, lean_object* v_bs_1170_){
_start:
{
size_t v_sz_boxed_1171_; size_t v_i_boxed_1172_; lean_object* v_res_1173_; 
v_sz_boxed_1171_ = lean_unbox_usize(v_sz_1168_);
lean_dec(v_sz_1168_);
v_i_boxed_1172_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_res_1173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_boxed_1171_, v_i_boxed_1172_, v_bs_1170_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object* v_declInfos_1174_, lean_object* v_k_1175_, uint8_t v_kind_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
size_t v_sz_1182_; size_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_sz_1182_ = lean_array_size(v_declInfos_1174_);
v___x_1183_ = ((size_t)0ULL);
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_1182_, v___x_1183_, v_declInfos_1174_);
v___x_1185_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v___x_1184_, v_k_1175_, v_kind_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object* v_declInfos_1186_, lean_object* v_k_1187_, lean_object* v_kind_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
uint8_t v_kind_boxed_1194_; lean_object* v_res_1195_; 
v_kind_boxed_1194_ = lean_unbox(v_kind_1188_);
v_res_1195_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v_declInfos_1186_, v_k_1187_, v_kind_boxed_1194_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object* v_declInfos_1196_, lean_object* v_k_1197_, uint8_t v_kind_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
size_t v_sz_1204_; size_t v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_sz_1204_ = lean_array_size(v_declInfos_1196_);
v___x_1205_ = ((size_t)0ULL);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_1204_, v___x_1205_, v_declInfos_1196_);
v___x_1207_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v___x_1206_, v_k_1197_, v_kind_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object* v_declInfos_1208_, lean_object* v_k_1209_, lean_object* v_kind_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
uint8_t v_kind_boxed_1216_; lean_object* v_res_1217_; 
v_kind_boxed_1216_ = lean_unbox(v_kind_1210_);
v_res_1217_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_declInfos_1208_, v_k_1209_, v_kind_boxed_1216_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object* v___x_1219_, lean_object* v_dummy_1220_, lean_object* v___x_1221_, lean_object* v___x_1222_, lean_object* v___x_1223_, lean_object* v_motive_1224_, lean_object* v_zs1_1225_, uint8_t v___x_1226_, uint8_t v___x_1227_, uint8_t v___x_1228_, lean_object* v_v_1229_, lean_object* v___x_1230_, lean_object* v_zs2_1231_, lean_object* v_ctorRet2_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = l_Lean_mkAppN(v___x_1219_, v_zs2_1231_);
lean_inc(v___y_1236_);
lean_inc_ref(v___y_1235_);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
v___x_1239_ = lean_whnf(v_ctorRet2_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v_nargs_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v_nargs_1241_ = l_Lean_Expr_getAppNumArgs(v_a_1240_);
lean_inc(v_nargs_1241_);
v___x_1242_ = lean_mk_array(v_nargs_1241_, v_dummy_1220_);
v___x_1243_ = lean_nat_sub(v_nargs_1241_, v___x_1221_);
lean_dec(v_nargs_1241_);
v___x_1244_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1240_, v___x_1242_, v___x_1243_);
v___x_1245_ = lean_array_get_size(v___x_1244_);
v___x_1246_ = l_Array_toSubarray___redArg(v___x_1244_, v___x_1222_, v___x_1245_);
v___x_1247_ = l_Subarray_copy___redArg(v___x_1246_);
v___x_1248_ = lean_array_push(v___x_1247_, v___x_1238_);
v___x_1249_ = l_Array_append___redArg(v___x_1223_, v___x_1248_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = l_Lean_mkAppN(v_motive_1224_, v___x_1249_);
lean_dec_ref(v___x_1249_);
v___x_1251_ = l_Array_append___redArg(v_zs1_1225_, v_zs2_1231_);
v___x_1252_ = l_Lean_Meta_mkForallFVars(v___x_1251_, v___x_1250_, v___x_1226_, v___x_1227_, v___x_1227_, v___x_1228_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
lean_dec_ref(v___x_1251_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1272_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1272_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1272_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___y_1258_; 
if (lean_obj_tag(v_v_1229_) == 1)
{
lean_object* v_str_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_str_1263_ = lean_ctor_get(v_v_1229_, 1);
lean_inc_ref(v_str_1263_);
lean_dec_ref_known(v_v_1229_, 2);
v___x_1264_ = lean_box(0);
v___x_1265_ = l_Lean_Name_str___override(v___x_1264_, v_str_1263_);
v___y_1258_ = v___x_1265_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v_v_1229_);
v___x_1266_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0));
v___x_1267_ = lean_nat_add(v___x_1230_, v___x_1221_);
v___x_1268_ = l_Nat_reprFast(v___x_1267_);
v___x_1269_ = lean_string_append(v___x_1266_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = lean_box(0);
v___x_1271_ = l_Lean_Name_str___override(v___x_1270_, v___x_1269_);
v___y_1258_ = v___x_1271_;
goto v___jp_1257_;
}
v___jp_1257_:
{
lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___y_1258_);
lean_ctor_set(v___x_1259_, 1, v_a_1253_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v___x_1259_);
v___x_1261_ = v___x_1255_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
lean_dec(v_v_1229_);
v_a_1273_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1252_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1252_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
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
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
lean_dec_ref(v___x_1238_);
lean_dec(v_v_1229_);
lean_dec_ref(v_zs1_1225_);
lean_dec_ref(v_motive_1224_);
lean_dec_ref(v___x_1223_);
lean_dec(v___x_1222_);
lean_dec_ref(v_dummy_1220_);
v_a_1281_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1239_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1239_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_1289_ = _args[0];
lean_object* v_dummy_1290_ = _args[1];
lean_object* v___x_1291_ = _args[2];
lean_object* v___x_1292_ = _args[3];
lean_object* v___x_1293_ = _args[4];
lean_object* v_motive_1294_ = _args[5];
lean_object* v_zs1_1295_ = _args[6];
lean_object* v___x_1296_ = _args[7];
lean_object* v___x_1297_ = _args[8];
lean_object* v___x_1298_ = _args[9];
lean_object* v_v_1299_ = _args[10];
lean_object* v___x_1300_ = _args[11];
lean_object* v_zs2_1301_ = _args[12];
lean_object* v_ctorRet2_1302_ = _args[13];
lean_object* v___y_1303_ = _args[14];
lean_object* v___y_1304_ = _args[15];
lean_object* v___y_1305_ = _args[16];
lean_object* v___y_1306_ = _args[17];
lean_object* v___y_1307_ = _args[18];
_start:
{
uint8_t v___x_21907__boxed_1308_; uint8_t v___x_21908__boxed_1309_; uint8_t v___x_21909__boxed_1310_; lean_object* v_res_1311_; 
v___x_21907__boxed_1308_ = lean_unbox(v___x_1296_);
v___x_21908__boxed_1309_ = lean_unbox(v___x_1297_);
v___x_21909__boxed_1310_ = lean_unbox(v___x_1298_);
v_res_1311_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(v___x_1289_, v_dummy_1290_, v___x_1291_, v___x_1292_, v___x_1293_, v_motive_1294_, v_zs1_1295_, v___x_21907__boxed_1308_, v___x_21908__boxed_1309_, v___x_21909__boxed_1310_, v_v_1299_, v___x_1300_, v_zs2_1301_, v_ctorRet2_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v_zs2_1301_);
lean_dec(v___x_1300_);
lean_dec(v___x_1291_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object* v___x_1312_, lean_object* v___x_1313_, lean_object* v___x_1314_, lean_object* v_motive_1315_, uint8_t v___x_1316_, uint8_t v___x_1317_, uint8_t v___x_1318_, lean_object* v_v_1319_, lean_object* v___x_1320_, lean_object* v_a_1321_, lean_object* v_zs1_1322_, lean_object* v_ctorRet1_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
lean_inc_ref(v___x_1312_);
v___x_1329_ = l_Lean_mkAppN(v___x_1312_, v_zs1_1322_);
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1326_);
lean_inc(v___y_1325_);
lean_inc_ref(v___y_1324_);
v___x_1330_ = lean_whnf(v_ctorRet1_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v_dummy_1332_; lean_object* v_nargs_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___f_1344_; lean_object* v___x_1345_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v_dummy_1332_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_1333_ = l_Lean_Expr_getAppNumArgs(v_a_1331_);
lean_inc(v_nargs_1333_);
v___x_1334_ = lean_mk_array(v_nargs_1333_, v_dummy_1332_);
v___x_1335_ = lean_nat_sub(v_nargs_1333_, v___x_1313_);
lean_dec(v_nargs_1333_);
v___x_1336_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1331_, v___x_1334_, v___x_1335_);
v___x_1337_ = lean_array_get_size(v___x_1336_);
lean_inc(v___x_1314_);
v___x_1338_ = l_Array_toSubarray___redArg(v___x_1336_, v___x_1314_, v___x_1337_);
v___x_1339_ = l_Subarray_copy___redArg(v___x_1338_);
v___x_1340_ = lean_array_push(v___x_1339_, v___x_1329_);
v___x_1341_ = lean_box(v___x_1316_);
v___x_1342_ = lean_box(v___x_1317_);
v___x_1343_ = lean_box(v___x_1318_);
v___f_1344_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed), 19, 12);
lean_closure_set(v___f_1344_, 0, v___x_1312_);
lean_closure_set(v___f_1344_, 1, v_dummy_1332_);
lean_closure_set(v___f_1344_, 2, v___x_1313_);
lean_closure_set(v___f_1344_, 3, v___x_1314_);
lean_closure_set(v___f_1344_, 4, v___x_1340_);
lean_closure_set(v___f_1344_, 5, v_motive_1315_);
lean_closure_set(v___f_1344_, 6, v_zs1_1322_);
lean_closure_set(v___f_1344_, 7, v___x_1341_);
lean_closure_set(v___f_1344_, 8, v___x_1342_);
lean_closure_set(v___f_1344_, 9, v___x_1343_);
lean_closure_set(v___f_1344_, 10, v_v_1319_);
lean_closure_set(v___f_1344_, 11, v___x_1320_);
v___x_1345_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1321_, v___f_1344_, v___x_1316_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v___x_1345_;
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
lean_dec_ref(v___x_1329_);
lean_dec_ref(v_zs1_1322_);
lean_dec_ref(v_a_1321_);
lean_dec(v___x_1320_);
lean_dec(v_v_1319_);
lean_dec_ref(v_motive_1315_);
lean_dec(v___x_1314_);
lean_dec(v___x_1313_);
lean_dec_ref(v___x_1312_);
v_a_1346_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1330_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1330_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1354_ = _args[0];
lean_object* v___x_1355_ = _args[1];
lean_object* v___x_1356_ = _args[2];
lean_object* v_motive_1357_ = _args[3];
lean_object* v___x_1358_ = _args[4];
lean_object* v___x_1359_ = _args[5];
lean_object* v___x_1360_ = _args[6];
lean_object* v_v_1361_ = _args[7];
lean_object* v___x_1362_ = _args[8];
lean_object* v_a_1363_ = _args[9];
lean_object* v_zs1_1364_ = _args[10];
lean_object* v_ctorRet1_1365_ = _args[11];
lean_object* v___y_1366_ = _args[12];
lean_object* v___y_1367_ = _args[13];
lean_object* v___y_1368_ = _args[14];
lean_object* v___y_1369_ = _args[15];
lean_object* v___y_1370_ = _args[16];
_start:
{
uint8_t v___x_22048__boxed_1371_; uint8_t v___x_22049__boxed_1372_; uint8_t v___x_22050__boxed_1373_; lean_object* v_res_1374_; 
v___x_22048__boxed_1371_ = lean_unbox(v___x_1358_);
v___x_22049__boxed_1372_ = lean_unbox(v___x_1359_);
v___x_22050__boxed_1373_ = lean_unbox(v___x_1360_);
v_res_1374_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(v___x_1354_, v___x_1355_, v___x_1356_, v_motive_1357_, v___x_22048__boxed_1371_, v___x_22049__boxed_1372_, v___x_22050__boxed_1373_, v_v_1361_, v___x_1362_, v_a_1363_, v_zs1_1364_, v_ctorRet1_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object* v_tail_1375_, lean_object* v_params_1376_, lean_object* v___x_1377_, lean_object* v_motive_1378_, size_t v_sz_1379_, size_t v_i_1380_, lean_object* v_bs_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v___x_1387_; 
v___x_1387_ = lean_usize_dec_lt(v_i_1380_, v_sz_1379_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; 
lean_dec_ref(v_motive_1378_);
lean_dec(v___x_1377_);
lean_dec(v_tail_1375_);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v_bs_1381_);
return v___x_1388_;
}
else
{
uint8_t v___x_1389_; uint8_t v___x_1390_; lean_object* v___x_1391_; lean_object* v_v_1392_; lean_object* v___x_1393_; lean_object* v_bs_x27_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1389_ = 0;
v___x_1390_ = 1;
v___x_1391_ = lean_unsigned_to_nat(1u);
v_v_1392_ = lean_array_uget(v_bs_1381_, v_i_1380_);
v___x_1393_ = lean_unsigned_to_nat(0u);
v_bs_x27_1394_ = lean_array_uset(v_bs_1381_, v_i_1380_, v___x_1393_);
v___x_1395_ = lean_usize_to_nat(v_i_1380_);
lean_inc(v_tail_1375_);
lean_inc(v_v_1392_);
v___x_1396_ = l_Lean_mkConst(v_v_1392_, v_tail_1375_);
v___x_1397_ = l_Lean_mkAppN(v___x_1396_, v_params_1376_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc_ref(v___x_1397_);
v___x_1398_ = lean_infer_type(v___x_1397_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___f_1403_; lean_object* v___x_1404_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc_n(v_a_1399_, 2);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = lean_box(v___x_1389_);
v___x_1401_ = lean_box(v___x_1387_);
v___x_1402_ = lean_box(v___x_1390_);
lean_inc_ref(v_motive_1378_);
lean_inc(v___x_1377_);
v___f_1403_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_1403_, 0, v___x_1397_);
lean_closure_set(v___f_1403_, 1, v___x_1391_);
lean_closure_set(v___f_1403_, 2, v___x_1377_);
lean_closure_set(v___f_1403_, 3, v_motive_1378_);
lean_closure_set(v___f_1403_, 4, v___x_1400_);
lean_closure_set(v___f_1403_, 5, v___x_1401_);
lean_closure_set(v___f_1403_, 6, v___x_1402_);
lean_closure_set(v___f_1403_, 7, v_v_1392_);
lean_closure_set(v___f_1403_, 8, v___x_1395_);
lean_closure_set(v___f_1403_, 9, v_a_1399_);
v___x_1404_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1399_, v___f_1403_, v___x_1389_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; size_t v___x_1406_; size_t v___x_1407_; lean_object* v___x_1408_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = ((size_t)1ULL);
v___x_1407_ = lean_usize_add(v_i_1380_, v___x_1406_);
v___x_1408_ = lean_array_uset(v_bs_x27_1394_, v_i_1380_, v_a_1405_);
v_i_1380_ = v___x_1407_;
v_bs_1381_ = v___x_1408_;
goto _start;
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec_ref(v_bs_x27_1394_);
lean_dec_ref(v_motive_1378_);
lean_dec(v___x_1377_);
lean_dec(v_tail_1375_);
v_a_1410_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1404_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1404_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
lean_dec_ref(v___x_1397_);
lean_dec(v___x_1395_);
lean_dec_ref(v_bs_x27_1394_);
lean_dec(v_v_1392_);
lean_dec_ref(v_motive_1378_);
lean_dec(v___x_1377_);
lean_dec(v_tail_1375_);
v_a_1418_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1398_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1398_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object* v_tail_1426_, lean_object* v_params_1427_, lean_object* v___x_1428_, lean_object* v_motive_1429_, lean_object* v_sz_1430_, lean_object* v_i_1431_, lean_object* v_bs_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
size_t v_sz_boxed_1438_; size_t v_i_boxed_1439_; lean_object* v_res_1440_; 
v_sz_boxed_1438_ = lean_unbox_usize(v_sz_1430_);
lean_dec(v_sz_1430_);
v_i_boxed_1439_ = lean_unbox_usize(v_i_1431_);
lean_dec(v_i_1431_);
v_res_1440_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1426_, v_params_1427_, v___x_1428_, v_motive_1429_, v_sz_boxed_1438_, v_i_boxed_1439_, v_bs_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec_ref(v_params_1427_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object* v_ctors_1441_, lean_object* v_indName_1442_, lean_object* v_tail_1443_, lean_object* v_params_1444_, lean_object* v_ism1_1445_, lean_object* v_ism2_1446_, lean_object* v___x_1447_, uint8_t v___x_1448_, uint8_t v___x_1449_, uint8_t v___x_1450_, lean_object* v_name_1451_, lean_object* v___x_1452_, lean_object* v_numParams_1453_, lean_object* v_val_1454_, lean_object* v___x_1455_, lean_object* v___x_1456_, lean_object* v_motive_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___f_1467_; size_t v_sz_1468_; size_t v___x_1469_; lean_object* v___x_1470_; 
v___x_1463_ = lean_array_mk(v_ctors_1441_);
v___x_1464_ = lean_box(v___x_1448_);
v___x_1465_ = lean_box(v___x_1449_);
v___x_1466_ = lean_box(v___x_1450_);
lean_inc(v_numParams_1453_);
lean_inc_ref(v___x_1463_);
lean_inc_ref(v_motive_1457_);
lean_inc_ref(v_params_1444_);
lean_inc(v_tail_1443_);
v___f_1467_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__1___boxed), 23, 17);
lean_closure_set(v___f_1467_, 0, v_indName_1442_);
lean_closure_set(v___f_1467_, 1, v_tail_1443_);
lean_closure_set(v___f_1467_, 2, v_params_1444_);
lean_closure_set(v___f_1467_, 3, v_ism1_1445_);
lean_closure_set(v___f_1467_, 4, v_ism2_1446_);
lean_closure_set(v___f_1467_, 5, v_motive_1457_);
lean_closure_set(v___f_1467_, 6, v___x_1447_);
lean_closure_set(v___f_1467_, 7, v___x_1464_);
lean_closure_set(v___f_1467_, 8, v___x_1465_);
lean_closure_set(v___f_1467_, 9, v___x_1466_);
lean_closure_set(v___f_1467_, 10, v_name_1451_);
lean_closure_set(v___f_1467_, 11, v___x_1452_);
lean_closure_set(v___f_1467_, 12, v___x_1463_);
lean_closure_set(v___f_1467_, 13, v_numParams_1453_);
lean_closure_set(v___f_1467_, 14, v_val_1454_);
lean_closure_set(v___f_1467_, 15, v___x_1455_);
lean_closure_set(v___f_1467_, 16, v___x_1456_);
v_sz_1468_ = lean_array_size(v___x_1463_);
v___x_1469_ = ((size_t)0ULL);
v___x_1470_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1443_, v_params_1444_, v_numParams_1453_, v_motive_1457_, v_sz_1468_, v___x_1469_, v___x_1463_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec_ref(v_params_1444_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; uint8_t v___x_1472_; lean_object* v___x_1473_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v___x_1472_ = 0;
v___x_1473_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_a_1471_, v___f_1467_, v___x_1472_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
return v___x_1473_;
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec_ref(v___f_1467_);
v_a_1474_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1470_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1470_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
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
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object** _args){
lean_object* v_ctors_1482_ = _args[0];
lean_object* v_indName_1483_ = _args[1];
lean_object* v_tail_1484_ = _args[2];
lean_object* v_params_1485_ = _args[3];
lean_object* v_ism1_1486_ = _args[4];
lean_object* v_ism2_1487_ = _args[5];
lean_object* v___x_1488_ = _args[6];
lean_object* v___x_1489_ = _args[7];
lean_object* v___x_1490_ = _args[8];
lean_object* v___x_1491_ = _args[9];
lean_object* v_name_1492_ = _args[10];
lean_object* v___x_1493_ = _args[11];
lean_object* v_numParams_1494_ = _args[12];
lean_object* v_val_1495_ = _args[13];
lean_object* v___x_1496_ = _args[14];
lean_object* v___x_1497_ = _args[15];
lean_object* v_motive_1498_ = _args[16];
lean_object* v___y_1499_ = _args[17];
lean_object* v___y_1500_ = _args[18];
lean_object* v___y_1501_ = _args[19];
lean_object* v___y_1502_ = _args[20];
lean_object* v___y_1503_ = _args[21];
_start:
{
uint8_t v___x_22228__boxed_1504_; uint8_t v___x_22229__boxed_1505_; uint8_t v___x_22230__boxed_1506_; lean_object* v_res_1507_; 
v___x_22228__boxed_1504_ = lean_unbox(v___x_1489_);
v___x_22229__boxed_1505_ = lean_unbox(v___x_1490_);
v___x_22230__boxed_1506_ = lean_unbox(v___x_1491_);
v_res_1507_ = l_Lean_mkCasesOnSameCtorHet___lam__2(v_ctors_1482_, v_indName_1483_, v_tail_1484_, v_params_1485_, v_ism1_1486_, v_ism2_1487_, v___x_1488_, v___x_22228__boxed_1504_, v___x_22229__boxed_1505_, v___x_22230__boxed_1506_, v_name_1492_, v___x_1493_, v_numParams_1494_, v_val_1495_, v___x_1496_, v___x_1497_, v_motive_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object* v_ism1_1511_, lean_object* v_head_1512_, lean_object* v_ctors_1513_, lean_object* v_indName_1514_, lean_object* v_tail_1515_, lean_object* v_params_1516_, lean_object* v_name_1517_, lean_object* v___x_1518_, lean_object* v_numParams_1519_, lean_object* v_val_1520_, lean_object* v___x_1521_, lean_object* v___x_1522_, lean_object* v_ism2_1523_, lean_object* v_x_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; uint8_t v___x_1533_; uint8_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___x_1539_; 
lean_inc_ref(v_ism1_1511_);
v___x_1530_ = l_Array_append___redArg(v_ism1_1511_, v_ism2_1523_);
v___x_1531_ = l_Lean_mkSort(v_head_1512_);
v___x_1532_ = 0;
v___x_1533_ = 1;
v___x_1534_ = 1;
v___x_1535_ = lean_box(v___x_1532_);
v___x_1536_ = lean_box(v___x_1533_);
v___x_1537_ = lean_box(v___x_1534_);
lean_inc_ref(v___x_1530_);
v___f_1538_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__2___boxed), 22, 16);
lean_closure_set(v___f_1538_, 0, v_ctors_1513_);
lean_closure_set(v___f_1538_, 1, v_indName_1514_);
lean_closure_set(v___f_1538_, 2, v_tail_1515_);
lean_closure_set(v___f_1538_, 3, v_params_1516_);
lean_closure_set(v___f_1538_, 4, v_ism1_1511_);
lean_closure_set(v___f_1538_, 5, v_ism2_1523_);
lean_closure_set(v___f_1538_, 6, v___x_1530_);
lean_closure_set(v___f_1538_, 7, v___x_1535_);
lean_closure_set(v___f_1538_, 8, v___x_1536_);
lean_closure_set(v___f_1538_, 9, v___x_1537_);
lean_closure_set(v___f_1538_, 10, v_name_1517_);
lean_closure_set(v___f_1538_, 11, v___x_1518_);
lean_closure_set(v___f_1538_, 12, v_numParams_1519_);
lean_closure_set(v___f_1538_, 13, v_val_1520_);
lean_closure_set(v___f_1538_, 14, v___x_1521_);
lean_closure_set(v___f_1538_, 15, v___x_1522_);
v___x_1539_ = l_Lean_Meta_mkForallFVars(v___x_1530_, v___x_1531_, v___x_1532_, v___x_1533_, v___x_1533_, v___x_1534_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
lean_dec_ref(v___x_1530_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1541_; uint8_t v___x_1542_; lean_object* v___x_1543_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v___x_1541_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_1542_ = 0;
v___x_1543_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_1541_, v___x_1534_, v_a_1540_, v___f_1538_, v___x_1542_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
return v___x_1543_;
}
else
{
lean_dec_ref(v___f_1538_);
return v___x_1539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object** _args){
lean_object* v_ism1_1544_ = _args[0];
lean_object* v_head_1545_ = _args[1];
lean_object* v_ctors_1546_ = _args[2];
lean_object* v_indName_1547_ = _args[3];
lean_object* v_tail_1548_ = _args[4];
lean_object* v_params_1549_ = _args[5];
lean_object* v_name_1550_ = _args[6];
lean_object* v___x_1551_ = _args[7];
lean_object* v_numParams_1552_ = _args[8];
lean_object* v_val_1553_ = _args[9];
lean_object* v___x_1554_ = _args[10];
lean_object* v___x_1555_ = _args[11];
lean_object* v_ism2_1556_ = _args[12];
lean_object* v_x_1557_ = _args[13];
lean_object* v___y_1558_ = _args[14];
lean_object* v___y_1559_ = _args[15];
lean_object* v___y_1560_ = _args[16];
lean_object* v___y_1561_ = _args[17];
lean_object* v___y_1562_ = _args[18];
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_mkCasesOnSameCtorHet___lam__3(v_ism1_1544_, v_head_1545_, v_ctors_1546_, v_indName_1547_, v_tail_1548_, v_params_1549_, v_name_1550_, v___x_1551_, v_numParams_1552_, v_val_1553_, v___x_1554_, v___x_1555_, v_ism2_1556_, v_x_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec_ref(v_x_1557_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object* v_head_1564_, lean_object* v_ctors_1565_, lean_object* v_indName_1566_, lean_object* v_tail_1567_, lean_object* v_params_1568_, lean_object* v_name_1569_, lean_object* v___x_1570_, lean_object* v_numParams_1571_, lean_object* v_val_1572_, lean_object* v___x_1573_, lean_object* v___x_1574_, lean_object* v_t_1575_, lean_object* v___x_1576_, lean_object* v_ism1_1577_, lean_object* v_x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v___f_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; 
v___f_1584_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__3___boxed), 19, 12);
lean_closure_set(v___f_1584_, 0, v_ism1_1577_);
lean_closure_set(v___f_1584_, 1, v_head_1564_);
lean_closure_set(v___f_1584_, 2, v_ctors_1565_);
lean_closure_set(v___f_1584_, 3, v_indName_1566_);
lean_closure_set(v___f_1584_, 4, v_tail_1567_);
lean_closure_set(v___f_1584_, 5, v_params_1568_);
lean_closure_set(v___f_1584_, 6, v_name_1569_);
lean_closure_set(v___f_1584_, 7, v___x_1570_);
lean_closure_set(v___f_1584_, 8, v_numParams_1571_);
lean_closure_set(v___f_1584_, 9, v_val_1572_);
lean_closure_set(v___f_1584_, 10, v___x_1573_);
lean_closure_set(v___f_1584_, 11, v___x_1574_);
v___x_1585_ = 0;
v___x_1586_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1575_, v___x_1576_, v___f_1584_, v___x_1585_, v___x_1585_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object** _args){
lean_object* v_head_1587_ = _args[0];
lean_object* v_ctors_1588_ = _args[1];
lean_object* v_indName_1589_ = _args[2];
lean_object* v_tail_1590_ = _args[3];
lean_object* v_params_1591_ = _args[4];
lean_object* v_name_1592_ = _args[5];
lean_object* v___x_1593_ = _args[6];
lean_object* v_numParams_1594_ = _args[7];
lean_object* v_val_1595_ = _args[8];
lean_object* v___x_1596_ = _args[9];
lean_object* v___x_1597_ = _args[10];
lean_object* v_t_1598_ = _args[11];
lean_object* v___x_1599_ = _args[12];
lean_object* v_ism1_1600_ = _args[13];
lean_object* v_x_1601_ = _args[14];
lean_object* v___y_1602_ = _args[15];
lean_object* v___y_1603_ = _args[16];
lean_object* v___y_1604_ = _args[17];
lean_object* v___y_1605_ = _args[18];
lean_object* v___y_1606_ = _args[19];
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_mkCasesOnSameCtorHet___lam__4(v_head_1587_, v_ctors_1588_, v_indName_1589_, v_tail_1590_, v_params_1591_, v_name_1592_, v___x_1593_, v_numParams_1594_, v_val_1595_, v___x_1596_, v___x_1597_, v_t_1598_, v___x_1599_, v_ism1_1600_, v_x_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec_ref(v_x_1601_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object* v_numIndices_1608_, lean_object* v___x_1609_, lean_object* v_head_1610_, lean_object* v_ctors_1611_, lean_object* v_indName_1612_, lean_object* v_tail_1613_, lean_object* v_params_1614_, lean_object* v_name_1615_, lean_object* v___x_1616_, lean_object* v_numParams_1617_, lean_object* v_val_1618_, lean_object* v___x_1619_, lean_object* v_x_1620_, lean_object* v_t_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___f_1629_; uint8_t v___x_1630_; lean_object* v___x_1631_; 
v___x_1627_ = lean_nat_add(v_numIndices_1608_, v___x_1609_);
v___x_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_inc_ref(v___x_1628_);
lean_inc_ref(v_t_1621_);
v___f_1629_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__4___boxed), 20, 13);
lean_closure_set(v___f_1629_, 0, v_head_1610_);
lean_closure_set(v___f_1629_, 1, v_ctors_1611_);
lean_closure_set(v___f_1629_, 2, v_indName_1612_);
lean_closure_set(v___f_1629_, 3, v_tail_1613_);
lean_closure_set(v___f_1629_, 4, v_params_1614_);
lean_closure_set(v___f_1629_, 5, v_name_1615_);
lean_closure_set(v___f_1629_, 6, v___x_1616_);
lean_closure_set(v___f_1629_, 7, v_numParams_1617_);
lean_closure_set(v___f_1629_, 8, v_val_1618_);
lean_closure_set(v___f_1629_, 9, v___x_1619_);
lean_closure_set(v___f_1629_, 10, v___x_1609_);
lean_closure_set(v___f_1629_, 11, v_t_1621_);
lean_closure_set(v___f_1629_, 12, v___x_1628_);
v___x_1630_ = 0;
v___x_1631_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1621_, v___x_1628_, v___f_1629_, v___x_1630_, v___x_1630_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_1632_ = _args[0];
lean_object* v___x_1633_ = _args[1];
lean_object* v_head_1634_ = _args[2];
lean_object* v_ctors_1635_ = _args[3];
lean_object* v_indName_1636_ = _args[4];
lean_object* v_tail_1637_ = _args[5];
lean_object* v_params_1638_ = _args[6];
lean_object* v_name_1639_ = _args[7];
lean_object* v___x_1640_ = _args[8];
lean_object* v_numParams_1641_ = _args[9];
lean_object* v_val_1642_ = _args[10];
lean_object* v___x_1643_ = _args[11];
lean_object* v_x_1644_ = _args[12];
lean_object* v_t_1645_ = _args[13];
lean_object* v___y_1646_ = _args[14];
lean_object* v___y_1647_ = _args[15];
lean_object* v___y_1648_ = _args[16];
lean_object* v___y_1649_ = _args[17];
lean_object* v___y_1650_ = _args[18];
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_mkCasesOnSameCtorHet___lam__5(v_numIndices_1632_, v___x_1633_, v_head_1634_, v_ctors_1635_, v_indName_1636_, v_tail_1637_, v_params_1638_, v_name_1639_, v___x_1640_, v_numParams_1641_, v_val_1642_, v___x_1643_, v_x_1644_, v_t_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec_ref(v_x_1644_);
lean_dec(v_numIndices_1632_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object* v_numIndices_1654_, lean_object* v_head_1655_, lean_object* v_ctors_1656_, lean_object* v_indName_1657_, lean_object* v_tail_1658_, lean_object* v_name_1659_, lean_object* v___x_1660_, lean_object* v_numParams_1661_, lean_object* v_val_1662_, lean_object* v___x_1663_, lean_object* v_params_1664_, lean_object* v_t_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___x_1671_; lean_object* v___f_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; lean_object* v___x_1675_; 
v___x_1671_ = lean_unsigned_to_nat(1u);
v___f_1672_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__5___boxed), 19, 12);
lean_closure_set(v___f_1672_, 0, v_numIndices_1654_);
lean_closure_set(v___f_1672_, 1, v___x_1671_);
lean_closure_set(v___f_1672_, 2, v_head_1655_);
lean_closure_set(v___f_1672_, 3, v_ctors_1656_);
lean_closure_set(v___f_1672_, 4, v_indName_1657_);
lean_closure_set(v___f_1672_, 5, v_tail_1658_);
lean_closure_set(v___f_1672_, 6, v_params_1664_);
lean_closure_set(v___f_1672_, 7, v_name_1659_);
lean_closure_set(v___f_1672_, 8, v___x_1660_);
lean_closure_set(v___f_1672_, 9, v_numParams_1661_);
lean_closure_set(v___f_1672_, 10, v_val_1662_);
lean_closure_set(v___f_1672_, 11, v___x_1663_);
v___x_1673_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
v___x_1674_ = 0;
v___x_1675_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1665_, v___x_1673_, v___f_1672_, v___x_1674_, v___x_1674_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object** _args){
lean_object* v_numIndices_1676_ = _args[0];
lean_object* v_head_1677_ = _args[1];
lean_object* v_ctors_1678_ = _args[2];
lean_object* v_indName_1679_ = _args[3];
lean_object* v_tail_1680_ = _args[4];
lean_object* v_name_1681_ = _args[5];
lean_object* v___x_1682_ = _args[6];
lean_object* v_numParams_1683_ = _args[7];
lean_object* v_val_1684_ = _args[8];
lean_object* v___x_1685_ = _args[9];
lean_object* v_params_1686_ = _args[10];
lean_object* v_t_1687_ = _args[11];
lean_object* v___y_1688_ = _args[12];
lean_object* v___y_1689_ = _args[13];
lean_object* v___y_1690_ = _args[14];
lean_object* v___y_1691_ = _args[15];
lean_object* v___y_1692_ = _args[16];
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_mkCasesOnSameCtorHet___lam__6(v_numIndices_1676_, v_head_1677_, v_ctors_1678_, v_indName_1679_, v_tail_1680_, v_name_1681_, v___x_1682_, v_numParams_1683_, v_val_1684_, v___x_1685_, v_params_1686_, v_t_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object* v_a_1694_, lean_object* v_declName_1695_, lean_object* v_levelParams_1696_, uint8_t v___x_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v___x_1703_; 
lean_inc(v___y_1701_);
lean_inc_ref(v___y_1700_);
lean_inc_ref(v_a_1694_);
v___x_1703_ = lean_infer_type(v_a_1694_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1715_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = lean_box(1);
v___x_1706_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_1695_, v_levelParams_1696_, v_a_1704_, v_a_1694_, v___x_1705_, v___y_1701_);
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
lean_ctor_set_tag(v___x_1709_, 1);
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1713_; 
v___x_1713_ = l_Lean_addDecl(v___x_1712_, v___x_1697_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v___x_1713_;
}
}
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_levelParams_1696_);
lean_dec(v_declName_1695_);
lean_dec_ref(v_a_1694_);
v_a_1716_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1703_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1703_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object* v_a_1724_, lean_object* v_declName_1725_, lean_object* v_levelParams_1726_, lean_object* v___x_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
uint8_t v___x_22516__boxed_1733_; lean_object* v_res_1734_; 
v___x_22516__boxed_1733_ = lean_unbox(v___x_1727_);
v_res_1734_ = l_Lean_mkCasesOnSameCtorHet___lam__7(v_a_1724_, v_declName_1725_, v_levelParams_1726_, v___x_22516__boxed_1733_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object* v_a_1735_, lean_object* v_a_1736_){
_start:
{
if (lean_obj_tag(v_a_1735_) == 0)
{
lean_object* v___x_1737_; 
v___x_1737_ = l_List_reverse___redArg(v_a_1736_);
return v___x_1737_;
}
else
{
lean_object* v_head_1738_; lean_object* v_tail_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1748_; 
v_head_1738_ = lean_ctor_get(v_a_1735_, 0);
v_tail_1739_ = lean_ctor_get(v_a_1735_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_a_1735_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1741_ = v_a_1735_;
v_isShared_1742_ = v_isSharedCheck_1748_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_tail_1739_);
lean_inc(v_head_1738_);
lean_dec(v_a_1735_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1748_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1745_; 
v___x_1743_ = l_Lean_mkLevelParam(v_head_1738_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v_a_1736_);
lean_ctor_set(v___x_1741_, 0, v___x_1743_);
v___x_1745_ = v___x_1741_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1743_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_a_1736_);
v___x_1745_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
v_a_1735_ = v_tail_1739_;
v_a_1736_ = v___x_1745_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object* v_msgData_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v___x_1755_; lean_object* v_env_1756_; uint8_t v___x_1757_; lean_object* v_env_1758_; lean_object* v___x_1759_; lean_object* v_toCold_1760_; lean_object* v_mctx_1761_; lean_object* v_lctx_1762_; lean_object* v_options_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1755_ = lean_st_ref_get(v___y_1753_);
v_env_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc_ref(v_env_1756_);
lean_dec(v___x_1755_);
v___x_1757_ = 0;
v_env_1758_ = l_Lean_Environment_setRecordingDeps(v_env_1756_, v___x_1757_);
v___x_1759_ = lean_st_ref_get(v___y_1751_);
v_toCold_1760_ = lean_ctor_get(v___y_1752_, 0);
v_mctx_1761_ = lean_ctor_get(v___x_1759_, 0);
lean_inc_ref(v_mctx_1761_);
lean_dec(v___x_1759_);
v_lctx_1762_ = lean_ctor_get(v___y_1750_, 2);
v_options_1763_ = lean_ctor_get(v_toCold_1760_, 2);
lean_inc_ref(v_options_1763_);
lean_inc_ref(v_lctx_1762_);
v___x_1764_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1764_, 0, v_env_1758_);
lean_ctor_set(v___x_1764_, 1, v_mctx_1761_);
lean_ctor_set(v___x_1764_, 2, v_lctx_1762_);
lean_ctor_set(v___x_1764_, 3, v_options_1763_);
v___x_1765_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
lean_ctor_set(v___x_1765_, 1, v_msgData_1749_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object* v_msgData_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msgData_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object* v_msg_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v_ref_1780_; lean_object* v___x_1781_; lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1790_; 
v_ref_1780_ = lean_ctor_get(v___y_1777_, 2);
v___x_1781_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msg_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1790_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1790_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; lean_object* v___x_1788_; 
lean_inc(v_ref_1780_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v_ref_1780_);
lean_ctor_set(v___x_1786_, 1, v_a_1782_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set_tag(v___x_1784_, 1);
lean_ctor_set(v___x_1784_, 0, v___x_1786_);
v___x_1788_ = v___x_1784_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v___x_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object* v_msg_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object* v_ref_1798_, lean_object* v_msg_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v_toCold_1805_; lean_object* v_currRecDepth_1806_; lean_object* v_ref_1807_; uint16_t v_optionFlags_1808_; uint8_t v_suppressElabErrors_1809_; uint8_t v_isRecordingDeps_1810_; lean_object* v_ref_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v_toCold_1805_ = lean_ctor_get(v___y_1802_, 0);
v_currRecDepth_1806_ = lean_ctor_get(v___y_1802_, 1);
v_ref_1807_ = lean_ctor_get(v___y_1802_, 2);
v_optionFlags_1808_ = lean_ctor_get_uint16(v___y_1802_, sizeof(void*)*3);
v_suppressElabErrors_1809_ = lean_ctor_get_uint8(v___y_1802_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1810_ = lean_ctor_get_uint8(v___y_1802_, sizeof(void*)*3 + 3);
v_ref_1811_ = l_Lean_replaceRef(v_ref_1798_, v_ref_1807_);
lean_inc(v_currRecDepth_1806_);
lean_inc_ref(v_toCold_1805_);
v___x_1812_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1812_, 0, v_toCold_1805_);
lean_ctor_set(v___x_1812_, 1, v_currRecDepth_1806_);
lean_ctor_set(v___x_1812_, 2, v_ref_1811_);
lean_ctor_set_uint16(v___x_1812_, sizeof(void*)*3, v_optionFlags_1808_);
lean_ctor_set_uint8(v___x_1812_, sizeof(void*)*3 + 2, v_suppressElabErrors_1809_);
lean_ctor_set_uint8(v___x_1812_, sizeof(void*)*3 + 3, v_isRecordingDeps_1810_);
v___x_1813_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1799_, v___y_1800_, v___y_1801_, v___x_1812_, v___y_1803_);
lean_dec_ref_known(v___x_1812_, 3);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object* v_ref_1814_, lean_object* v_msg_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1814_, v_msg_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v_ref_1814_);
return v_res_1821_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
return v___x_1823_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1824_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1825_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1826_ = lean_unsigned_to_nat(0u);
v___x_1827_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
lean_ctor_set(v___x_1827_, 2, v___x_1826_);
lean_ctor_set(v___x_1827_, 3, v___x_1826_);
lean_ctor_set(v___x_1827_, 4, v___x_1825_);
lean_ctor_set(v___x_1827_, 5, v___x_1825_);
lean_ctor_set(v___x_1827_, 6, v___x_1825_);
lean_ctor_set(v___x_1827_, 7, v___x_1825_);
lean_ctor_set(v___x_1827_, 8, v___x_1825_);
lean_ctor_set(v___x_1827_, 9, v___x_1825_);
lean_ctor_set(v___x_1827_, 10, v___x_1825_);
lean_ctor_set(v___x_1827_, 11, v___x_1824_);
return v___x_1827_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2(void){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1828_ = lean_unsigned_to_nat(32u);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1828_);
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3(void){
_start:
{
size_t v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1831_ = ((size_t)5ULL);
v___x_1832_ = lean_unsigned_to_nat(0u);
v___x_1833_ = lean_unsigned_to_nat(32u);
v___x_1834_ = lean_mk_empty_array_with_capacity(v___x_1833_);
v___x_1835_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2);
v___x_1836_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v___x_1834_);
lean_ctor_set(v___x_1836_, 2, v___x_1832_);
lean_ctor_set(v___x_1836_, 3, v___x_1832_);
lean_ctor_set_usize(v___x_1836_, 4, v___x_1831_);
return v___x_1836_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4(void){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1837_ = lean_box(1);
v___x_1838_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3);
v___x_1839_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v___x_1838_);
lean_ctor_set(v___x_1840_, 2, v___x_1837_);
return v___x_1840_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5));
v___x_1843_ = l_Lean_stringToMessageData(v___x_1842_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7));
v___x_1846_ = l_Lean_stringToMessageData(v___x_1845_);
return v___x_1846_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9));
v___x_1849_ = l_Lean_stringToMessageData(v___x_1848_);
return v___x_1849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11));
v___x_1852_ = l_Lean_stringToMessageData(v___x_1851_);
return v___x_1852_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13));
v___x_1855_ = l_Lean_stringToMessageData(v___x_1854_);
return v___x_1855_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15));
v___x_1858_ = l_Lean_stringToMessageData(v___x_1857_);
return v___x_1858_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17));
v___x_1861_ = l_Lean_stringToMessageData(v___x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object* v_msg_1862_, lean_object* v_declHint_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v_env_1868_; uint8_t v___x_1869_; 
v___x_1866_ = lean_box(0);
v___x_1867_ = lean_st_ref_get(v___y_1864_);
v_env_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc_ref(v_env_1868_);
lean_dec(v___x_1867_);
v___x_1869_ = l_Lean_Name_isAnonymous(v_declHint_1863_);
if (v___x_1869_ == 0)
{
uint8_t v_isExporting_1870_; 
v_isExporting_1870_ = lean_ctor_get_uint8(v_env_1868_, sizeof(void*)*13);
if (v_isExporting_1870_ == 0)
{
lean_object* v___x_1871_; 
lean_dec_ref(v_env_1868_);
lean_dec(v_declHint_1863_);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_msg_1862_);
return v___x_1871_;
}
else
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
lean_inc_ref(v_env_1868_);
v___x_1872_ = l_Lean_Environment_setExporting(v_env_1868_, v___x_1869_);
lean_inc(v_declHint_1863_);
lean_inc_ref(v___x_1872_);
v___x_1873_ = l_Lean_Environment_contains(v___x_1872_, v_declHint_1863_, v_isExporting_1870_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; 
lean_dec_ref(v___x_1872_);
lean_dec_ref(v_env_1868_);
lean_dec(v_declHint_1863_);
v___x_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1874_, 0, v_msg_1862_);
return v___x_1874_;
}
else
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v_c_1880_; lean_object* v___x_1881_; 
v___x_1875_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1);
v___x_1876_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4);
v___x_1877_ = l_Lean_Options_empty;
v___x_1878_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1872_);
lean_ctor_set(v___x_1878_, 1, v___x_1875_);
lean_ctor_set(v___x_1878_, 2, v___x_1876_);
lean_ctor_set(v___x_1878_, 3, v___x_1877_);
lean_inc(v_declHint_1863_);
v___x_1879_ = l_Lean_MessageData_ofConstName(v_declHint_1863_, v___x_1869_);
v_c_1880_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1880_, 0, v___x_1878_);
lean_ctor_set(v_c_1880_, 1, v___x_1879_);
v___x_1881_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1868_, v_declHint_1863_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
lean_dec_ref(v_env_1868_);
lean_dec(v_declHint_1863_);
v___x_1882_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
lean_ctor_set(v___x_1883_, 1, v_c_1880_);
v___x_1884_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8);
v___x_1885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1883_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = l_Lean_MessageData_note(v___x_1885_);
v___x_1887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1887_, 0, v_msg_1862_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
return v___x_1888_;
}
else
{
lean_object* v_val_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1923_; 
v_val_1889_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1891_ = v___x_1881_;
v_isShared_1892_ = v_isSharedCheck_1923_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_val_1889_);
lean_dec(v___x_1881_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1923_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; lean_object* v_moduleNames_1894_; lean_object* v_mod_1895_; uint8_t v___x_1896_; 
v___x_1893_ = l_Lean_Environment_header(v_env_1868_);
lean_dec_ref(v_env_1868_);
v_moduleNames_1894_ = lean_ctor_get(v___x_1893_, 4);
lean_inc_ref(v_moduleNames_1894_);
lean_dec_ref(v___x_1893_);
v_mod_1895_ = lean_array_get(v___x_1866_, v_moduleNames_1894_, v_val_1889_);
lean_dec(v_val_1889_);
lean_dec_ref(v_moduleNames_1894_);
v___x_1896_ = l_Lean_isPrivateName(v_declHint_1863_);
lean_dec(v_declHint_1863_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1897_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10);
v___x_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
lean_ctor_set(v___x_1898_, 1, v_c_1880_);
v___x_1899_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12);
v___x_1900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_MessageData_ofName(v_mod_1895_);
v___x_1902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1900_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
v___x_1903_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14);
v___x_1904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1902_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
v___x_1905_ = l_Lean_MessageData_note(v___x_1904_);
v___x_1906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_msg_1862_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set_tag(v___x_1891_, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1906_);
v___x_1908_ = v___x_1891_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1910_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
lean_ctor_set(v___x_1911_, 1, v_c_1880_);
v___x_1912_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16);
v___x_1913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = l_Lean_MessageData_ofName(v_mod_1895_);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
v___x_1916_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18);
v___x_1917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1915_);
lean_ctor_set(v___x_1917_, 1, v___x_1916_);
v___x_1918_ = l_Lean_MessageData_note(v___x_1917_);
v___x_1919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1919_, 0, v_msg_1862_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set_tag(v___x_1891_, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1919_);
v___x_1921_ = v___x_1891_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1924_; 
lean_dec_ref(v_env_1868_);
lean_dec(v_declHint_1863_);
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_msg_1862_);
return v___x_1924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object* v_msg_1925_, lean_object* v_declHint_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1925_, v_declHint_1926_, v___y_1927_);
lean_dec(v___y_1927_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object* v_msg_1930_, lean_object* v_declHint_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v___x_1937_; lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1947_; 
v___x_1937_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1930_, v_declHint_1931_, v___y_1935_);
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1940_ = v___x_1937_;
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1937_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1942_ = l_Lean_unknownIdentifierMessageTag;
v___x_1943_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
lean_ctor_set(v___x_1943_, 1, v_a_1938_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 0, v___x_1943_);
v___x_1945_ = v___x_1940_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object* v_msg_1948_, lean_object* v_declHint_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1948_, v_declHint_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object* v_ref_1956_, lean_object* v_msg_1957_, lean_object* v_declHint_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; lean_object* v_a_1965_; lean_object* v___x_1966_; 
v___x_1964_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1957_, v_declHint_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref(v___x_1964_);
v___x_1966_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1956_, v_a_1965_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object* v_ref_1967_, lean_object* v_msg_1968_, lean_object* v_declHint_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1967_, v_msg_1968_, v_declHint_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v_ref_1967_);
return v_res_1975_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0));
v___x_1978_ = l_Lean_stringToMessageData(v___x_1977_);
return v___x_1978_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2));
v___x_1981_ = l_Lean_stringToMessageData(v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object* v_ref_1982_, lean_object* v_constName_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___x_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1989_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1);
v___x_1990_ = 0;
lean_inc(v_constName_1983_);
v___x_1991_ = l_Lean_MessageData_ofConstName(v_constName_1983_, v___x_1990_);
v___x_1992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1989_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_1994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1992_);
lean_ctor_set(v___x_1994_, 1, v___x_1993_);
v___x_1995_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1982_, v___x_1994_, v_constName_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object* v_ref_1996_, lean_object* v_constName_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_1996_, v_constName_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec(v___y_1999_);
lean_dec_ref(v___y_1998_);
lean_dec(v_ref_1996_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object* v_constName_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_ref_2010_; lean_object* v___x_2011_; 
v_ref_2010_ = lean_ctor_get(v___y_2007_, 2);
v___x_2011_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2010_, v_constName_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_);
lean_dec(v___y_2016_);
lean_dec_ref(v___y_2015_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object* v_constName_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v___x_2025_; lean_object* v_env_2026_; uint8_t v___x_2027_; lean_object* v___x_2028_; 
v___x_2025_ = lean_st_ref_get(v___y_2023_);
v_env_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc_ref(v_env_2026_);
lean_dec(v___x_2025_);
v___x_2027_ = 0;
lean_inc(v_constName_2019_);
v___x_2028_ = l_Lean_Environment_findConstVal_x3f(v_env_2026_, v_constName_2019_, v___x_2027_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
return v___x_2029_;
}
else
{
lean_object* v_val_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_constName_2019_);
v_val_2030_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2028_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_val_2030_);
lean_dec(v___x_2028_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 0);
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_val_2030_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object* v_constName_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v_constName_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object* v_declName_2045_, uint8_t v_s_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v___x_2050_; lean_object* v_env_2051_; lean_object* v_nextMacroScope_2052_; lean_object* v_ngen_2053_; lean_object* v_auxDeclNGen_2054_; lean_object* v_traceState_2055_; lean_object* v_recordedDeps_2056_; lean_object* v_messages_2057_; lean_object* v_infoState_2058_; lean_object* v_snapshotTasks_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2089_; 
v___x_2050_ = lean_st_ref_take(v___y_2048_);
v_env_2051_ = lean_ctor_get(v___x_2050_, 0);
v_nextMacroScope_2052_ = lean_ctor_get(v___x_2050_, 1);
v_ngen_2053_ = lean_ctor_get(v___x_2050_, 2);
v_auxDeclNGen_2054_ = lean_ctor_get(v___x_2050_, 3);
v_traceState_2055_ = lean_ctor_get(v___x_2050_, 4);
v_recordedDeps_2056_ = lean_ctor_get(v___x_2050_, 6);
v_messages_2057_ = lean_ctor_get(v___x_2050_, 7);
v_infoState_2058_ = lean_ctor_get(v___x_2050_, 8);
v_snapshotTasks_2059_ = lean_ctor_get(v___x_2050_, 9);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2089_ == 0)
{
lean_object* v_unused_2090_; 
v_unused_2090_ = lean_ctor_get(v___x_2050_, 5);
lean_dec(v_unused_2090_);
v___x_2061_ = v___x_2050_;
v_isShared_2062_ = v_isSharedCheck_2089_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_snapshotTasks_2059_);
lean_inc(v_infoState_2058_);
lean_inc(v_messages_2057_);
lean_inc(v_recordedDeps_2056_);
lean_inc(v_traceState_2055_);
lean_inc(v_auxDeclNGen_2054_);
lean_inc(v_ngen_2053_);
lean_inc(v_nextMacroScope_2052_);
lean_inc(v_env_2051_);
lean_dec(v___x_2050_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2089_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
uint8_t v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2063_ = 0;
v___x_2064_ = lean_box(0);
v___x_2065_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2051_, v_declName_2045_, v_s_2046_, v___x_2063_, v___x_2064_);
v___x_2066_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 5, v___x_2066_);
lean_ctor_set(v___x_2061_, 0, v___x_2065_);
v___x_2068_ = v___x_2061_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v_nextMacroScope_2052_);
lean_ctor_set(v_reuseFailAlloc_2088_, 2, v_ngen_2053_);
lean_ctor_set(v_reuseFailAlloc_2088_, 3, v_auxDeclNGen_2054_);
lean_ctor_set(v_reuseFailAlloc_2088_, 4, v_traceState_2055_);
lean_ctor_set(v_reuseFailAlloc_2088_, 5, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2088_, 6, v_recordedDeps_2056_);
lean_ctor_set(v_reuseFailAlloc_2088_, 7, v_messages_2057_);
lean_ctor_set(v_reuseFailAlloc_2088_, 8, v_infoState_2058_);
lean_ctor_set(v_reuseFailAlloc_2088_, 9, v_snapshotTasks_2059_);
v___x_2068_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v_mctx_2071_; lean_object* v_zetaDeltaFVarIds_2072_; lean_object* v_postponed_2073_; lean_object* v_diag_2074_; lean_object* v_rewriteFires_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2086_; 
v___x_2069_ = lean_st_ref_put(v___y_2048_, v___x_2068_);
v___x_2070_ = lean_st_ref_take(v___y_2047_);
v_mctx_2071_ = lean_ctor_get(v___x_2070_, 0);
v_zetaDeltaFVarIds_2072_ = lean_ctor_get(v___x_2070_, 2);
v_postponed_2073_ = lean_ctor_get(v___x_2070_, 3);
v_diag_2074_ = lean_ctor_get(v___x_2070_, 4);
v_rewriteFires_2075_ = lean_ctor_get(v___x_2070_, 5);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; 
v_unused_2087_ = lean_ctor_get(v___x_2070_, 1);
lean_dec(v_unused_2087_);
v___x_2077_ = v___x_2070_;
v_isShared_2078_ = v_isSharedCheck_2086_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_rewriteFires_2075_);
lean_inc(v_diag_2074_);
lean_inc(v_postponed_2073_);
lean_inc(v_zetaDeltaFVarIds_2072_);
lean_inc(v_mctx_2071_);
lean_dec(v___x_2070_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2086_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2079_ = lean_box(0);
v___x_2080_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2080_);
v___x_2082_ = v___x_2077_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_mctx_2071_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2085_, 2, v_zetaDeltaFVarIds_2072_);
lean_ctor_set(v_reuseFailAlloc_2085_, 3, v_postponed_2073_);
lean_ctor_set(v_reuseFailAlloc_2085_, 4, v_diag_2074_);
lean_ctor_set(v_reuseFailAlloc_2085_, 5, v_rewriteFires_2075_);
v___x_2082_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_st_ref_put(v___y_2047_, v___x_2082_);
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2079_);
return v___x_2084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object* v_declName_2091_, lean_object* v_s_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
uint8_t v_s_boxed_2096_; lean_object* v_res_2097_; 
v_s_boxed_2096_ = lean_unbox(v_s_2092_);
v_res_2097_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2091_, v_s_boxed_2096_, v___y_2093_, v___y_2094_);
lean_dec(v___y_2094_);
lean_dec(v___y_2093_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object* v_declName_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = 0;
v___x_2105_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2098_, v___x_2104_, v___y_2100_, v___y_2102_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object* v_declName_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
return v_res_2112_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0));
v___x_2115_ = l_Lean_stringToMessageData(v___x_2114_);
return v___x_2115_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2));
v___x_2118_ = l_Lean_stringToMessageData(v___x_2117_);
return v___x_2118_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4));
v___x_2121_ = l_Lean_stringToMessageData(v___x_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object* v_attrName_2122_, lean_object* v_declName_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; uint8_t v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2129_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2130_ = l_Lean_MessageData_ofName(v_attrName_2122_);
v___x_2131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = 0;
v___x_2135_ = l_Lean_MessageData_ofConstName(v_declName_2123_, v___x_2134_);
v___x_2136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2133_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5);
v___x_2138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2136_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
v___x_2139_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2138_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object* v_attrName_2140_, lean_object* v_declName_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2140_, v_declName_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___lam__0(lean_object* v_addEntryFn_2148_, lean_object* v_decl_2149_, lean_object* v_s_2150_){
_start:
{
lean_object* v_importedEntries_2151_; lean_object* v_state_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2160_; 
v_importedEntries_2151_ = lean_ctor_get(v_s_2150_, 0);
v_state_2152_ = lean_ctor_get(v_s_2150_, 1);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_s_2150_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2154_ = v_s_2150_;
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_state_2152_);
lean_inc(v_importedEntries_2151_);
lean_dec(v_s_2150_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v_state_2156_; lean_object* v___x_2158_; 
v_state_2156_ = lean_apply_2(v_addEntryFn_2148_, v_state_2152_, v_decl_2149_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 1, v_state_2156_);
v___x_2158_ = v___x_2154_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_importedEntries_2151_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v_state_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0));
v___x_2163_ = l_Lean_stringToMessageData(v___x_2162_);
return v___x_2163_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2165_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2));
v___x_2166_ = l_Lean_stringToMessageData(v___x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object* v_attrName_2167_, lean_object* v_declName_2168_, lean_object* v_asyncPrefix_x3f_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v___y_2176_; 
if (lean_obj_tag(v_asyncPrefix_x3f_2169_) == 0)
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_MessageData_nil;
v___y_2176_ = v___x_2189_;
goto v___jp_2175_;
}
else
{
lean_object* v_val_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v_val_2190_ = lean_ctor_get(v_asyncPrefix_x3f_2169_, 0);
lean_inc(v_val_2190_);
lean_dec_ref_known(v_asyncPrefix_x3f_2169_, 1);
v___x_2191_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3);
v___x_2192_ = l_Lean_MessageData_ofName(v_val_2190_);
v___x_2193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2191_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set(v___x_2195_, 1, v___x_2194_);
v___y_2176_ = v___x_2195_;
goto v___jp_2175_;
}
v___jp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2177_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2178_ = l_Lean_MessageData_ofName(v_attrName_2167_);
v___x_2179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = 0;
v___x_2183_ = l_Lean_MessageData_ofConstName(v_declName_2168_, v___x_2182_);
v___x_2184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2181_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1);
v___x_2186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2184_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
lean_ctor_set(v___x_2187_, 1, v___y_2176_);
v___x_2188_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2187_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object* v_attrName_2196_, lean_object* v_declName_2197_, lean_object* v_asyncPrefix_x3f_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2196_, v_declName_2197_, v_asyncPrefix_x3f_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object* v_attr_2205_, lean_object* v_decl_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v___y_2213_; lean_object* v___y_2214_; lean_object* v___y_2215_; lean_object* v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___x_2268_; lean_object* v_env_2269_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___x_2284_; 
v___x_2268_ = lean_st_ref_get(v___y_2210_);
v_env_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc_ref(v_env_2269_);
lean_dec(v___x_2268_);
v___x_2284_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2269_, v_decl_2206_);
if (lean_obj_tag(v___x_2284_) == 0)
{
v___y_2271_ = v___y_2207_;
v___y_2272_ = v___y_2208_;
v___y_2273_ = v___y_2209_;
v___y_2274_ = v___y_2210_;
goto v___jp_2270_;
}
else
{
lean_object* v_attr_2285_; lean_object* v_toAttributeImplCore_2286_; lean_object* v_name_2287_; lean_object* v___x_2288_; 
lean_dec_ref_known(v___x_2284_, 1);
lean_dec_ref(v_env_2269_);
v_attr_2285_ = lean_ctor_get(v_attr_2205_, 0);
lean_inc_ref(v_attr_2285_);
lean_dec_ref(v_attr_2205_);
v_toAttributeImplCore_2286_ = lean_ctor_get(v_attr_2285_, 0);
lean_inc_ref(v_toAttributeImplCore_2286_);
lean_dec_ref(v_attr_2285_);
v_name_2287_ = lean_ctor_get(v_toAttributeImplCore_2286_, 1);
lean_inc(v_name_2287_);
lean_dec_ref(v_toAttributeImplCore_2286_);
v___x_2288_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_name_2287_, v_decl_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
return v___x_2288_;
}
v___jp_2212_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v_mctx_2228_; lean_object* v_zetaDeltaFVarIds_2229_; lean_object* v_postponed_2230_; lean_object* v_diag_2231_; lean_object* v_rewriteFires_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2243_; 
v___x_2224_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
v___x_2225_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2225_, 0, v___y_2223_);
lean_ctor_set(v___x_2225_, 1, v___y_2216_);
lean_ctor_set(v___x_2225_, 2, v___y_2220_);
lean_ctor_set(v___x_2225_, 3, v___y_2219_);
lean_ctor_set(v___x_2225_, 4, v___y_2215_);
lean_ctor_set(v___x_2225_, 5, v___x_2224_);
lean_ctor_set(v___x_2225_, 6, v___y_2222_);
lean_ctor_set(v___x_2225_, 7, v___y_2218_);
lean_ctor_set(v___x_2225_, 8, v___y_2217_);
lean_ctor_set(v___x_2225_, 9, v___y_2221_);
v___x_2226_ = lean_st_ref_put(v___y_2214_, v___x_2225_);
v___x_2227_ = lean_st_ref_take(v___y_2213_);
v_mctx_2228_ = lean_ctor_get(v___x_2227_, 0);
v_zetaDeltaFVarIds_2229_ = lean_ctor_get(v___x_2227_, 2);
v_postponed_2230_ = lean_ctor_get(v___x_2227_, 3);
v_diag_2231_ = lean_ctor_get(v___x_2227_, 4);
v_rewriteFires_2232_ = lean_ctor_get(v___x_2227_, 5);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2243_ == 0)
{
lean_object* v_unused_2244_; 
v_unused_2244_ = lean_ctor_get(v___x_2227_, 1);
lean_dec(v_unused_2244_);
v___x_2234_ = v___x_2227_;
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_rewriteFires_2232_);
lean_inc(v_diag_2231_);
lean_inc(v_postponed_2230_);
lean_inc(v_zetaDeltaFVarIds_2229_);
lean_inc(v_mctx_2228_);
lean_dec(v___x_2227_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2236_ = lean_box(0);
v___x_2237_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 1, v___x_2237_);
v___x_2239_ = v___x_2234_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_mctx_2228_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v___x_2237_);
lean_ctor_set(v_reuseFailAlloc_2242_, 2, v_zetaDeltaFVarIds_2229_);
lean_ctor_set(v_reuseFailAlloc_2242_, 3, v_postponed_2230_);
lean_ctor_set(v_reuseFailAlloc_2242_, 4, v_diag_2231_);
lean_ctor_set(v_reuseFailAlloc_2242_, 5, v_rewriteFires_2232_);
v___x_2239_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = lean_st_ref_put(v___y_2213_, v___x_2239_);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2236_);
return v___x_2241_;
}
}
}
v___jp_2245_:
{
lean_object* v___x_2248_; lean_object* v_ext_2249_; lean_object* v_toEnvExtension_2250_; lean_object* v_env_2251_; lean_object* v_nextMacroScope_2252_; lean_object* v_ngen_2253_; lean_object* v_auxDeclNGen_2254_; lean_object* v_traceState_2255_; lean_object* v_recordedDeps_2256_; lean_object* v_messages_2257_; lean_object* v_infoState_2258_; lean_object* v_snapshotTasks_2259_; lean_object* v_addEntryFn_2260_; lean_object* v_asyncMode_2261_; uint8_t v_logWrites_2262_; lean_object* v___f_2263_; uint8_t v___x_2264_; 
v___x_2248_ = lean_st_ref_take(v___y_2247_);
v_ext_2249_ = lean_ctor_get(v_attr_2205_, 1);
lean_inc_ref(v_ext_2249_);
lean_dec_ref(v_attr_2205_);
v_toEnvExtension_2250_ = lean_ctor_get(v_ext_2249_, 0);
lean_inc_ref(v_toEnvExtension_2250_);
v_env_2251_ = lean_ctor_get(v___x_2248_, 0);
lean_inc_ref(v_env_2251_);
v_nextMacroScope_2252_ = lean_ctor_get(v___x_2248_, 1);
lean_inc(v_nextMacroScope_2252_);
v_ngen_2253_ = lean_ctor_get(v___x_2248_, 2);
lean_inc_ref(v_ngen_2253_);
v_auxDeclNGen_2254_ = lean_ctor_get(v___x_2248_, 3);
lean_inc_ref(v_auxDeclNGen_2254_);
v_traceState_2255_ = lean_ctor_get(v___x_2248_, 4);
lean_inc_ref(v_traceState_2255_);
v_recordedDeps_2256_ = lean_ctor_get(v___x_2248_, 6);
lean_inc_ref(v_recordedDeps_2256_);
v_messages_2257_ = lean_ctor_get(v___x_2248_, 7);
lean_inc_ref(v_messages_2257_);
v_infoState_2258_ = lean_ctor_get(v___x_2248_, 8);
lean_inc_ref(v_infoState_2258_);
v_snapshotTasks_2259_ = lean_ctor_get(v___x_2248_, 9);
lean_inc_ref(v_snapshotTasks_2259_);
lean_dec(v___x_2248_);
v_addEntryFn_2260_ = lean_ctor_get(v_ext_2249_, 3);
lean_inc(v_addEntryFn_2260_);
lean_dec_ref(v_ext_2249_);
v_asyncMode_2261_ = lean_ctor_get(v_toEnvExtension_2250_, 2);
lean_inc(v_asyncMode_2261_);
v_logWrites_2262_ = lean_ctor_get_uint8(v_toEnvExtension_2250_, sizeof(void*)*6);
lean_inc(v_decl_2206_);
v___f_2263_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___lam__0), 3, 2);
lean_closure_set(v___f_2263_, 0, v_addEntryFn_2260_);
lean_closure_set(v___f_2263_, 1, v_decl_2206_);
v___x_2264_ = 1;
if (v_logWrites_2262_ == 0)
{
lean_object* v___x_2265_; 
v___x_2265_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2250_, v_env_2251_, v___f_2263_, v_asyncMode_2261_, v_decl_2206_, v___x_2264_);
lean_dec(v_asyncMode_2261_);
v___y_2213_ = v___y_2246_;
v___y_2214_ = v___y_2247_;
v___y_2215_ = v_traceState_2255_;
v___y_2216_ = v_nextMacroScope_2252_;
v___y_2217_ = v_infoState_2258_;
v___y_2218_ = v_messages_2257_;
v___y_2219_ = v_auxDeclNGen_2254_;
v___y_2220_ = v_ngen_2253_;
v___y_2221_ = v_snapshotTasks_2259_;
v___y_2222_ = v_recordedDeps_2256_;
v___y_2223_ = v___x_2265_;
goto v___jp_2212_;
}
else
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
lean_inc_ref(v_toEnvExtension_2250_);
v___x_2266_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2250_, v_env_2251_);
lean_dec_ref(v_env_2251_);
v___x_2267_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2250_, v___x_2266_, v___f_2263_, v_asyncMode_2261_, v_decl_2206_, v___x_2264_);
lean_dec(v_asyncMode_2261_);
v___y_2213_ = v___y_2246_;
v___y_2214_ = v___y_2247_;
v___y_2215_ = v_traceState_2255_;
v___y_2216_ = v_nextMacroScope_2252_;
v___y_2217_ = v_infoState_2258_;
v___y_2218_ = v_messages_2257_;
v___y_2219_ = v_auxDeclNGen_2254_;
v___y_2220_ = v_ngen_2253_;
v___y_2221_ = v_snapshotTasks_2259_;
v___y_2222_ = v_recordedDeps_2256_;
v___y_2223_ = v___x_2267_;
goto v___jp_2212_;
}
}
v___jp_2270_:
{
lean_object* v_ext_2275_; lean_object* v_toEnvExtension_2276_; lean_object* v_attr_2277_; lean_object* v_asyncMode_2278_; uint8_t v___x_2279_; 
v_ext_2275_ = lean_ctor_get(v_attr_2205_, 1);
v_toEnvExtension_2276_ = lean_ctor_get(v_ext_2275_, 0);
v_attr_2277_ = lean_ctor_get(v_attr_2205_, 0);
v_asyncMode_2278_ = lean_ctor_get(v_toEnvExtension_2276_, 2);
lean_inc(v_decl_2206_);
lean_inc_ref(v_env_2269_);
v___x_2279_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2269_, v_decl_2206_, v_asyncMode_2278_);
if (v___x_2279_ == 0)
{
lean_object* v_toAttributeImplCore_2280_; lean_object* v_name_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
lean_inc_ref(v_attr_2277_);
lean_dec_ref(v_attr_2205_);
v_toAttributeImplCore_2280_ = lean_ctor_get(v_attr_2277_, 0);
lean_inc_ref(v_toAttributeImplCore_2280_);
lean_dec_ref(v_attr_2277_);
v_name_2281_ = lean_ctor_get(v_toAttributeImplCore_2280_, 1);
lean_inc(v_name_2281_);
lean_dec_ref(v_toAttributeImplCore_2280_);
v___x_2282_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2269_);
v___x_2283_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_name_2281_, v_decl_2206_, v___x_2282_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
return v___x_2283_;
}
else
{
lean_dec_ref(v_env_2269_);
v___y_2246_ = v___y_2272_;
v___y_2247_ = v___y_2274_;
goto v___jp_2245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object* v_attr_2289_, lean_object* v_decl_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v_attr_2289_, v_decl_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object* v_constName_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v_env_2304_; uint8_t v___x_2305_; lean_object* v___x_2306_; 
v___x_2303_ = lean_st_ref_get(v___y_2301_);
v_env_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc_ref(v_env_2304_);
lean_dec(v___x_2303_);
v___x_2305_ = 0;
lean_inc(v_constName_2297_);
v___x_2306_ = l_Lean_Environment_find_x3f(v_env_2304_, v_constName_2297_, v___x_2305_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
return v___x_2307_;
}
else
{
lean_object* v_val_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_constName_2297_);
v_val_2308_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2306_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_val_2308_);
lean_dec(v___x_2306_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set_tag(v___x_2310_, 0);
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_val_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object* v_constName_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_constName_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
return v_res_2322_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__3(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2326_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_2327_ = lean_unsigned_to_nat(58u);
v___x_2328_ = lean_unsigned_to_nat(33u);
v___x_2329_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2330_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2331_ = l_mkPanicMessageWithDecl(v___x_2330_, v___x_2329_, v___x_2328_, v___x_2327_, v___x_2326_);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__5(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2333_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_2334_ = lean_unsigned_to_nat(60u);
v___x_2335_ = lean_unsigned_to_nat(30u);
v___x_2336_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2337_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2338_ = l_mkPanicMessageWithDecl(v___x_2337_, v___x_2336_, v___x_2335_, v___x_2334_, v___x_2333_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object* v_declName_2339_, lean_object* v_indName_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v___x_2346_; 
lean_inc(v_indName_2340_);
v___x_2346_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2346_, 1);
if (lean_obj_tag(v_a_2347_) == 5)
{
lean_object* v_val_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2542_; 
v_val_2348_ = lean_ctor_get(v_a_2347_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_a_2347_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2350_ = v_a_2347_;
v_isShared_2351_ = v_isSharedCheck_2542_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_val_2348_);
lean_dec(v_a_2347_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2542_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
lean_inc(v_indName_2340_);
v___x_2352_ = l_Lean_mkCasesOnName(v_indName_2340_);
lean_inc(v___x_2352_);
v___x_2353_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_2352_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v_name_2355_; lean_object* v_levelParams_2356_; lean_object* v_type_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v_name_2355_ = lean_ctor_get(v_a_2354_, 0);
lean_inc(v_name_2355_);
v_levelParams_2356_ = lean_ctor_get(v_a_2354_, 1);
lean_inc_n(v_levelParams_2356_, 2);
v_type_2357_ = lean_ctor_get(v_a_2354_, 2);
lean_inc_ref(v_type_2357_);
lean_dec(v_a_2354_);
v___x_2358_ = lean_box(0);
v___x_2359_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_2356_, v___x_2358_);
if (lean_obj_tag(v___x_2359_) == 1)
{
lean_object* v_head_2360_; lean_object* v_tail_2361_; lean_object* v_numParams_2362_; lean_object* v_numIndices_2363_; lean_object* v_ctors_2364_; lean_object* v___f_2365_; lean_object* v___x_2367_; 
v_head_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_head_2360_);
v_tail_2361_ = lean_ctor_get(v___x_2359_, 1);
lean_inc(v_tail_2361_);
v_numParams_2362_ = lean_ctor_get(v_val_2348_, 1);
lean_inc_n(v_numParams_2362_, 2);
v_numIndices_2363_ = lean_ctor_get(v_val_2348_, 2);
lean_inc(v_numIndices_2363_);
v_ctors_2364_ = lean_ctor_get(v_val_2348_, 4);
lean_inc(v_ctors_2364_);
v___f_2365_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__6___boxed), 17, 10);
lean_closure_set(v___f_2365_, 0, v_numIndices_2363_);
lean_closure_set(v___f_2365_, 1, v_head_2360_);
lean_closure_set(v___f_2365_, 2, v_ctors_2364_);
lean_closure_set(v___f_2365_, 3, v_indName_2340_);
lean_closure_set(v___f_2365_, 4, v_tail_2361_);
lean_closure_set(v___f_2365_, 5, v_name_2355_);
lean_closure_set(v___f_2365_, 6, v___x_2359_);
lean_closure_set(v___f_2365_, 7, v_numParams_2362_);
lean_closure_set(v___f_2365_, 8, v_val_2348_);
lean_closure_set(v___f_2365_, 9, v___x_2352_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set_tag(v___x_2350_, 1);
lean_ctor_set(v___x_2350_, 0, v_numParams_2362_);
v___x_2367_ = v___x_2350_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_numParams_2362_);
v___x_2367_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
uint8_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = 0;
v___x_2369_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_2357_, v___x_2367_, v___f_2365_, v___x_2368_, v___x_2368_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2371_; lean_object* v___f_2372_; uint8_t v___y_2374_; uint8_t v___x_2521_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2369_, 1);
v___x_2371_ = lean_box(v___x_2368_);
lean_inc(v_declName_2339_);
v___f_2372_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__7___boxed), 9, 4);
lean_closure_set(v___f_2372_, 0, v_a_2370_);
lean_closure_set(v___f_2372_, 1, v_declName_2339_);
lean_closure_set(v___f_2372_, 2, v_levelParams_2356_);
lean_closure_set(v___f_2372_, 3, v___x_2371_);
v___x_2521_ = l_Lean_isPrivateName(v_declName_2339_);
if (v___x_2521_ == 0)
{
uint8_t v___x_2522_; 
v___x_2522_ = 1;
v___y_2374_ = v___x_2522_;
goto v___jp_2373_;
}
else
{
v___y_2374_ = v___x_2368_;
goto v___jp_2373_;
}
v___jp_2373_:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_2372_, v___y_2374_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v___x_2376_; lean_object* v_env_2377_; lean_object* v_nextMacroScope_2378_; lean_object* v_ngen_2379_; lean_object* v_auxDeclNGen_2380_; lean_object* v_traceState_2381_; lean_object* v_recordedDeps_2382_; lean_object* v_messages_2383_; lean_object* v_infoState_2384_; lean_object* v_snapshotTasks_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2519_; 
lean_dec_ref_known(v___x_2375_, 1);
v___x_2376_ = lean_st_ref_take(v_a_2344_);
v_env_2377_ = lean_ctor_get(v___x_2376_, 0);
v_nextMacroScope_2378_ = lean_ctor_get(v___x_2376_, 1);
v_ngen_2379_ = lean_ctor_get(v___x_2376_, 2);
v_auxDeclNGen_2380_ = lean_ctor_get(v___x_2376_, 3);
v_traceState_2381_ = lean_ctor_get(v___x_2376_, 4);
v_recordedDeps_2382_ = lean_ctor_get(v___x_2376_, 6);
v_messages_2383_ = lean_ctor_get(v___x_2376_, 7);
v_infoState_2384_ = lean_ctor_get(v___x_2376_, 8);
v_snapshotTasks_2385_ = lean_ctor_get(v___x_2376_, 9);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2519_ == 0)
{
lean_object* v_unused_2520_; 
v_unused_2520_ = lean_ctor_get(v___x_2376_, 5);
lean_dec(v_unused_2520_);
v___x_2387_ = v___x_2376_;
v_isShared_2388_ = v_isSharedCheck_2519_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_snapshotTasks_2385_);
lean_inc(v_infoState_2384_);
lean_inc(v_messages_2383_);
lean_inc(v_recordedDeps_2382_);
lean_inc(v_traceState_2381_);
lean_inc(v_auxDeclNGen_2380_);
lean_inc(v_ngen_2379_);
lean_inc(v_nextMacroScope_2378_);
lean_inc(v_env_2377_);
lean_dec(v___x_2376_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2519_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2392_; 
lean_inc(v_declName_2339_);
v___x_2389_ = l_Lean_Meta_markMatcherLike(v_env_2377_, v_declName_2339_);
v___x_2390_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 5, v___x_2390_);
lean_ctor_set(v___x_2387_, 0, v___x_2389_);
v___x_2392_ = v___x_2387_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v_nextMacroScope_2378_);
lean_ctor_set(v_reuseFailAlloc_2518_, 2, v_ngen_2379_);
lean_ctor_set(v_reuseFailAlloc_2518_, 3, v_auxDeclNGen_2380_);
lean_ctor_set(v_reuseFailAlloc_2518_, 4, v_traceState_2381_);
lean_ctor_set(v_reuseFailAlloc_2518_, 5, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2518_, 6, v_recordedDeps_2382_);
lean_ctor_set(v_reuseFailAlloc_2518_, 7, v_messages_2383_);
lean_ctor_set(v_reuseFailAlloc_2518_, 8, v_infoState_2384_);
lean_ctor_set(v_reuseFailAlloc_2518_, 9, v_snapshotTasks_2385_);
v___x_2392_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v_mctx_2395_; lean_object* v_zetaDeltaFVarIds_2396_; lean_object* v_postponed_2397_; lean_object* v_diag_2398_; lean_object* v_rewriteFires_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2516_; 
v___x_2393_ = lean_st_ref_put(v_a_2344_, v___x_2392_);
v___x_2394_ = lean_st_ref_take(v_a_2342_);
v_mctx_2395_ = lean_ctor_get(v___x_2394_, 0);
v_zetaDeltaFVarIds_2396_ = lean_ctor_get(v___x_2394_, 2);
v_postponed_2397_ = lean_ctor_get(v___x_2394_, 3);
v_diag_2398_ = lean_ctor_get(v___x_2394_, 4);
v_rewriteFires_2399_ = lean_ctor_get(v___x_2394_, 5);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v___x_2394_, 1);
lean_dec(v_unused_2517_);
v___x_2401_ = v___x_2394_;
v_isShared_2402_ = v_isSharedCheck_2516_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_rewriteFires_2399_);
lean_inc(v_diag_2398_);
lean_inc(v_postponed_2397_);
lean_inc(v_zetaDeltaFVarIds_2396_);
lean_inc(v_mctx_2395_);
lean_dec(v___x_2394_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2516_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2403_; lean_object* v___x_2405_; 
v___x_2403_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 1, v___x_2403_);
v___x_2405_ = v___x_2401_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_mctx_2395_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2515_, 2, v_zetaDeltaFVarIds_2396_);
lean_ctor_set(v_reuseFailAlloc_2515_, 3, v_postponed_2397_);
lean_ctor_set(v_reuseFailAlloc_2515_, 4, v_diag_2398_);
lean_ctor_set(v_reuseFailAlloc_2515_, 5, v_rewriteFires_2399_);
v___x_2405_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v_env_2408_; lean_object* v_nextMacroScope_2409_; lean_object* v_ngen_2410_; lean_object* v_auxDeclNGen_2411_; lean_object* v_traceState_2412_; lean_object* v_recordedDeps_2413_; lean_object* v_messages_2414_; lean_object* v_infoState_2415_; lean_object* v_snapshotTasks_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2513_; 
v___x_2406_ = lean_st_ref_put(v_a_2342_, v___x_2405_);
v___x_2407_ = lean_st_ref_take(v_a_2344_);
v_env_2408_ = lean_ctor_get(v___x_2407_, 0);
v_nextMacroScope_2409_ = lean_ctor_get(v___x_2407_, 1);
v_ngen_2410_ = lean_ctor_get(v___x_2407_, 2);
v_auxDeclNGen_2411_ = lean_ctor_get(v___x_2407_, 3);
v_traceState_2412_ = lean_ctor_get(v___x_2407_, 4);
v_recordedDeps_2413_ = lean_ctor_get(v___x_2407_, 6);
v_messages_2414_ = lean_ctor_get(v___x_2407_, 7);
v_infoState_2415_ = lean_ctor_get(v___x_2407_, 8);
v_snapshotTasks_2416_ = lean_ctor_get(v___x_2407_, 9);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2513_ == 0)
{
lean_object* v_unused_2514_; 
v_unused_2514_ = lean_ctor_get(v___x_2407_, 5);
lean_dec(v_unused_2514_);
v___x_2418_ = v___x_2407_;
v_isShared_2419_ = v_isSharedCheck_2513_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_snapshotTasks_2416_);
lean_inc(v_infoState_2415_);
lean_inc(v_messages_2414_);
lean_inc(v_recordedDeps_2413_);
lean_inc(v_traceState_2412_);
lean_inc(v_auxDeclNGen_2411_);
lean_inc(v_ngen_2410_);
lean_inc(v_nextMacroScope_2409_);
lean_inc(v_env_2408_);
lean_dec(v___x_2407_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2513_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2420_; lean_object* v___x_2422_; 
lean_inc(v_declName_2339_);
v___x_2420_ = l_Lean_markAuxRecursor(v_env_2408_, v_declName_2339_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 5, v___x_2390_);
lean_ctor_set(v___x_2418_, 0, v___x_2420_);
v___x_2422_ = v___x_2418_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2420_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_nextMacroScope_2409_);
lean_ctor_set(v_reuseFailAlloc_2512_, 2, v_ngen_2410_);
lean_ctor_set(v_reuseFailAlloc_2512_, 3, v_auxDeclNGen_2411_);
lean_ctor_set(v_reuseFailAlloc_2512_, 4, v_traceState_2412_);
lean_ctor_set(v_reuseFailAlloc_2512_, 5, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2512_, 6, v_recordedDeps_2413_);
lean_ctor_set(v_reuseFailAlloc_2512_, 7, v_messages_2414_);
lean_ctor_set(v_reuseFailAlloc_2512_, 8, v_infoState_2415_);
lean_ctor_set(v_reuseFailAlloc_2512_, 9, v_snapshotTasks_2416_);
v___x_2422_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_mctx_2425_; lean_object* v_zetaDeltaFVarIds_2426_; lean_object* v_postponed_2427_; lean_object* v_diag_2428_; lean_object* v_rewriteFires_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2510_; 
v___x_2423_ = lean_st_ref_put(v_a_2344_, v___x_2422_);
v___x_2424_ = lean_st_ref_take(v_a_2342_);
v_mctx_2425_ = lean_ctor_get(v___x_2424_, 0);
v_zetaDeltaFVarIds_2426_ = lean_ctor_get(v___x_2424_, 2);
v_postponed_2427_ = lean_ctor_get(v___x_2424_, 3);
v_diag_2428_ = lean_ctor_get(v___x_2424_, 4);
v_rewriteFires_2429_ = lean_ctor_get(v___x_2424_, 5);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2510_ == 0)
{
lean_object* v_unused_2511_; 
v_unused_2511_ = lean_ctor_get(v___x_2424_, 1);
lean_dec(v_unused_2511_);
v___x_2431_ = v___x_2424_;
v_isShared_2432_ = v_isSharedCheck_2510_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_rewriteFires_2429_);
lean_inc(v_diag_2428_);
lean_inc(v_postponed_2427_);
lean_inc(v_zetaDeltaFVarIds_2426_);
lean_inc(v_mctx_2425_);
lean_dec(v___x_2424_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2510_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 1, v___x_2403_);
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_mctx_2425_);
lean_ctor_set(v_reuseFailAlloc_2509_, 1, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2509_, 2, v_zetaDeltaFVarIds_2426_);
lean_ctor_set(v_reuseFailAlloc_2509_, 3, v_postponed_2427_);
lean_ctor_set(v_reuseFailAlloc_2509_, 4, v_diag_2428_);
lean_ctor_set(v_reuseFailAlloc_2509_, 5, v_rewriteFires_2429_);
v___x_2434_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v_env_2437_; lean_object* v_nextMacroScope_2438_; lean_object* v_ngen_2439_; lean_object* v_auxDeclNGen_2440_; lean_object* v_traceState_2441_; lean_object* v_recordedDeps_2442_; lean_object* v_messages_2443_; lean_object* v_infoState_2444_; lean_object* v_snapshotTasks_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2507_; 
v___x_2435_ = lean_st_ref_put(v_a_2342_, v___x_2434_);
v___x_2436_ = lean_st_ref_take(v_a_2344_);
v_env_2437_ = lean_ctor_get(v___x_2436_, 0);
v_nextMacroScope_2438_ = lean_ctor_get(v___x_2436_, 1);
v_ngen_2439_ = lean_ctor_get(v___x_2436_, 2);
v_auxDeclNGen_2440_ = lean_ctor_get(v___x_2436_, 3);
v_traceState_2441_ = lean_ctor_get(v___x_2436_, 4);
v_recordedDeps_2442_ = lean_ctor_get(v___x_2436_, 6);
v_messages_2443_ = lean_ctor_get(v___x_2436_, 7);
v_infoState_2444_ = lean_ctor_get(v___x_2436_, 8);
v_snapshotTasks_2445_ = lean_ctor_get(v___x_2436_, 9);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2507_ == 0)
{
lean_object* v_unused_2508_; 
v_unused_2508_ = lean_ctor_get(v___x_2436_, 5);
lean_dec(v_unused_2508_);
v___x_2447_ = v___x_2436_;
v_isShared_2448_ = v_isSharedCheck_2507_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_snapshotTasks_2445_);
lean_inc(v_infoState_2444_);
lean_inc(v_messages_2443_);
lean_inc(v_recordedDeps_2442_);
lean_inc(v_traceState_2441_);
lean_inc(v_auxDeclNGen_2440_);
lean_inc(v_ngen_2439_);
lean_inc(v_nextMacroScope_2438_);
lean_inc(v_env_2437_);
lean_dec(v___x_2436_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2507_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2449_; lean_object* v___x_2451_; 
lean_inc(v_declName_2339_);
v___x_2449_ = l_Lean_Meta_addToCompletionBlackList(v_env_2437_, v_declName_2339_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 5, v___x_2390_);
lean_ctor_set(v___x_2447_, 0, v___x_2449_);
v___x_2451_ = v___x_2447_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v___x_2449_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_nextMacroScope_2438_);
lean_ctor_set(v_reuseFailAlloc_2506_, 2, v_ngen_2439_);
lean_ctor_set(v_reuseFailAlloc_2506_, 3, v_auxDeclNGen_2440_);
lean_ctor_set(v_reuseFailAlloc_2506_, 4, v_traceState_2441_);
lean_ctor_set(v_reuseFailAlloc_2506_, 5, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2506_, 6, v_recordedDeps_2442_);
lean_ctor_set(v_reuseFailAlloc_2506_, 7, v_messages_2443_);
lean_ctor_set(v_reuseFailAlloc_2506_, 8, v_infoState_2444_);
lean_ctor_set(v_reuseFailAlloc_2506_, 9, v_snapshotTasks_2445_);
v___x_2451_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v_mctx_2454_; lean_object* v_zetaDeltaFVarIds_2455_; lean_object* v_postponed_2456_; lean_object* v_diag_2457_; lean_object* v_rewriteFires_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2504_; 
v___x_2452_ = lean_st_ref_put(v_a_2344_, v___x_2451_);
v___x_2453_ = lean_st_ref_take(v_a_2342_);
v_mctx_2454_ = lean_ctor_get(v___x_2453_, 0);
v_zetaDeltaFVarIds_2455_ = lean_ctor_get(v___x_2453_, 2);
v_postponed_2456_ = lean_ctor_get(v___x_2453_, 3);
v_diag_2457_ = lean_ctor_get(v___x_2453_, 4);
v_rewriteFires_2458_ = lean_ctor_get(v___x_2453_, 5);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2504_ == 0)
{
lean_object* v_unused_2505_; 
v_unused_2505_ = lean_ctor_get(v___x_2453_, 1);
lean_dec(v_unused_2505_);
v___x_2460_ = v___x_2453_;
v_isShared_2461_ = v_isSharedCheck_2504_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_rewriteFires_2458_);
lean_inc(v_diag_2457_);
lean_inc(v_postponed_2456_);
lean_inc(v_zetaDeltaFVarIds_2455_);
lean_inc(v_mctx_2454_);
lean_dec(v___x_2453_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2504_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 1, v___x_2403_);
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_mctx_2454_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2503_, 2, v_zetaDeltaFVarIds_2455_);
lean_ctor_set(v_reuseFailAlloc_2503_, 3, v_postponed_2456_);
lean_ctor_set(v_reuseFailAlloc_2503_, 4, v_diag_2457_);
lean_ctor_set(v_reuseFailAlloc_2503_, 5, v_rewriteFires_2458_);
v___x_2463_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v_env_2466_; lean_object* v_nextMacroScope_2467_; lean_object* v_ngen_2468_; lean_object* v_auxDeclNGen_2469_; lean_object* v_traceState_2470_; lean_object* v_recordedDeps_2471_; lean_object* v_messages_2472_; lean_object* v_infoState_2473_; lean_object* v_snapshotTasks_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2501_; 
v___x_2464_ = lean_st_ref_put(v_a_2342_, v___x_2463_);
v___x_2465_ = lean_st_ref_take(v_a_2344_);
v_env_2466_ = lean_ctor_get(v___x_2465_, 0);
v_nextMacroScope_2467_ = lean_ctor_get(v___x_2465_, 1);
v_ngen_2468_ = lean_ctor_get(v___x_2465_, 2);
v_auxDeclNGen_2469_ = lean_ctor_get(v___x_2465_, 3);
v_traceState_2470_ = lean_ctor_get(v___x_2465_, 4);
v_recordedDeps_2471_ = lean_ctor_get(v___x_2465_, 6);
v_messages_2472_ = lean_ctor_get(v___x_2465_, 7);
v_infoState_2473_ = lean_ctor_get(v___x_2465_, 8);
v_snapshotTasks_2474_ = lean_ctor_get(v___x_2465_, 9);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2501_ == 0)
{
lean_object* v_unused_2502_; 
v_unused_2502_ = lean_ctor_get(v___x_2465_, 5);
lean_dec(v_unused_2502_);
v___x_2476_ = v___x_2465_;
v_isShared_2477_ = v_isSharedCheck_2501_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_snapshotTasks_2474_);
lean_inc(v_infoState_2473_);
lean_inc(v_messages_2472_);
lean_inc(v_recordedDeps_2471_);
lean_inc(v_traceState_2470_);
lean_inc(v_auxDeclNGen_2469_);
lean_inc(v_ngen_2468_);
lean_inc(v_nextMacroScope_2467_);
lean_inc(v_env_2466_);
lean_dec(v___x_2465_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2501_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2478_; lean_object* v___x_2480_; 
lean_inc(v_declName_2339_);
v___x_2478_ = l_Lean_addProtected(v_env_2466_, v_declName_2339_);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 5, v___x_2390_);
lean_ctor_set(v___x_2476_, 0, v___x_2478_);
v___x_2480_ = v___x_2476_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v___x_2478_);
lean_ctor_set(v_reuseFailAlloc_2500_, 1, v_nextMacroScope_2467_);
lean_ctor_set(v_reuseFailAlloc_2500_, 2, v_ngen_2468_);
lean_ctor_set(v_reuseFailAlloc_2500_, 3, v_auxDeclNGen_2469_);
lean_ctor_set(v_reuseFailAlloc_2500_, 4, v_traceState_2470_);
lean_ctor_set(v_reuseFailAlloc_2500_, 5, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2500_, 6, v_recordedDeps_2471_);
lean_ctor_set(v_reuseFailAlloc_2500_, 7, v_messages_2472_);
lean_ctor_set(v_reuseFailAlloc_2500_, 8, v_infoState_2473_);
lean_ctor_set(v_reuseFailAlloc_2500_, 9, v_snapshotTasks_2474_);
v___x_2480_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v_mctx_2483_; lean_object* v_zetaDeltaFVarIds_2484_; lean_object* v_postponed_2485_; lean_object* v_diag_2486_; lean_object* v_rewriteFires_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2498_; 
v___x_2481_ = lean_st_ref_put(v_a_2344_, v___x_2480_);
v___x_2482_ = lean_st_ref_take(v_a_2342_);
v_mctx_2483_ = lean_ctor_get(v___x_2482_, 0);
v_zetaDeltaFVarIds_2484_ = lean_ctor_get(v___x_2482_, 2);
v_postponed_2485_ = lean_ctor_get(v___x_2482_, 3);
v_diag_2486_ = lean_ctor_get(v___x_2482_, 4);
v_rewriteFires_2487_ = lean_ctor_get(v___x_2482_, 5);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2498_ == 0)
{
lean_object* v_unused_2499_; 
v_unused_2499_ = lean_ctor_get(v___x_2482_, 1);
lean_dec(v_unused_2499_);
v___x_2489_ = v___x_2482_;
v_isShared_2490_ = v_isSharedCheck_2498_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_rewriteFires_2487_);
lean_inc(v_diag_2486_);
lean_inc(v_postponed_2485_);
lean_inc(v_zetaDeltaFVarIds_2484_);
lean_inc(v_mctx_2483_);
lean_dec(v___x_2482_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2498_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 1, v___x_2403_);
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_mctx_2483_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2497_, 2, v_zetaDeltaFVarIds_2484_);
lean_ctor_set(v_reuseFailAlloc_2497_, 3, v_postponed_2485_);
lean_ctor_set(v_reuseFailAlloc_2497_, 4, v_diag_2486_);
lean_ctor_set(v_reuseFailAlloc_2497_, 5, v_rewriteFires_2487_);
v___x_2492_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2493_ = lean_st_ref_put(v_a_2342_, v___x_2492_);
v___x_2494_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_2339_);
v___x_2495_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_2494_, v_declName_2339_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v___x_2496_; 
lean_dec_ref_known(v___x_2495_, 1);
v___x_2496_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2339_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
return v___x_2496_;
}
else
{
lean_dec(v_declName_2339_);
return v___x_2495_;
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
else
{
lean_dec(v_declName_2339_);
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec(v_levelParams_2356_);
lean_dec(v_declName_2339_);
v_a_2523_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2369_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2369_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
else
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_dec(v___x_2359_);
lean_dec_ref(v_type_2357_);
lean_dec(v_levelParams_2356_);
lean_dec(v_name_2355_);
lean_dec(v___x_2352_);
lean_del_object(v___x_2350_);
lean_dec_ref(v_val_2348_);
lean_dec(v_indName_2340_);
lean_dec(v_declName_2339_);
v___x_2532_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__3, &l_Lean_mkCasesOnSameCtorHet___closed__3_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__3);
v___x_2533_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2532_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
return v___x_2533_;
}
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
lean_dec(v___x_2352_);
lean_del_object(v___x_2350_);
lean_dec_ref(v_val_2348_);
lean_dec(v_indName_2340_);
lean_dec(v_declName_2339_);
v_a_2534_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2353_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2353_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec(v_a_2347_);
lean_dec(v_indName_2340_);
lean_dec(v_declName_2339_);
v___x_2543_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__5, &l_Lean_mkCasesOnSameCtorHet___closed__5_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__5);
v___x_2544_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2543_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
return v___x_2544_;
}
}
else
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
lean_dec(v_indName_2340_);
lean_dec(v_declName_2339_);
v_a_2545_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2346_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2346_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object* v_declName_2553_, lean_object* v_indName_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_mkCasesOnSameCtorHet(v_declName_2553_, v_indName_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object* v_00_u03b1_2561_, lean_object* v_name_2562_, lean_object* v_type_2563_, lean_object* v_k_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_2562_, v_type_2563_, v_k_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object* v_00_u03b1_2571_, lean_object* v_name_2572_, lean_object* v_type_2573_, lean_object* v_k_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(v_00_u03b1_2571_, v_name_2572_, v_type_2573_, v_k_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object* v_tail_2581_, lean_object* v_params_2582_, lean_object* v_alts_2583_, lean_object* v___x_2584_, lean_object* v_ism2_2585_, lean_object* v_motive_2586_, lean_object* v_val_2587_, lean_object* v_indName_2588_, lean_object* v___x_2589_, lean_object* v___x_2590_, lean_object* v___x_2591_, lean_object* v_as_2592_, size_t v_sz_2593_, size_t v_i_2594_, lean_object* v_bs_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_2581_, v_params_2582_, v_alts_2583_, v___x_2584_, v_ism2_2585_, v_motive_2586_, v_val_2587_, v_indName_2588_, v___x_2589_, v___x_2590_, v___x_2591_, v_sz_2593_, v_i_2594_, v_bs_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object** _args){
lean_object* v_tail_2602_ = _args[0];
lean_object* v_params_2603_ = _args[1];
lean_object* v_alts_2604_ = _args[2];
lean_object* v___x_2605_ = _args[3];
lean_object* v_ism2_2606_ = _args[4];
lean_object* v_motive_2607_ = _args[5];
lean_object* v_val_2608_ = _args[6];
lean_object* v_indName_2609_ = _args[7];
lean_object* v___x_2610_ = _args[8];
lean_object* v___x_2611_ = _args[9];
lean_object* v___x_2612_ = _args[10];
lean_object* v_as_2613_ = _args[11];
lean_object* v_sz_2614_ = _args[12];
lean_object* v_i_2615_ = _args[13];
lean_object* v_bs_2616_ = _args[14];
lean_object* v___y_2617_ = _args[15];
lean_object* v___y_2618_ = _args[16];
lean_object* v___y_2619_ = _args[17];
lean_object* v___y_2620_ = _args[18];
lean_object* v___y_2621_ = _args[19];
_start:
{
size_t v_sz_boxed_2622_; size_t v_i_boxed_2623_; lean_object* v_res_2624_; 
v_sz_boxed_2622_ = lean_unbox_usize(v_sz_2614_);
lean_dec(v_sz_2614_);
v_i_boxed_2623_ = lean_unbox_usize(v_i_2615_);
lean_dec(v_i_2615_);
v_res_2624_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(v_tail_2602_, v_params_2603_, v_alts_2604_, v___x_2605_, v_ism2_2606_, v_motive_2607_, v_val_2608_, v_indName_2609_, v___x_2610_, v___x_2611_, v___x_2612_, v_as_2613_, v_sz_boxed_2622_, v_i_boxed_2623_, v_bs_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec_ref(v_as_2613_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object* v_tail_2625_, lean_object* v_params_2626_, lean_object* v___x_2627_, lean_object* v_motive_2628_, lean_object* v_as_2629_, size_t v_sz_2630_, size_t v_i_2631_, lean_object* v_bs_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_2625_, v_params_2626_, v___x_2627_, v_motive_2628_, v_sz_2630_, v_i_2631_, v_bs_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object* v_tail_2639_, lean_object* v_params_2640_, lean_object* v___x_2641_, lean_object* v_motive_2642_, lean_object* v_as_2643_, lean_object* v_sz_2644_, lean_object* v_i_2645_, lean_object* v_bs_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
size_t v_sz_boxed_2652_; size_t v_i_boxed_2653_; lean_object* v_res_2654_; 
v_sz_boxed_2652_ = lean_unbox_usize(v_sz_2644_);
lean_dec(v_sz_2644_);
v_i_boxed_2653_ = lean_unbox_usize(v_i_2645_);
lean_dec(v_i_2645_);
v_res_2654_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(v_tail_2639_, v_params_2640_, v___x_2641_, v_motive_2642_, v_as_2643_, v_sz_boxed_2652_, v_i_boxed_2653_, v_bs_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_as_2643_);
lean_dec_ref(v_params_2640_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object* v_declName_2655_, uint8_t v_s_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2655_, v_s_2656_, v___y_2658_, v___y_2660_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object* v_declName_2663_, lean_object* v_s_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
uint8_t v_s_boxed_2670_; lean_object* v_res_2671_; 
v_s_boxed_2670_ = lean_unbox(v_s_2664_);
v_res_2671_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(v_declName_2663_, v_s_boxed_2670_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object* v_00_u03b1_2672_, lean_object* v_constName_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2680_, lean_object* v_constName_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(v_00_u03b1_2680_, v_constName_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object* v_00_u03b1_2688_, lean_object* v_attrName_2689_, lean_object* v_declName_2690_, lean_object* v_asyncPrefix_x3f_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2689_, v_declName_2690_, v_asyncPrefix_x3f_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2698_, lean_object* v_attrName_2699_, lean_object* v_declName_2700_, lean_object* v_asyncPrefix_x3f_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(v_00_u03b1_2698_, v_attrName_2699_, v_declName_2700_, v_asyncPrefix_x3f_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object* v_00_u03b1_2708_, lean_object* v_attrName_2709_, lean_object* v_declName_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2709_, v_declName_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2717_, lean_object* v_attrName_2718_, lean_object* v_declName_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(v_00_u03b1_2717_, v_attrName_2718_, v_declName_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object* v_00_u03b1_2726_, lean_object* v_ref_2727_, lean_object* v_constName_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2727_, v_constName_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object* v_00_u03b1_2735_, lean_object* v_ref_2736_, lean_object* v_constName_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(v_00_u03b1_2735_, v_ref_2736_, v_constName_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v_ref_2736_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object* v_00_u03b1_2744_, lean_object* v_msg_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object* v_00_u03b1_2752_, lean_object* v_msg_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(v_00_u03b1_2752_, v_msg_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec(v___y_2755_);
lean_dec_ref(v___y_2754_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object* v_00_u03b1_2760_, lean_object* v_ref_2761_, lean_object* v_msg_2762_, lean_object* v_declHint_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2761_, v_msg_2762_, v_declHint_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object* v_00_u03b1_2770_, lean_object* v_ref_2771_, lean_object* v_msg_2772_, lean_object* v_declHint_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(v_00_u03b1_2770_, v_ref_2771_, v_msg_2772_, v_declHint_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec(v_ref_2771_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object* v_msg_2780_, lean_object* v_declHint_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v___x_2787_; 
v___x_2787_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2780_, v_declHint_2781_, v___y_2785_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object* v_msg_2788_, lean_object* v_declHint_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(v_msg_2788_, v_declHint_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object* v_00_u03b1_2796_, lean_object* v_ref_2797_, lean_object* v_msg_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_2797_, v_msg_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object* v_00_u03b1_2805_, lean_object* v_ref_2806_, lean_object* v_msg_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(v_00_u03b1_2805_, v_ref_2806_, v_msg_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v_ref_2806_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object* v_e_2814_, lean_object* v___y_2815_){
_start:
{
uint8_t v___x_2817_; 
v___x_2817_ = l_Lean_Expr_hasMVar(v_e_2814_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; 
v___x_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2818_, 0, v_e_2814_);
return v___x_2818_;
}
else
{
lean_object* v___x_2819_; lean_object* v_mctx_2820_; lean_object* v___x_2821_; lean_object* v_fst_2822_; lean_object* v_snd_2823_; lean_object* v___x_2824_; lean_object* v_cache_2825_; lean_object* v_zetaDeltaFVarIds_2826_; lean_object* v_postponed_2827_; lean_object* v_diag_2828_; lean_object* v_rewriteFires_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2838_; 
v___x_2819_ = lean_st_ref_get(v___y_2815_);
v_mctx_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc_ref(v_mctx_2820_);
lean_dec(v___x_2819_);
v___x_2821_ = l_Lean_instantiateMVarsCore(v_mctx_2820_, v_e_2814_);
v_fst_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_fst_2822_);
v_snd_2823_ = lean_ctor_get(v___x_2821_, 1);
lean_inc(v_snd_2823_);
lean_dec_ref(v___x_2821_);
v___x_2824_ = lean_st_ref_take(v___y_2815_);
v_cache_2825_ = lean_ctor_get(v___x_2824_, 1);
v_zetaDeltaFVarIds_2826_ = lean_ctor_get(v___x_2824_, 2);
v_postponed_2827_ = lean_ctor_get(v___x_2824_, 3);
v_diag_2828_ = lean_ctor_get(v___x_2824_, 4);
v_rewriteFires_2829_ = lean_ctor_get(v___x_2824_, 5);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2838_ == 0)
{
lean_object* v_unused_2839_; 
v_unused_2839_ = lean_ctor_get(v___x_2824_, 0);
lean_dec(v_unused_2839_);
v___x_2831_ = v___x_2824_;
v_isShared_2832_ = v_isSharedCheck_2838_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_rewriteFires_2829_);
lean_inc(v_diag_2828_);
lean_inc(v_postponed_2827_);
lean_inc(v_zetaDeltaFVarIds_2826_);
lean_inc(v_cache_2825_);
lean_dec(v___x_2824_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2838_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v_snd_2823_);
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_snd_2823_);
lean_ctor_set(v_reuseFailAlloc_2837_, 1, v_cache_2825_);
lean_ctor_set(v_reuseFailAlloc_2837_, 2, v_zetaDeltaFVarIds_2826_);
lean_ctor_set(v_reuseFailAlloc_2837_, 3, v_postponed_2827_);
lean_ctor_set(v_reuseFailAlloc_2837_, 4, v_diag_2828_);
lean_ctor_set(v_reuseFailAlloc_2837_, 5, v_rewriteFires_2829_);
v___x_2834_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_st_ref_put(v___y_2815_, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2836_, 0, v_fst_2822_);
return v___x_2836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object* v_e_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2840_, v___y_2841_);
lean_dec(v___y_2841_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object* v_e_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v___x_2850_; 
v___x_2850_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2844_, v___y_2846_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object* v_e_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(v_e_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object* v_matcherName_2858_, lean_object* v_info_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v___x_2863_; lean_object* v_env_2864_; lean_object* v_nextMacroScope_2865_; lean_object* v_ngen_2866_; lean_object* v_auxDeclNGen_2867_; lean_object* v_traceState_2868_; lean_object* v_recordedDeps_2869_; lean_object* v_messages_2870_; lean_object* v_infoState_2871_; lean_object* v_snapshotTasks_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2900_; 
v___x_2863_ = lean_st_ref_take(v___y_2861_);
v_env_2864_ = lean_ctor_get(v___x_2863_, 0);
v_nextMacroScope_2865_ = lean_ctor_get(v___x_2863_, 1);
v_ngen_2866_ = lean_ctor_get(v___x_2863_, 2);
v_auxDeclNGen_2867_ = lean_ctor_get(v___x_2863_, 3);
v_traceState_2868_ = lean_ctor_get(v___x_2863_, 4);
v_recordedDeps_2869_ = lean_ctor_get(v___x_2863_, 6);
v_messages_2870_ = lean_ctor_get(v___x_2863_, 7);
v_infoState_2871_ = lean_ctor_get(v___x_2863_, 8);
v_snapshotTasks_2872_ = lean_ctor_get(v___x_2863_, 9);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; 
v_unused_2901_ = lean_ctor_get(v___x_2863_, 5);
lean_dec(v_unused_2901_);
v___x_2874_ = v___x_2863_;
v_isShared_2875_ = v_isSharedCheck_2900_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_snapshotTasks_2872_);
lean_inc(v_infoState_2871_);
lean_inc(v_messages_2870_);
lean_inc(v_recordedDeps_2869_);
lean_inc(v_traceState_2868_);
lean_inc(v_auxDeclNGen_2867_);
lean_inc(v_ngen_2866_);
lean_inc(v_nextMacroScope_2865_);
lean_inc(v_env_2864_);
lean_dec(v___x_2863_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2900_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2879_; 
v___x_2876_ = l_Lean_Meta_Match_Extension_addMatcherInfo(v_env_2864_, v_matcherName_2858_, v_info_2859_);
v___x_2877_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 5, v___x_2877_);
lean_ctor_set(v___x_2874_, 0, v___x_2876_);
v___x_2879_ = v___x_2874_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2876_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_nextMacroScope_2865_);
lean_ctor_set(v_reuseFailAlloc_2899_, 2, v_ngen_2866_);
lean_ctor_set(v_reuseFailAlloc_2899_, 3, v_auxDeclNGen_2867_);
lean_ctor_set(v_reuseFailAlloc_2899_, 4, v_traceState_2868_);
lean_ctor_set(v_reuseFailAlloc_2899_, 5, v___x_2877_);
lean_ctor_set(v_reuseFailAlloc_2899_, 6, v_recordedDeps_2869_);
lean_ctor_set(v_reuseFailAlloc_2899_, 7, v_messages_2870_);
lean_ctor_set(v_reuseFailAlloc_2899_, 8, v_infoState_2871_);
lean_ctor_set(v_reuseFailAlloc_2899_, 9, v_snapshotTasks_2872_);
v___x_2879_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v_mctx_2882_; lean_object* v_zetaDeltaFVarIds_2883_; lean_object* v_postponed_2884_; lean_object* v_diag_2885_; lean_object* v_rewriteFires_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2897_; 
v___x_2880_ = lean_st_ref_put(v___y_2861_, v___x_2879_);
v___x_2881_ = lean_st_ref_take(v___y_2860_);
v_mctx_2882_ = lean_ctor_get(v___x_2881_, 0);
v_zetaDeltaFVarIds_2883_ = lean_ctor_get(v___x_2881_, 2);
v_postponed_2884_ = lean_ctor_get(v___x_2881_, 3);
v_diag_2885_ = lean_ctor_get(v___x_2881_, 4);
v_rewriteFires_2886_ = lean_ctor_get(v___x_2881_, 5);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2897_ == 0)
{
lean_object* v_unused_2898_; 
v_unused_2898_ = lean_ctor_get(v___x_2881_, 1);
lean_dec(v_unused_2898_);
v___x_2888_ = v___x_2881_;
v_isShared_2889_ = v_isSharedCheck_2897_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_rewriteFires_2886_);
lean_inc(v_diag_2885_);
lean_inc(v_postponed_2884_);
lean_inc(v_zetaDeltaFVarIds_2883_);
lean_inc(v_mctx_2882_);
lean_dec(v___x_2881_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2897_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2893_; 
v___x_2890_ = lean_box(0);
v___x_2891_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 1, v___x_2891_);
v___x_2893_ = v___x_2888_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_mctx_2882_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v___x_2891_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_zetaDeltaFVarIds_2883_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v_postponed_2884_);
lean_ctor_set(v_reuseFailAlloc_2896_, 4, v_diag_2885_);
lean_ctor_set(v_reuseFailAlloc_2896_, 5, v_rewriteFires_2886_);
v___x_2893_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = lean_st_ref_put(v___y_2860_, v___x_2893_);
v___x_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2890_);
return v___x_2895_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object* v_matcherName_2902_, lean_object* v_info_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2902_, v_info_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec(v___y_2904_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object* v_matcherName_2908_, lean_object* v_info_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2908_, v_info_2909_, v___y_2911_, v___y_2913_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object* v_matcherName_2916_, lean_object* v_info_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(v_matcherName_2916_, v_info_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object* v_motive_2924_, lean_object* v___x_2925_, lean_object* v_newEqs1_2926_, uint8_t v___x_2927_, uint8_t v___x_2928_, uint8_t v___x_2929_, lean_object* v_ism1_x27_2930_, lean_object* v_ism2_x27_2931_, lean_object* v_newRefls1_2932_, lean_object* v_newEqs2_2933_, lean_object* v_newRefls2_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2940_ = l_Lean_mkAppN(v_motive_2924_, v___x_2925_);
v___x_2941_ = l_Array_append___redArg(v_newEqs1_2926_, v_newEqs2_2933_);
v___x_2942_ = l_Lean_Meta_mkForallFVars(v___x_2941_, v___x_2940_, v___x_2927_, v___x_2928_, v___x_2928_, v___x_2929_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec_ref(v___x_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = l_Array_append___redArg(v_ism1_x27_2930_, v_ism2_x27_2931_);
v___x_2945_ = l_Lean_Meta_mkLambdaFVars(v___x_2944_, v_a_2943_, v___x_2927_, v___x_2928_, v___x_2927_, v___x_2928_, v___x_2929_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec_ref(v___x_2944_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2955_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2948_ = v___x_2945_;
v_isShared_2949_ = v_isSharedCheck_2955_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2945_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2955_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2950_ = l_Array_append___redArg(v_newRefls1_2932_, v_newRefls2_2934_);
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v_a_2946_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 0, v___x_2951_);
v___x_2953_ = v___x_2948_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
else
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
lean_dec_ref(v_newRefls1_2932_);
v_a_2956_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2945_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2945_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
lean_dec_ref(v_newRefls1_2932_);
lean_dec_ref(v_ism1_x27_2930_);
v_a_2964_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2942_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2942_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object* v_motive_2972_, lean_object* v___x_2973_, lean_object* v_newEqs1_2974_, lean_object* v___x_2975_, lean_object* v___x_2976_, lean_object* v___x_2977_, lean_object* v_ism1_x27_2978_, lean_object* v_ism2_x27_2979_, lean_object* v_newRefls1_2980_, lean_object* v_newEqs2_2981_, lean_object* v_newRefls2_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
uint8_t v___x_14987__boxed_2988_; uint8_t v___x_14988__boxed_2989_; uint8_t v___x_14989__boxed_2990_; lean_object* v_res_2991_; 
v___x_14987__boxed_2988_ = lean_unbox(v___x_2975_);
v___x_14988__boxed_2989_ = lean_unbox(v___x_2976_);
v___x_14989__boxed_2990_ = lean_unbox(v___x_2977_);
v_res_2991_ = l_Lean_mkCasesOnSameCtor___lam__0(v_motive_2972_, v___x_2973_, v_newEqs1_2974_, v___x_14987__boxed_2988_, v___x_14988__boxed_2989_, v___x_14989__boxed_2990_, v_ism1_x27_2978_, v_ism2_x27_2979_, v_newRefls1_2980_, v_newEqs2_2981_, v_newRefls2_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec_ref(v_newRefls2_2982_);
lean_dec_ref(v_newEqs2_2981_);
lean_dec_ref(v_ism2_x27_2979_);
lean_dec_ref(v___x_2973_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object* v_motive_2992_, lean_object* v___x_2993_, uint8_t v___x_2994_, uint8_t v___x_2995_, uint8_t v___x_2996_, lean_object* v_ism1_x27_2997_, lean_object* v_ism2_x27_2998_, lean_object* v_is_2999_, lean_object* v___x_3000_, lean_object* v_newEqs1_3001_, lean_object* v_newRefls1_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3008_ = lean_box(v___x_2994_);
v___x_3009_ = lean_box(v___x_2995_);
v___x_3010_ = lean_box(v___x_2996_);
lean_inc_ref(v_ism2_x27_2998_);
v___f_3011_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3011_, 0, v_motive_2992_);
lean_closure_set(v___f_3011_, 1, v___x_2993_);
lean_closure_set(v___f_3011_, 2, v_newEqs1_3001_);
lean_closure_set(v___f_3011_, 3, v___x_3008_);
lean_closure_set(v___f_3011_, 4, v___x_3009_);
lean_closure_set(v___f_3011_, 5, v___x_3010_);
lean_closure_set(v___f_3011_, 6, v_ism1_x27_2997_);
lean_closure_set(v___f_3011_, 7, v_ism2_x27_2998_);
lean_closure_set(v___f_3011_, 8, v_newRefls1_3002_);
v___x_3012_ = lean_array_push(v_is_2999_, v___x_3000_);
v___x_3013_ = l_Lean_Meta_withNewEqs___redArg(v___x_3012_, v_ism2_x27_2998_, v___f_3011_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object* v_motive_3014_, lean_object* v___x_3015_, lean_object* v___x_3016_, lean_object* v___x_3017_, lean_object* v___x_3018_, lean_object* v_ism1_x27_3019_, lean_object* v_ism2_x27_3020_, lean_object* v_is_3021_, lean_object* v___x_3022_, lean_object* v_newEqs1_3023_, lean_object* v_newRefls1_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
uint8_t v___x_15078__boxed_3030_; uint8_t v___x_15079__boxed_3031_; uint8_t v___x_15080__boxed_3032_; lean_object* v_res_3033_; 
v___x_15078__boxed_3030_ = lean_unbox(v___x_3016_);
v___x_15079__boxed_3031_ = lean_unbox(v___x_3017_);
v___x_15080__boxed_3032_ = lean_unbox(v___x_3018_);
v_res_3033_ = l_Lean_mkCasesOnSameCtor___lam__1(v_motive_3014_, v___x_3015_, v___x_15078__boxed_3030_, v___x_15079__boxed_3031_, v___x_15080__boxed_3032_, v_ism1_x27_3019_, v_ism2_x27_3020_, v_is_3021_, v___x_3022_, v_newEqs1_3023_, v_newRefls1_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object* v___x_3034_, uint8_t v___x_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
lean_object* v___x_3041_; 
v___x_3041_ = l_Lean_addDecl(v___x_3034_, v___x_3035_, v___y_3038_, v___y_3039_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object* v___x_3042_, lean_object* v___x_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
uint8_t v___x_15120__boxed_3049_; lean_object* v_res_3050_; 
v___x_15120__boxed_3049_ = lean_unbox(v___x_3043_);
v_res_3050_ = l_Lean_mkCasesOnSameCtor___lam__2(v___x_3042_, v___x_15120__boxed_3049_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
return v_res_3050_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0));
v___x_3053_ = l_Lean_stringToMessageData(v___x_3052_);
return v___x_3053_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2));
v___x_3056_ = l_Lean_stringToMessageData(v___x_3055_);
return v___x_3056_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3062_ = lean_box(0);
v___x_3063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6));
v___x_3064_ = l_Lean_mkConst(v___x_3063_, v___x_3062_);
return v___x_3064_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8));
v___x_3067_ = l_Lean_stringToMessageData(v___x_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object* v___x_3068_, lean_object* v_a_3069_, lean_object* v___x_3070_, lean_object* v_zs1_3071_, lean_object* v_snd_3072_, uint8_t v___x_3073_, uint8_t v___x_3074_, uint8_t v___x_3075_, lean_object* v_alts_3076_, lean_object* v_zs2_3077_, lean_object* v___ctorRet2_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3084_ = lean_array_get_borrowed(v___x_3068_, v_a_3069_, v___x_3070_);
lean_inc_ref(v_zs1_3071_);
v___x_3085_ = l_Array_append___redArg(v_zs1_3071_, v_zs2_3077_);
lean_inc(v___x_3084_);
v___x_3086_ = l_Lean_Meta_instantiateForall(v___x_3084_, v___x_3085_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v_a_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v_a_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_a_3087_);
lean_dec_ref_known(v___x_3086_, 1);
v___x_3088_ = lean_box(0);
v___x_3089_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3087_, v___x_3088_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = l_Lean_Expr_mvarId_x21(v_a_3090_);
v___x_3092_ = lean_array_get_size(v_snd_3072_);
v___x_3093_ = lean_box(0);
v___x_3094_ = lean_box(0);
lean_inc_ref(v___y_3081_);
v___x_3095_ = l_Lean_Meta_Cases_unifyEqs_x3f(v___x_3092_, v___x_3091_, v___x_3093_, v___x_3094_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___x_3095_, 1);
if (lean_obj_tag(v_a_3096_) == 1)
{
lean_object* v_val_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3144_; 
v_val_3097_ = lean_ctor_get(v_a_3096_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v_a_3096_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3099_ = v_a_3096_;
v_isShared_3100_ = v_isSharedCheck_3144_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_val_3097_);
lean_dec(v_a_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3144_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v_fst_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3142_; 
v_fst_3101_ = lean_ctor_get(v_val_3097_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v_val_3097_);
if (v_isSharedCheck_3142_ == 0)
{
lean_object* v_unused_3143_; 
v_unused_3143_ = lean_ctor_get(v_val_3097_, 1);
lean_dec(v_unused_3143_);
v___x_3103_ = v_val_3097_;
v_isShared_3104_ = v_isSharedCheck_3142_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_fst_3101_);
lean_dec(v_val_3097_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3142_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___y_3106_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3134_ = lean_array_get_borrowed(v___x_3068_, v_alts_3076_, v___x_3070_);
v___x_3135_ = lean_array_get_size(v_zs1_3071_);
lean_dec_ref(v_zs1_3071_);
v___x_3136_ = lean_unsigned_to_nat(0u);
v___x_3137_ = lean_nat_dec_eq(v___x_3135_, v___x_3136_);
if (v___x_3137_ == 0)
{
lean_inc(v___x_3134_);
v___y_3106_ = v___x_3134_;
goto v___jp_3105_;
}
else
{
lean_object* v___x_3138_; uint8_t v___x_3139_; 
v___x_3138_ = lean_array_get_size(v_zs2_3077_);
v___x_3139_ = lean_nat_dec_eq(v___x_3138_, v___x_3136_);
if (v___x_3139_ == 0)
{
lean_inc(v___x_3134_);
v___y_3106_ = v___x_3134_;
goto v___jp_3105_;
}
else
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7);
lean_inc(v___x_3134_);
v___x_3141_ = l_Lean_Expr_app___override(v___x_3134_, v___x_3140_);
v___y_3106_ = v___x_3141_;
goto v___jp_3105_;
}
}
v___jp_3105_:
{
uint8_t v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3107_ = 0;
v___x_3108_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3108_, 0, v___x_3107_);
lean_ctor_set_uint8(v___x_3108_, 1, v___x_3073_);
lean_ctor_set_uint8(v___x_3108_, 2, v___x_3074_);
lean_ctor_set_uint8(v___x_3108_, 3, v___x_3073_);
lean_inc_ref(v___y_3106_);
lean_inc(v_fst_3101_);
v___x_3109_ = l_Lean_MVarId_apply(v_fst_3101_, v___y_3106_, v___x_3108_, v___x_3094_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3109_, 1);
if (lean_obj_tag(v_a_3110_) == 0)
{
lean_object* v___x_3111_; 
lean_dec_ref(v___y_3106_);
lean_del_object(v___x_3103_);
lean_dec(v_fst_3101_);
lean_del_object(v___x_3099_);
v___x_3111_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_a_3090_, v___y_3080_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3113_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3113_ = l_Lean_Meta_mkLambdaFVars(v___x_3085_, v_a_3112_, v___x_3074_, v___x_3073_, v___x_3074_, v___x_3073_, v___x_3075_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
lean_dec_ref(v___x_3085_);
return v___x_3113_;
}
else
{
lean_dec_ref(v___x_3085_);
return v___x_3111_;
}
}
else
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3117_; 
lean_dec(v_a_3110_);
lean_dec(v_a_3090_);
lean_dec_ref(v___x_3085_);
v___x_3114_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1);
v___x_3115_ = l_Lean_MessageData_ofExpr(v___y_3106_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set_tag(v___x_3103_, 7);
lean_ctor_set(v___x_3103_, 1, v___x_3115_);
lean_ctor_set(v___x_3103_, 0, v___x_3114_);
v___x_3117_ = v___x_3103_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3114_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3115_);
v___x_3117_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3121_; 
v___x_3118_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3);
v___x_3119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3117_);
lean_ctor_set(v___x_3119_, 1, v___x_3118_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 0, v_fst_3101_);
v___x_3121_ = v___x_3099_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_fst_3101_);
v___x_3121_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3119_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3122_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
return v___x_3123_;
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_dec_ref(v___y_3106_);
lean_del_object(v___x_3103_);
lean_dec(v_fst_3101_);
lean_del_object(v___x_3099_);
lean_dec(v_a_3090_);
lean_dec_ref(v___x_3085_);
v_a_3126_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3109_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3109_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
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
else
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
lean_dec(v_a_3096_);
lean_dec(v_a_3090_);
lean_dec_ref(v___x_3085_);
lean_dec_ref(v_zs1_3071_);
v___x_3145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9);
v___x_3146_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3145_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
return v___x_3146_;
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec(v_a_3090_);
lean_dec_ref(v___x_3085_);
lean_dec_ref(v_zs1_3071_);
v_a_3147_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3095_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3095_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
else
{
lean_dec_ref(v___x_3085_);
lean_dec_ref(v_zs1_3071_);
return v___x_3089_;
}
}
else
{
lean_dec_ref(v___x_3085_);
lean_dec_ref(v_zs1_3071_);
return v___x_3086_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object* v___x_3155_, lean_object* v_a_3156_, lean_object* v___x_3157_, lean_object* v_zs1_3158_, lean_object* v_snd_3159_, lean_object* v___x_3160_, lean_object* v___x_3161_, lean_object* v___x_3162_, lean_object* v_alts_3163_, lean_object* v_zs2_3164_, lean_object* v___ctorRet2_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
uint8_t v___x_15180__boxed_3171_; uint8_t v___x_15181__boxed_3172_; uint8_t v___x_15182__boxed_3173_; lean_object* v_res_3174_; 
v___x_15180__boxed_3171_ = lean_unbox(v___x_3160_);
v___x_15181__boxed_3172_ = lean_unbox(v___x_3161_);
v___x_15182__boxed_3173_ = lean_unbox(v___x_3162_);
v_res_3174_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(v___x_3155_, v_a_3156_, v___x_3157_, v_zs1_3158_, v_snd_3159_, v___x_15180__boxed_3171_, v___x_15181__boxed_3172_, v___x_15182__boxed_3173_, v_alts_3163_, v_zs2_3164_, v___ctorRet2_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec_ref(v___ctorRet2_3165_);
lean_dec_ref(v_zs2_3164_);
lean_dec_ref(v_alts_3163_);
lean_dec_ref(v_snd_3159_);
lean_dec(v___x_3157_);
lean_dec_ref(v_a_3156_);
lean_dec_ref(v___x_3155_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object* v___x_3175_, lean_object* v_a_3176_, lean_object* v___x_3177_, lean_object* v_snd_3178_, uint8_t v___x_3179_, uint8_t v___x_3180_, uint8_t v___x_3181_, lean_object* v_alts_3182_, lean_object* v_a_3183_, lean_object* v_zs1_3184_, lean_object* v___ctorRet1_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___f_3194_; lean_object* v___x_3195_; 
v___x_3191_ = lean_box(v___x_3179_);
v___x_3192_ = lean_box(v___x_3180_);
v___x_3193_ = lean_box(v___x_3181_);
v___f_3194_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3194_, 0, v___x_3175_);
lean_closure_set(v___f_3194_, 1, v_a_3176_);
lean_closure_set(v___f_3194_, 2, v___x_3177_);
lean_closure_set(v___f_3194_, 3, v_zs1_3184_);
lean_closure_set(v___f_3194_, 4, v_snd_3178_);
lean_closure_set(v___f_3194_, 5, v___x_3191_);
lean_closure_set(v___f_3194_, 6, v___x_3192_);
lean_closure_set(v___f_3194_, 7, v___x_3193_);
lean_closure_set(v___f_3194_, 8, v_alts_3182_);
v___x_3195_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3183_, v___f_3194_, v___x_3180_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object* v___x_3196_, lean_object* v_a_3197_, lean_object* v___x_3198_, lean_object* v_snd_3199_, lean_object* v___x_3200_, lean_object* v___x_3201_, lean_object* v___x_3202_, lean_object* v_alts_3203_, lean_object* v_a_3204_, lean_object* v_zs1_3205_, lean_object* v___ctorRet1_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
uint8_t v___x_15379__boxed_3212_; uint8_t v___x_15380__boxed_3213_; uint8_t v___x_15381__boxed_3214_; lean_object* v_res_3215_; 
v___x_15379__boxed_3212_ = lean_unbox(v___x_3200_);
v___x_15380__boxed_3213_ = lean_unbox(v___x_3201_);
v___x_15381__boxed_3214_ = lean_unbox(v___x_3202_);
v_res_3215_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(v___x_3196_, v_a_3197_, v___x_3198_, v_snd_3199_, v___x_15379__boxed_3212_, v___x_15380__boxed_3213_, v___x_15381__boxed_3214_, v_alts_3203_, v_a_3204_, v_zs1_3205_, v___ctorRet1_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
lean_dec(v___y_3210_);
lean_dec_ref(v___y_3209_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3207_);
lean_dec_ref(v___ctorRet1_3206_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object* v_tail_3216_, lean_object* v_params_3217_, lean_object* v_a_3218_, lean_object* v_snd_3219_, lean_object* v_alts_3220_, size_t v_sz_3221_, size_t v_i_3222_, lean_object* v_bs_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
uint8_t v___x_3229_; 
v___x_3229_ = lean_usize_dec_lt(v_i_3222_, v_sz_3221_);
if (v___x_3229_ == 0)
{
lean_object* v___x_3230_; 
lean_dec_ref(v_alts_3220_);
lean_dec_ref(v_snd_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_tail_3216_);
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_bs_3223_);
return v___x_3230_;
}
else
{
lean_object* v___x_3231_; uint8_t v___x_3232_; uint8_t v___x_3233_; lean_object* v_v_3234_; lean_object* v___x_3235_; lean_object* v_bs_x27_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3231_ = l_Lean_instInhabitedExpr;
v___x_3232_ = 0;
v___x_3233_ = 1;
v_v_3234_ = lean_array_uget(v_bs_3223_, v_i_3222_);
v___x_3235_ = lean_unsigned_to_nat(0u);
v_bs_x27_3236_ = lean_array_uset(v_bs_3223_, v_i_3222_, v___x_3235_);
v___x_3237_ = lean_usize_to_nat(v_i_3222_);
lean_inc(v_tail_3216_);
v___x_3238_ = l_Lean_mkConst(v_v_3234_, v_tail_3216_);
v___x_3239_ = l_Lean_mkAppN(v___x_3238_, v_params_3217_);
lean_inc(v___y_3227_);
lean_inc_ref(v___y_3226_);
lean_inc(v___y_3225_);
lean_inc_ref(v___y_3224_);
v___x_3240_ = lean_infer_type(v___x_3239_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v_a_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___f_3245_; lean_object* v___x_3246_; 
v_a_3241_ = lean_ctor_get(v___x_3240_, 0);
lean_inc_n(v_a_3241_, 2);
lean_dec_ref_known(v___x_3240_, 1);
v___x_3242_ = lean_box(v___x_3229_);
v___x_3243_ = lean_box(v___x_3232_);
v___x_3244_ = lean_box(v___x_3233_);
lean_inc_ref(v_alts_3220_);
lean_inc_ref(v_snd_3219_);
lean_inc_ref(v_a_3218_);
v___f_3245_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3245_, 0, v___x_3231_);
lean_closure_set(v___f_3245_, 1, v_a_3218_);
lean_closure_set(v___f_3245_, 2, v___x_3237_);
lean_closure_set(v___f_3245_, 3, v_snd_3219_);
lean_closure_set(v___f_3245_, 4, v___x_3242_);
lean_closure_set(v___f_3245_, 5, v___x_3243_);
lean_closure_set(v___f_3245_, 6, v___x_3244_);
lean_closure_set(v___f_3245_, 7, v_alts_3220_);
lean_closure_set(v___f_3245_, 8, v_a_3241_);
v___x_3246_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3241_, v___f_3245_, v___x_3232_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; size_t v___x_3248_; size_t v___x_3249_; lean_object* v___x_3250_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref_known(v___x_3246_, 1);
v___x_3248_ = ((size_t)1ULL);
v___x_3249_ = lean_usize_add(v_i_3222_, v___x_3248_);
v___x_3250_ = lean_array_uset(v_bs_x27_3236_, v_i_3222_, v_a_3247_);
v_i_3222_ = v___x_3249_;
v_bs_3223_ = v___x_3250_;
goto _start;
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
lean_dec_ref(v_bs_x27_3236_);
lean_dec_ref(v_alts_3220_);
lean_dec_ref(v_snd_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_tail_3216_);
v_a_3252_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3246_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3246_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_dec(v___x_3237_);
lean_dec_ref(v_bs_x27_3236_);
lean_dec_ref(v_alts_3220_);
lean_dec_ref(v_snd_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_tail_3216_);
v_a_3260_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v___x_3240_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v___x_3240_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object* v_tail_3268_, lean_object* v_params_3269_, lean_object* v_a_3270_, lean_object* v_snd_3271_, lean_object* v_alts_3272_, lean_object* v_sz_3273_, lean_object* v_i_3274_, lean_object* v_bs_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
size_t v_sz_boxed_3281_; size_t v_i_boxed_3282_; lean_object* v_res_3283_; 
v_sz_boxed_3281_ = lean_unbox_usize(v_sz_3273_);
lean_dec(v_sz_3273_);
v_i_boxed_3282_ = lean_unbox_usize(v_i_3274_);
lean_dec(v_i_3274_);
v_res_3283_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3268_, v_params_3269_, v_a_3270_, v_snd_3271_, v_alts_3272_, v_sz_boxed_3281_, v_i_boxed_3282_, v_bs_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec_ref(v_params_3269_);
return v_res_3283_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3284_ = lean_box(0);
v___x_3285_ = lean_unsigned_to_nat(16u);
v___x_3286_ = lean_mk_array(v___x_3285_, v___x_3284_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object* v_motive_3287_, lean_object* v___x_3288_, uint8_t v___x_3289_, uint8_t v___x_3290_, uint8_t v___x_3291_, lean_object* v_ism1_x27_3292_, lean_object* v_is_3293_, lean_object* v___x_3294_, lean_object* v___x_3295_, lean_object* v___x_3296_, lean_object* v___x_3297_, lean_object* v_params_3298_, lean_object* v___x_3299_, lean_object* v___x_3300_, lean_object* v_heq_3301_, lean_object* v_val_3302_, lean_object* v_tail_3303_, lean_object* v_alts_3304_, size_t v_sz_3305_, size_t v___x_3306_, lean_object* v___x_3307_, lean_object* v___x_3308_, lean_object* v_declName_3309_, lean_object* v_levelParams_3310_, lean_object* v_numIndices_3311_, lean_object* v___x_3312_, lean_object* v___x_3313_, lean_object* v_numParams_3314_, lean_object* v_snd_3315_, lean_object* v_ism2_x27_3316_, lean_object* v_x_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3323_ = lean_box(v___x_3289_);
v___x_3324_ = lean_box(v___x_3290_);
v___x_3325_ = lean_box(v___x_3291_);
lean_inc_ref(v___x_3294_);
lean_inc_ref_n(v_is_3293_, 2);
lean_inc_ref(v_ism1_x27_3292_);
lean_inc_ref(v_motive_3287_);
v___f_3326_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3326_, 0, v_motive_3287_);
lean_closure_set(v___f_3326_, 1, v___x_3288_);
lean_closure_set(v___f_3326_, 2, v___x_3323_);
lean_closure_set(v___f_3326_, 3, v___x_3324_);
lean_closure_set(v___f_3326_, 4, v___x_3325_);
lean_closure_set(v___f_3326_, 5, v_ism1_x27_3292_);
lean_closure_set(v___f_3326_, 6, v_ism2_x27_3316_);
lean_closure_set(v___f_3326_, 7, v_is_3293_);
lean_closure_set(v___f_3326_, 8, v___x_3294_);
lean_inc_ref(v___x_3295_);
v___x_3327_ = lean_array_push(v_is_3293_, v___x_3295_);
v___x_3328_ = l_Lean_Meta_withNewEqs___redArg(v___x_3327_, v_ism1_x27_3292_, v___f_3326_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v_fst_3330_; lean_object* v_snd_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3432_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v_fst_3330_ = lean_ctor_get(v_a_3329_, 0);
v_snd_3331_ = lean_ctor_get(v_a_3329_, 1);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_a_3329_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3333_ = v_a_3329_;
v_isShared_3334_ = v_isSharedCheck_3432_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_snd_3331_);
lean_inc(v_fst_3330_);
lean_dec(v_a_3329_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3432_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3335_ = l_Lean_mkConst(v___x_3296_, v___x_3297_);
v___x_3336_ = l_Lean_mkAppN(v___x_3335_, v_params_3298_);
v___x_3337_ = l_Lean_Expr_app___override(v___x_3336_, v_fst_3330_);
lean_inc_ref(v_is_3293_);
v___x_3338_ = l_Array_append___redArg(v_is_3293_, v___x_3299_);
v___x_3339_ = l_Array_append___redArg(v___x_3338_, v_is_3293_);
v___x_3340_ = l_Array_append___redArg(v___x_3339_, v___x_3300_);
v___x_3341_ = l_Lean_mkAppN(v___x_3337_, v___x_3340_);
lean_dec_ref(v___x_3340_);
lean_inc_ref(v_heq_3301_);
v___x_3342_ = l_Lean_Expr_app___override(v___x_3341_, v_heq_3301_);
v___x_3343_ = l_Lean_InductiveVal_numCtors(v_val_3302_);
lean_inc_ref(v___x_3342_);
v___x_3344_ = l_Lean_Meta_inferArgumentTypesN(v___x_3343_, v___x_3342_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3346_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v___x_3344_, 1);
lean_inc_ref(v_alts_3304_);
lean_inc(v_snd_3331_);
v___x_3346_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3303_, v_params_3298_, v_a_3345_, v_snd_3331_, v_alts_3304_, v_sz_3305_, v___x_3306_, v___x_3307_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v___x_3348_ = l_Lean_mkAppN(v___x_3342_, v_a_3347_);
lean_dec(v_a_3347_);
v___x_3349_ = l_Lean_mkAppN(v___x_3348_, v_snd_3331_);
lean_dec(v_snd_3331_);
lean_inc_ref(v___x_3308_);
v___x_3350_ = lean_array_push(v___x_3308_, v_motive_3287_);
v___x_3351_ = l_Array_append___redArg(v_params_3298_, v___x_3350_);
lean_dec_ref(v___x_3350_);
v___x_3352_ = l_Array_append___redArg(v___x_3351_, v_is_3293_);
lean_dec_ref(v_is_3293_);
v___x_3353_ = lean_unsigned_to_nat(2u);
v___x_3354_ = lean_mk_empty_array_with_capacity(v___x_3353_);
v___x_3355_ = lean_array_push(v___x_3354_, v___x_3295_);
v___x_3356_ = lean_array_push(v___x_3355_, v___x_3294_);
v___x_3357_ = l_Array_append___redArg(v___x_3352_, v___x_3356_);
lean_dec_ref(v___x_3356_);
v___x_3358_ = lean_array_push(v___x_3308_, v_heq_3301_);
v___x_3359_ = l_Array_append___redArg(v___x_3357_, v___x_3358_);
lean_dec_ref(v___x_3358_);
v___x_3360_ = l_Array_append___redArg(v___x_3359_, v_alts_3304_);
lean_dec_ref(v_alts_3304_);
v___x_3361_ = l_Lean_Meta_mkLambdaFVars(v___x_3360_, v___x_3349_, v___x_3289_, v___x_3290_, v___x_3289_, v___x_3290_, v___x_3291_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
lean_dec_ref(v___x_3360_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3363_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc_n(v_a_3362_, 2);
lean_dec_ref_known(v___x_3361_, 1);
lean_inc(v___y_3321_);
lean_inc_ref(v___y_3320_);
lean_inc(v___y_3319_);
lean_inc_ref(v___y_3318_);
v___x_3363_ = lean_infer_type(v_a_3362_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3399_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___x_3363_, 1);
v___x_3365_ = lean_box(1);
lean_inc(v_declName_3309_);
v___x_3366_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_3309_, v_levelParams_3310_, v_a_3364_, v_a_3362_, v___x_3365_, v___y_3321_);
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3369_ = v___x_3366_;
v_isShared_3370_ = v_isSharedCheck_3399_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3366_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3399_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v___x_3372_; 
if (v_isShared_3370_ == 0)
{
lean_ctor_set_tag(v___x_3369_, 1);
v___x_3372_ = v___x_3369_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3367_);
v___x_3372_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
lean_object* v___x_3373_; lean_object* v___f_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3384_; 
v___x_3373_ = lean_box(v___x_3289_);
lean_inc_ref(v___x_3372_);
v___f_3374_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3374_, 0, v___x_3372_);
lean_closure_set(v___f_3374_, 1, v___x_3373_);
v___x_3375_ = lean_nat_add(v_numIndices_3311_, v___x_3312_);
lean_inc(v___x_3313_);
v___x_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3313_);
v___x_3377_ = lean_box(0);
v___x_3378_ = lean_mk_empty_array_with_capacity(v___x_3312_);
v___x_3379_ = lean_array_push(v___x_3378_, v___x_3377_);
v___x_3380_ = lean_array_push(v___x_3379_, v___x_3377_);
v___x_3381_ = lean_array_push(v___x_3380_, v___x_3377_);
v___x_3382_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___lam__3___closed__0, &l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once, _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0);
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 1, v___x_3382_);
lean_ctor_set(v___x_3333_, 0, v___x_3313_);
v___x_3384_ = v___x_3333_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3313_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v___x_3382_);
v___x_3384_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3385_; uint8_t v___y_3387_; uint8_t v___x_3396_; 
v___x_3385_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3385_, 0, v_numParams_3314_);
lean_ctor_set(v___x_3385_, 1, v___x_3375_);
lean_ctor_set(v___x_3385_, 2, v_snd_3315_);
lean_ctor_set(v___x_3385_, 3, v___x_3376_);
lean_ctor_set(v___x_3385_, 4, v___x_3381_);
lean_ctor_set(v___x_3385_, 5, v___x_3384_);
v___x_3396_ = l_Lean_isPrivateName(v_declName_3309_);
if (v___x_3396_ == 0)
{
v___y_3387_ = v___x_3290_;
goto v___jp_3386_;
}
else
{
v___y_3387_ = v___x_3289_;
goto v___jp_3386_;
}
v___jp_3386_:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_3374_, v___y_3387_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v___x_3389_; lean_object* v___x_3390_; 
lean_dec_ref_known(v___x_3388_, 1);
v___x_3389_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_3309_);
v___x_3390_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_3389_, v_declName_3309_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v___x_3393_; 
lean_dec_ref_known(v___x_3390_, 1);
lean_inc_n(v_declName_3309_, 2);
v___x_3391_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_declName_3309_, v___x_3385_, v___y_3319_, v___y_3321_);
lean_dec_ref(v___x_3391_);
v___x_3392_ = 0;
v___x_3393_ = l_Lean_Meta_setInlineAttribute(v_declName_3309_, v___x_3392_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v___x_3394_; 
lean_dec_ref_known(v___x_3393_, 1);
v___x_3394_ = l_Lean_enableRealizationsForConst(v_declName_3309_, v___y_3320_, v___y_3321_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v___x_3395_; 
lean_dec_ref_known(v___x_3394_, 1);
v___x_3395_ = l_Lean_compileDecl(v___x_3372_, v___x_3290_, v___y_3320_, v___y_3321_);
return v___x_3395_;
}
else
{
lean_dec_ref(v___x_3372_);
return v___x_3394_;
}
}
else
{
lean_dec_ref(v___x_3372_);
lean_dec(v_declName_3309_);
return v___x_3393_;
}
}
else
{
lean_dec_ref_known(v___x_3385_, 6);
lean_dec_ref(v___x_3372_);
lean_dec(v_declName_3309_);
return v___x_3390_;
}
}
else
{
lean_dec_ref_known(v___x_3385_, 6);
lean_dec_ref(v___x_3372_);
lean_dec(v_declName_3309_);
return v___x_3388_;
}
}
}
}
}
}
else
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
lean_dec(v_a_3362_);
lean_del_object(v___x_3333_);
lean_dec_ref(v_snd_3315_);
lean_dec(v_numParams_3314_);
lean_dec(v___x_3313_);
lean_dec(v_levelParams_3310_);
lean_dec(v_declName_3309_);
v_a_3400_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3363_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3363_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
lean_del_object(v___x_3333_);
lean_dec_ref(v_snd_3315_);
lean_dec(v_numParams_3314_);
lean_dec(v___x_3313_);
lean_dec(v_levelParams_3310_);
lean_dec(v_declName_3309_);
v_a_3408_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3361_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3361_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
else
{
lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
lean_dec_ref(v___x_3342_);
lean_del_object(v___x_3333_);
lean_dec(v_snd_3331_);
lean_dec_ref(v_snd_3315_);
lean_dec(v_numParams_3314_);
lean_dec(v___x_3313_);
lean_dec(v_levelParams_3310_);
lean_dec(v_declName_3309_);
lean_dec_ref(v___x_3308_);
lean_dec_ref(v_alts_3304_);
lean_dec_ref(v_heq_3301_);
lean_dec_ref(v_params_3298_);
lean_dec_ref(v___x_3295_);
lean_dec_ref(v___x_3294_);
lean_dec_ref(v_is_3293_);
lean_dec_ref(v_motive_3287_);
v_a_3416_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v___x_3346_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v___x_3346_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v___x_3342_);
lean_del_object(v___x_3333_);
lean_dec(v_snd_3331_);
lean_dec_ref(v_snd_3315_);
lean_dec(v_numParams_3314_);
lean_dec(v___x_3313_);
lean_dec(v_levelParams_3310_);
lean_dec(v_declName_3309_);
lean_dec_ref(v___x_3308_);
lean_dec_ref(v___x_3307_);
lean_dec_ref(v_alts_3304_);
lean_dec(v_tail_3303_);
lean_dec_ref(v_heq_3301_);
lean_dec_ref(v_params_3298_);
lean_dec_ref(v___x_3295_);
lean_dec_ref(v___x_3294_);
lean_dec_ref(v_is_3293_);
lean_dec_ref(v_motive_3287_);
v_a_3424_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3344_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3344_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec_ref(v_snd_3315_);
lean_dec(v_numParams_3314_);
lean_dec(v___x_3313_);
lean_dec(v_levelParams_3310_);
lean_dec(v_declName_3309_);
lean_dec_ref(v___x_3308_);
lean_dec_ref(v___x_3307_);
lean_dec_ref(v_alts_3304_);
lean_dec(v_tail_3303_);
lean_dec_ref(v_heq_3301_);
lean_dec_ref(v_params_3298_);
lean_dec(v___x_3297_);
lean_dec(v___x_3296_);
lean_dec_ref(v___x_3295_);
lean_dec_ref(v___x_3294_);
lean_dec_ref(v_is_3293_);
lean_dec_ref(v_motive_3287_);
v_a_3433_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3328_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3328_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
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
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object** _args){
lean_object* v_motive_3441_ = _args[0];
lean_object* v___x_3442_ = _args[1];
lean_object* v___x_3443_ = _args[2];
lean_object* v___x_3444_ = _args[3];
lean_object* v___x_3445_ = _args[4];
lean_object* v_ism1_x27_3446_ = _args[5];
lean_object* v_is_3447_ = _args[6];
lean_object* v___x_3448_ = _args[7];
lean_object* v___x_3449_ = _args[8];
lean_object* v___x_3450_ = _args[9];
lean_object* v___x_3451_ = _args[10];
lean_object* v_params_3452_ = _args[11];
lean_object* v___x_3453_ = _args[12];
lean_object* v___x_3454_ = _args[13];
lean_object* v_heq_3455_ = _args[14];
lean_object* v_val_3456_ = _args[15];
lean_object* v_tail_3457_ = _args[16];
lean_object* v_alts_3458_ = _args[17];
lean_object* v_sz_3459_ = _args[18];
lean_object* v___x_3460_ = _args[19];
lean_object* v___x_3461_ = _args[20];
lean_object* v___x_3462_ = _args[21];
lean_object* v_declName_3463_ = _args[22];
lean_object* v_levelParams_3464_ = _args[23];
lean_object* v_numIndices_3465_ = _args[24];
lean_object* v___x_3466_ = _args[25];
lean_object* v___x_3467_ = _args[26];
lean_object* v_numParams_3468_ = _args[27];
lean_object* v_snd_3469_ = _args[28];
lean_object* v_ism2_x27_3470_ = _args[29];
lean_object* v_x_3471_ = _args[30];
lean_object* v___y_3472_ = _args[31];
lean_object* v___y_3473_ = _args[32];
lean_object* v___y_3474_ = _args[33];
lean_object* v___y_3475_ = _args[34];
lean_object* v___y_3476_ = _args[35];
_start:
{
uint8_t v___x_15529__boxed_3477_; uint8_t v___x_15530__boxed_3478_; uint8_t v___x_15531__boxed_3479_; size_t v_sz_boxed_3480_; size_t v___x_15540__boxed_3481_; lean_object* v_res_3482_; 
v___x_15529__boxed_3477_ = lean_unbox(v___x_3443_);
v___x_15530__boxed_3478_ = lean_unbox(v___x_3444_);
v___x_15531__boxed_3479_ = lean_unbox(v___x_3445_);
v_sz_boxed_3480_ = lean_unbox_usize(v_sz_3459_);
lean_dec(v_sz_3459_);
v___x_15540__boxed_3481_ = lean_unbox_usize(v___x_3460_);
lean_dec(v___x_3460_);
v_res_3482_ = l_Lean_mkCasesOnSameCtor___lam__3(v_motive_3441_, v___x_3442_, v___x_15529__boxed_3477_, v___x_15530__boxed_3478_, v___x_15531__boxed_3479_, v_ism1_x27_3446_, v_is_3447_, v___x_3448_, v___x_3449_, v___x_3450_, v___x_3451_, v_params_3452_, v___x_3453_, v___x_3454_, v_heq_3455_, v_val_3456_, v_tail_3457_, v_alts_3458_, v_sz_boxed_3480_, v___x_15540__boxed_3481_, v___x_3461_, v___x_3462_, v_declName_3463_, v_levelParams_3464_, v_numIndices_3465_, v___x_3466_, v___x_3467_, v_numParams_3468_, v_snd_3469_, v_ism2_x27_3470_, v_x_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec_ref(v_x_3471_);
lean_dec(v___x_3466_);
lean_dec(v_numIndices_3465_);
lean_dec_ref(v_val_3456_);
lean_dec_ref(v___x_3454_);
lean_dec_ref(v___x_3453_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object* v_motive_3483_, lean_object* v___x_3484_, uint8_t v___x_3485_, uint8_t v___x_3486_, uint8_t v___x_3487_, lean_object* v_is_3488_, lean_object* v___x_3489_, lean_object* v___x_3490_, lean_object* v___x_3491_, lean_object* v___x_3492_, lean_object* v_params_3493_, lean_object* v___x_3494_, lean_object* v___x_3495_, lean_object* v_heq_3496_, lean_object* v_val_3497_, lean_object* v_tail_3498_, lean_object* v_alts_3499_, size_t v_sz_3500_, size_t v___x_3501_, lean_object* v___x_3502_, lean_object* v___x_3503_, lean_object* v_declName_3504_, lean_object* v_levelParams_3505_, lean_object* v_numIndices_3506_, lean_object* v___x_3507_, lean_object* v___x_3508_, lean_object* v_numParams_3509_, lean_object* v_snd_3510_, lean_object* v___x_3511_, lean_object* v___x_3512_, lean_object* v_ism1_x27_3513_, lean_object* v_x_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___f_3525_; lean_object* v___x_3526_; 
v___x_3520_ = lean_box(v___x_3485_);
v___x_3521_ = lean_box(v___x_3486_);
v___x_3522_ = lean_box(v___x_3487_);
v___x_3523_ = lean_box_usize(v_sz_3500_);
v___x_3524_ = lean_box_usize(v___x_3501_);
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__3___boxed), 36, 29);
lean_closure_set(v___f_3525_, 0, v_motive_3483_);
lean_closure_set(v___f_3525_, 1, v___x_3484_);
lean_closure_set(v___f_3525_, 2, v___x_3520_);
lean_closure_set(v___f_3525_, 3, v___x_3521_);
lean_closure_set(v___f_3525_, 4, v___x_3522_);
lean_closure_set(v___f_3525_, 5, v_ism1_x27_3513_);
lean_closure_set(v___f_3525_, 6, v_is_3488_);
lean_closure_set(v___f_3525_, 7, v___x_3489_);
lean_closure_set(v___f_3525_, 8, v___x_3490_);
lean_closure_set(v___f_3525_, 9, v___x_3491_);
lean_closure_set(v___f_3525_, 10, v___x_3492_);
lean_closure_set(v___f_3525_, 11, v_params_3493_);
lean_closure_set(v___f_3525_, 12, v___x_3494_);
lean_closure_set(v___f_3525_, 13, v___x_3495_);
lean_closure_set(v___f_3525_, 14, v_heq_3496_);
lean_closure_set(v___f_3525_, 15, v_val_3497_);
lean_closure_set(v___f_3525_, 16, v_tail_3498_);
lean_closure_set(v___f_3525_, 17, v_alts_3499_);
lean_closure_set(v___f_3525_, 18, v___x_3523_);
lean_closure_set(v___f_3525_, 19, v___x_3524_);
lean_closure_set(v___f_3525_, 20, v___x_3502_);
lean_closure_set(v___f_3525_, 21, v___x_3503_);
lean_closure_set(v___f_3525_, 22, v_declName_3504_);
lean_closure_set(v___f_3525_, 23, v_levelParams_3505_);
lean_closure_set(v___f_3525_, 24, v_numIndices_3506_);
lean_closure_set(v___f_3525_, 25, v___x_3507_);
lean_closure_set(v___f_3525_, 26, v___x_3508_);
lean_closure_set(v___f_3525_, 27, v_numParams_3509_);
lean_closure_set(v___f_3525_, 28, v_snd_3510_);
v___x_3526_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3511_, v___x_3512_, v___f_3525_, v___x_3485_, v___x_3485_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object** _args){
lean_object* v_motive_3527_ = _args[0];
lean_object* v___x_3528_ = _args[1];
lean_object* v___x_3529_ = _args[2];
lean_object* v___x_3530_ = _args[3];
lean_object* v___x_3531_ = _args[4];
lean_object* v_is_3532_ = _args[5];
lean_object* v___x_3533_ = _args[6];
lean_object* v___x_3534_ = _args[7];
lean_object* v___x_3535_ = _args[8];
lean_object* v___x_3536_ = _args[9];
lean_object* v_params_3537_ = _args[10];
lean_object* v___x_3538_ = _args[11];
lean_object* v___x_3539_ = _args[12];
lean_object* v_heq_3540_ = _args[13];
lean_object* v_val_3541_ = _args[14];
lean_object* v_tail_3542_ = _args[15];
lean_object* v_alts_3543_ = _args[16];
lean_object* v_sz_3544_ = _args[17];
lean_object* v___x_3545_ = _args[18];
lean_object* v___x_3546_ = _args[19];
lean_object* v___x_3547_ = _args[20];
lean_object* v_declName_3548_ = _args[21];
lean_object* v_levelParams_3549_ = _args[22];
lean_object* v_numIndices_3550_ = _args[23];
lean_object* v___x_3551_ = _args[24];
lean_object* v___x_3552_ = _args[25];
lean_object* v_numParams_3553_ = _args[26];
lean_object* v_snd_3554_ = _args[27];
lean_object* v___x_3555_ = _args[28];
lean_object* v___x_3556_ = _args[29];
lean_object* v_ism1_x27_3557_ = _args[30];
lean_object* v_x_3558_ = _args[31];
lean_object* v___y_3559_ = _args[32];
lean_object* v___y_3560_ = _args[33];
lean_object* v___y_3561_ = _args[34];
lean_object* v___y_3562_ = _args[35];
lean_object* v___y_3563_ = _args[36];
_start:
{
uint8_t v___x_15851__boxed_3564_; uint8_t v___x_15852__boxed_3565_; uint8_t v___x_15853__boxed_3566_; size_t v_sz_boxed_3567_; size_t v___x_15862__boxed_3568_; lean_object* v_res_3569_; 
v___x_15851__boxed_3564_ = lean_unbox(v___x_3529_);
v___x_15852__boxed_3565_ = lean_unbox(v___x_3530_);
v___x_15853__boxed_3566_ = lean_unbox(v___x_3531_);
v_sz_boxed_3567_ = lean_unbox_usize(v_sz_3544_);
lean_dec(v_sz_3544_);
v___x_15862__boxed_3568_ = lean_unbox_usize(v___x_3545_);
lean_dec(v___x_3545_);
v_res_3569_ = l_Lean_mkCasesOnSameCtor___lam__4(v_motive_3527_, v___x_3528_, v___x_15851__boxed_3564_, v___x_15852__boxed_3565_, v___x_15853__boxed_3566_, v_is_3532_, v___x_3533_, v___x_3534_, v___x_3535_, v___x_3536_, v_params_3537_, v___x_3538_, v___x_3539_, v_heq_3540_, v_val_3541_, v_tail_3542_, v_alts_3543_, v_sz_boxed_3567_, v___x_15862__boxed_3568_, v___x_3546_, v___x_3547_, v_declName_3548_, v_levelParams_3549_, v_numIndices_3550_, v___x_3551_, v___x_3552_, v_numParams_3553_, v_snd_3554_, v___x_3555_, v___x_3556_, v_ism1_x27_3557_, v_x_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec_ref(v_x_3558_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object* v_numIndices_3570_, lean_object* v___x_3571_, lean_object* v_motive_3572_, lean_object* v___x_3573_, uint8_t v___x_3574_, uint8_t v___x_3575_, uint8_t v___x_3576_, lean_object* v_is_3577_, lean_object* v___x_3578_, lean_object* v___x_3579_, lean_object* v___x_3580_, lean_object* v___x_3581_, lean_object* v_params_3582_, lean_object* v___x_3583_, lean_object* v___x_3584_, lean_object* v_heq_3585_, lean_object* v_val_3586_, lean_object* v_tail_3587_, size_t v_sz_3588_, size_t v___x_3589_, lean_object* v___x_3590_, lean_object* v___x_3591_, lean_object* v_declName_3592_, lean_object* v_levelParams_3593_, lean_object* v___x_3594_, lean_object* v___x_3595_, lean_object* v_numParams_3596_, lean_object* v_snd_3597_, lean_object* v___x_3598_, lean_object* v_alts_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___f_3612_; lean_object* v___x_3613_; 
v___x_3605_ = lean_nat_add(v_numIndices_3570_, v___x_3571_);
v___x_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3605_);
v___x_3607_ = lean_box(v___x_3574_);
v___x_3608_ = lean_box(v___x_3575_);
v___x_3609_ = lean_box(v___x_3576_);
v___x_3610_ = lean_box_usize(v_sz_3588_);
v___x_3611_ = lean_box_usize(v___x_3589_);
lean_inc_ref(v___x_3606_);
lean_inc_ref(v___x_3598_);
v___f_3612_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__4___boxed), 37, 30);
lean_closure_set(v___f_3612_, 0, v_motive_3572_);
lean_closure_set(v___f_3612_, 1, v___x_3573_);
lean_closure_set(v___f_3612_, 2, v___x_3607_);
lean_closure_set(v___f_3612_, 3, v___x_3608_);
lean_closure_set(v___f_3612_, 4, v___x_3609_);
lean_closure_set(v___f_3612_, 5, v_is_3577_);
lean_closure_set(v___f_3612_, 6, v___x_3578_);
lean_closure_set(v___f_3612_, 7, v___x_3579_);
lean_closure_set(v___f_3612_, 8, v___x_3580_);
lean_closure_set(v___f_3612_, 9, v___x_3581_);
lean_closure_set(v___f_3612_, 10, v_params_3582_);
lean_closure_set(v___f_3612_, 11, v___x_3583_);
lean_closure_set(v___f_3612_, 12, v___x_3584_);
lean_closure_set(v___f_3612_, 13, v_heq_3585_);
lean_closure_set(v___f_3612_, 14, v_val_3586_);
lean_closure_set(v___f_3612_, 15, v_tail_3587_);
lean_closure_set(v___f_3612_, 16, v_alts_3599_);
lean_closure_set(v___f_3612_, 17, v___x_3610_);
lean_closure_set(v___f_3612_, 18, v___x_3611_);
lean_closure_set(v___f_3612_, 19, v___x_3590_);
lean_closure_set(v___f_3612_, 20, v___x_3591_);
lean_closure_set(v___f_3612_, 21, v_declName_3592_);
lean_closure_set(v___f_3612_, 22, v_levelParams_3593_);
lean_closure_set(v___f_3612_, 23, v_numIndices_3570_);
lean_closure_set(v___f_3612_, 24, v___x_3594_);
lean_closure_set(v___f_3612_, 25, v___x_3595_);
lean_closure_set(v___f_3612_, 26, v_numParams_3596_);
lean_closure_set(v___f_3612_, 27, v_snd_3597_);
lean_closure_set(v___f_3612_, 28, v___x_3598_);
lean_closure_set(v___f_3612_, 29, v___x_3606_);
v___x_3613_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3598_, v___x_3606_, v___f_3612_, v___x_3574_, v___x_3574_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_3614_ = _args[0];
lean_object* v___x_3615_ = _args[1];
lean_object* v_motive_3616_ = _args[2];
lean_object* v___x_3617_ = _args[3];
lean_object* v___x_3618_ = _args[4];
lean_object* v___x_3619_ = _args[5];
lean_object* v___x_3620_ = _args[6];
lean_object* v_is_3621_ = _args[7];
lean_object* v___x_3622_ = _args[8];
lean_object* v___x_3623_ = _args[9];
lean_object* v___x_3624_ = _args[10];
lean_object* v___x_3625_ = _args[11];
lean_object* v_params_3626_ = _args[12];
lean_object* v___x_3627_ = _args[13];
lean_object* v___x_3628_ = _args[14];
lean_object* v_heq_3629_ = _args[15];
lean_object* v_val_3630_ = _args[16];
lean_object* v_tail_3631_ = _args[17];
lean_object* v_sz_3632_ = _args[18];
lean_object* v___x_3633_ = _args[19];
lean_object* v___x_3634_ = _args[20];
lean_object* v___x_3635_ = _args[21];
lean_object* v_declName_3636_ = _args[22];
lean_object* v_levelParams_3637_ = _args[23];
lean_object* v___x_3638_ = _args[24];
lean_object* v___x_3639_ = _args[25];
lean_object* v_numParams_3640_ = _args[26];
lean_object* v_snd_3641_ = _args[27];
lean_object* v___x_3642_ = _args[28];
lean_object* v_alts_3643_ = _args[29];
lean_object* v___y_3644_ = _args[30];
lean_object* v___y_3645_ = _args[31];
lean_object* v___y_3646_ = _args[32];
lean_object* v___y_3647_ = _args[33];
lean_object* v___y_3648_ = _args[34];
_start:
{
uint8_t v___x_15944__boxed_3649_; uint8_t v___x_15945__boxed_3650_; uint8_t v___x_15946__boxed_3651_; size_t v_sz_boxed_3652_; size_t v___x_15955__boxed_3653_; lean_object* v_res_3654_; 
v___x_15944__boxed_3649_ = lean_unbox(v___x_3618_);
v___x_15945__boxed_3650_ = lean_unbox(v___x_3619_);
v___x_15946__boxed_3651_ = lean_unbox(v___x_3620_);
v_sz_boxed_3652_ = lean_unbox_usize(v_sz_3632_);
lean_dec(v_sz_3632_);
v___x_15955__boxed_3653_ = lean_unbox_usize(v___x_3633_);
lean_dec(v___x_3633_);
v_res_3654_ = l_Lean_mkCasesOnSameCtor___lam__5(v_numIndices_3614_, v___x_3615_, v_motive_3616_, v___x_3617_, v___x_15944__boxed_3649_, v___x_15945__boxed_3650_, v___x_15946__boxed_3651_, v_is_3621_, v___x_3622_, v___x_3623_, v___x_3624_, v___x_3625_, v_params_3626_, v___x_3627_, v___x_3628_, v_heq_3629_, v_val_3630_, v_tail_3631_, v_sz_boxed_3652_, v___x_15955__boxed_3653_, v___x_3634_, v___x_3635_, v_declName_3636_, v_levelParams_3637_, v___x_3638_, v___x_3639_, v_numParams_3640_, v_snd_3641_, v___x_3642_, v_alts_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec(v___x_3615_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v_acc_3655_, lean_object* v_declInfos_3656_, lean_object* v_k_3657_, lean_object* v_kind_3658_, lean_object* v_x_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
uint8_t v_kind_boxed_3665_; lean_object* v_res_3666_; 
v_kind_boxed_3665_ = lean_unbox(v_kind_3658_);
v_res_3666_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(v_acc_3655_, v_declInfos_3656_, v_k_3657_, v_kind_boxed_3665_, v_x_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
lean_dec(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object* v_declInfos_3667_, lean_object* v_k_3668_, uint8_t v_kind_3669_, lean_object* v_acc_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v___x_3676_; lean_object* v_toApplicative_3677_; lean_object* v_toFunctor_3678_; lean_object* v_toSeq_3679_; lean_object* v_toSeqLeft_3680_; lean_object* v_toSeqRight_3681_; lean_object* v___f_3682_; lean_object* v___f_3683_; lean_object* v___f_3684_; lean_object* v___f_3685_; lean_object* v___x_3686_; lean_object* v___f_3687_; lean_object* v___f_3688_; lean_object* v___f_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v_toApplicative_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3751_; 
v___x_3676_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_3677_ = lean_ctor_get(v___x_3676_, 0);
v_toFunctor_3678_ = lean_ctor_get(v_toApplicative_3677_, 0);
v_toSeq_3679_ = lean_ctor_get(v_toApplicative_3677_, 2);
v_toSeqLeft_3680_ = lean_ctor_get(v_toApplicative_3677_, 3);
v_toSeqRight_3681_ = lean_ctor_get(v_toApplicative_3677_, 4);
v___f_3682_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2));
v___f_3683_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3));
lean_inc_ref_n(v_toFunctor_3678_, 2);
v___f_3684_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3684_, 0, v_toFunctor_3678_);
v___f_3685_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3685_, 0, v_toFunctor_3678_);
v___x_3686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___f_3684_);
lean_ctor_set(v___x_3686_, 1, v___f_3685_);
lean_inc(v_toSeqRight_3681_);
v___f_3687_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3687_, 0, v_toSeqRight_3681_);
lean_inc(v_toSeqLeft_3680_);
v___f_3688_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3688_, 0, v_toSeqLeft_3680_);
lean_inc(v_toSeq_3679_);
v___f_3689_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3689_, 0, v_toSeq_3679_);
v___x_3690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3686_);
lean_ctor_set(v___x_3690_, 1, v___f_3682_);
lean_ctor_set(v___x_3690_, 2, v___f_3689_);
lean_ctor_set(v___x_3690_, 3, v___f_3688_);
lean_ctor_set(v___x_3690_, 4, v___f_3687_);
v___x_3691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3690_);
lean_ctor_set(v___x_3691_, 1, v___f_3683_);
v___x_3692_ = l_StateRefT_x27_instMonad___redArg(v___x_3691_);
v_toApplicative_3693_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3751_ == 0)
{
lean_object* v_unused_3752_; 
v_unused_3752_ = lean_ctor_get(v___x_3692_, 1);
lean_dec(v_unused_3752_);
v___x_3695_ = v___x_3692_;
v_isShared_3696_ = v_isSharedCheck_3751_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_toApplicative_3693_);
lean_dec(v___x_3692_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3751_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v_toFunctor_3697_; lean_object* v_toSeq_3698_; lean_object* v_toSeqLeft_3699_; lean_object* v_toSeqRight_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3749_; 
v_toFunctor_3697_ = lean_ctor_get(v_toApplicative_3693_, 0);
v_toSeq_3698_ = lean_ctor_get(v_toApplicative_3693_, 2);
v_toSeqLeft_3699_ = lean_ctor_get(v_toApplicative_3693_, 3);
v_toSeqRight_3700_ = lean_ctor_get(v_toApplicative_3693_, 4);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_toApplicative_3693_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; 
v_unused_3750_ = lean_ctor_get(v_toApplicative_3693_, 1);
lean_dec(v_unused_3750_);
v___x_3702_ = v_toApplicative_3693_;
v_isShared_3703_ = v_isSharedCheck_3749_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_toSeqRight_3700_);
lean_inc(v_toSeqLeft_3699_);
lean_inc(v_toSeq_3698_);
lean_inc(v_toFunctor_3697_);
lean_dec(v_toApplicative_3693_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3749_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___f_3704_; lean_object* v___f_3705_; lean_object* v___f_3706_; lean_object* v___f_3707_; lean_object* v___x_3708_; lean_object* v___f_3709_; lean_object* v___f_3710_; lean_object* v___f_3711_; lean_object* v___x_3713_; 
v___f_3704_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4));
v___f_3705_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5));
lean_inc_ref(v_toFunctor_3697_);
v___f_3706_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3706_, 0, v_toFunctor_3697_);
v___f_3707_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3707_, 0, v_toFunctor_3697_);
v___x_3708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___f_3706_);
lean_ctor_set(v___x_3708_, 1, v___f_3707_);
v___f_3709_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3709_, 0, v_toSeqRight_3700_);
v___f_3710_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3710_, 0, v_toSeqLeft_3699_);
v___f_3711_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3711_, 0, v_toSeq_3698_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 4, v___f_3709_);
lean_ctor_set(v___x_3702_, 3, v___f_3710_);
lean_ctor_set(v___x_3702_, 2, v___f_3711_);
lean_ctor_set(v___x_3702_, 1, v___f_3704_);
lean_ctor_set(v___x_3702_, 0, v___x_3708_);
v___x_3713_ = v___x_3702_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v___f_3704_);
lean_ctor_set(v_reuseFailAlloc_3748_, 2, v___f_3711_);
lean_ctor_set(v_reuseFailAlloc_3748_, 3, v___f_3710_);
lean_ctor_set(v_reuseFailAlloc_3748_, 4, v___f_3709_);
v___x_3713_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
lean_object* v___x_3715_; 
if (v_isShared_3696_ == 0)
{
lean_ctor_set(v___x_3695_, 1, v___f_3705_);
lean_ctor_set(v___x_3695_, 0, v___x_3713_);
v___x_3715_ = v___x_3695_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v___x_3713_);
lean_ctor_set(v_reuseFailAlloc_3747_, 1, v___f_3705_);
v___x_3715_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; uint8_t v___x_3718_; 
v___x_3716_ = lean_array_get_size(v_acc_3670_);
v___x_3717_ = lean_array_get_size(v_declInfos_3667_);
v___x_3718_ = lean_nat_dec_lt(v___x_3716_, v___x_3717_);
if (v___x_3718_ == 0)
{
lean_object* v___x_3719_; 
lean_dec_ref(v___x_3715_);
lean_dec_ref(v_declInfos_3667_);
lean_inc(v___y_3674_);
lean_inc_ref(v___y_3673_);
lean_inc(v___y_3672_);
lean_inc_ref(v___y_3671_);
v___x_3719_ = lean_apply_6(v_k_3668_, v_acc_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, lean_box(0));
return v___x_3719_;
}
else
{
lean_object* v___x_3720_; uint8_t v___x_3721_; lean_object* v___x_3722_; lean_object* v___f_3723_; lean_object* v___f_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v_snd_3729_; lean_object* v_fst_3730_; lean_object* v_fst_3731_; lean_object* v_snd_3732_; lean_object* v___x_3733_; lean_object* v___f_3734_; lean_object* v___x_3735_; 
v___x_3720_ = lean_box(0);
v___x_3721_ = 0;
v___x_3722_ = l_Lean_instInhabitedExpr;
v___f_3723_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3723_, 0, v___x_3715_);
lean_closure_set(v___f_3723_, 1, v___x_3722_);
v___f_3724_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3724_, 0, v___f_3723_);
v___x_3725_ = lean_box(v___x_3721_);
v___x_3726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
lean_ctor_set(v___x_3726_, 1, v___f_3724_);
v___x_3727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3720_);
lean_ctor_set(v___x_3727_, 1, v___x_3726_);
v___x_3728_ = lean_array_get(v___x_3727_, v_declInfos_3667_, v___x_3716_);
lean_dec_ref_known(v___x_3727_, 2);
v_snd_3729_ = lean_ctor_get(v___x_3728_, 1);
lean_inc(v_snd_3729_);
v_fst_3730_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_fst_3730_);
lean_dec(v___x_3728_);
v_fst_3731_ = lean_ctor_get(v_snd_3729_, 0);
lean_inc(v_fst_3731_);
v_snd_3732_ = lean_ctor_get(v_snd_3729_, 1);
lean_inc(v_snd_3732_);
lean_dec(v_snd_3729_);
v___x_3733_ = lean_box(v_kind_3669_);
lean_inc_ref(v_acc_3670_);
v___f_3734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3734_, 0, v_acc_3670_);
lean_closure_set(v___f_3734_, 1, v_declInfos_3667_);
lean_closure_set(v___f_3734_, 2, v_k_3668_);
lean_closure_set(v___f_3734_, 3, v___x_3733_);
lean_inc(v___y_3674_);
lean_inc_ref(v___y_3673_);
lean_inc(v___y_3672_);
lean_inc_ref(v___y_3671_);
v___x_3735_ = lean_apply_6(v_snd_3732_, v_acc_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, lean_box(0));
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v_a_3736_; uint8_t v___x_3737_; lean_object* v___x_3738_; 
v_a_3736_ = lean_ctor_get(v___x_3735_, 0);
lean_inc(v_a_3736_);
lean_dec_ref_known(v___x_3735_, 1);
v___x_3737_ = lean_unbox(v_fst_3731_);
lean_dec(v_fst_3731_);
v___x_3738_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_3730_, v___x_3737_, v_a_3736_, v___f_3734_, v_kind_3669_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
return v___x_3738_;
}
else
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3746_; 
lean_dec_ref(v___f_3734_);
lean_dec(v_fst_3731_);
lean_dec(v_fst_3730_);
v_a_3739_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3741_ = v___x_3735_;
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___x_3735_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3744_; 
if (v_isShared_3742_ == 0)
{
v___x_3744_ = v___x_3741_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3739_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object* v_acc_3753_, lean_object* v_declInfos_3754_, lean_object* v_k_3755_, uint8_t v_kind_3756_, lean_object* v_x_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_array_push(v_acc_3753_, v_x_3757_);
v___x_3764_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3754_, v_k_3755_, v_kind_3756_, v___x_3763_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object* v_declInfos_3765_, lean_object* v_k_3766_, lean_object* v_kind_3767_, lean_object* v_acc_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
uint8_t v_kind_boxed_3774_; lean_object* v_res_3775_; 
v_kind_boxed_3774_ = lean_unbox(v_kind_3767_);
v_res_3775_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3765_, v_k_3766_, v_kind_boxed_3774_, v_acc_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object* v_declInfos_3776_, lean_object* v_k_3777_, uint8_t v_kind_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_){
_start:
{
lean_object* v___x_3784_; lean_object* v___x_3785_; 
v___x_3784_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_3785_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3776_, v_k_3777_, v_kind_3778_, v___x_3784_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object* v_declInfos_3786_, lean_object* v_k_3787_, lean_object* v_kind_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
uint8_t v_kind_boxed_3794_; lean_object* v_res_3795_; 
v_kind_boxed_3794_ = lean_unbox(v_kind_3788_);
v_res_3795_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v_declInfos_3786_, v_k_3787_, v_kind_boxed_3794_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object* v_declInfos_3796_, lean_object* v_k_3797_, uint8_t v_kind_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
size_t v_sz_3804_; size_t v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v_sz_3804_ = lean_array_size(v_declInfos_3796_);
v___x_3805_ = ((size_t)0ULL);
v___x_3806_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_3804_, v___x_3805_, v_declInfos_3796_);
v___x_3807_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v___x_3806_, v_k_3797_, v_kind_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object* v_declInfos_3808_, lean_object* v_k_3809_, lean_object* v_kind_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_){
_start:
{
uint8_t v_kind_boxed_3816_; lean_object* v_res_3817_; 
v_kind_boxed_3816_ = lean_unbox(v_kind_3810_);
v_res_3817_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v_declInfos_3808_, v_k_3809_, v_kind_boxed_3816_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3813_);
lean_dec(v___y_3812_);
lean_dec_ref(v___y_3811_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object* v_declInfos_3818_, lean_object* v_k_3819_, uint8_t v_kind_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
size_t v_sz_3826_; size_t v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v_sz_3826_ = lean_array_size(v_declInfos_3818_);
v___x_3827_ = ((size_t)0ULL);
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_3826_, v___x_3827_, v_declInfos_3818_);
v___x_3829_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v___x_3828_, v_k_3819_, v_kind_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object* v_declInfos_3830_, lean_object* v_k_3831_, lean_object* v_kind_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
uint8_t v_kind_boxed_3838_; lean_object* v_res_3839_; 
v_kind_boxed_3838_ = lean_unbox(v_kind_3832_);
v_res_3839_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_declInfos_3830_, v_k_3831_, v_kind_boxed_3838_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
return v_res_3839_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; 
v___x_3842_ = lean_box(0);
v___x_3843_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0));
v___x_3844_ = l_Lean_mkConst(v___x_3843_, v___x_3842_);
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object* v___x_3845_, lean_object* v_v_3846_, lean_object* v___x_3847_, lean_object* v___x_3848_, lean_object* v___x_3849_, lean_object* v_motive_3850_, uint8_t v___x_3851_, uint8_t v___x_3852_, uint8_t v___x_3853_, lean_object* v_zs12_3854_, lean_object* v_is_3855_, lean_object* v_fields1_3856_, lean_object* v_fields2_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_){
_start:
{
lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v_e_3873_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
lean_inc_ref(v___x_3849_);
v___x_3883_ = l_Lean_mkAppN(v___x_3849_, v_fields1_3856_);
v___x_3884_ = l_Lean_mkAppN(v___x_3849_, v_fields2_3857_);
lean_inc(v___x_3847_);
v___x_3885_ = l_Lean_mkNatLit(v___x_3847_);
v___x_3886_ = l_Lean_Meta_mkEqRefl(v___x_3885_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_a_3887_);
lean_dec_ref_known(v___x_3886_, 1);
v___x_3888_ = lean_unsigned_to_nat(3u);
v___x_3889_ = lean_mk_empty_array_with_capacity(v___x_3888_);
v___x_3890_ = lean_array_push(v___x_3889_, v___x_3883_);
v___x_3891_ = lean_array_push(v___x_3890_, v___x_3884_);
v___x_3892_ = lean_array_push(v___x_3891_, v_a_3887_);
v___x_3893_ = l_Array_append___redArg(v_is_3855_, v___x_3892_);
lean_dec_ref(v___x_3892_);
v___x_3894_ = l_Lean_mkAppN(v_motive_3850_, v___x_3893_);
lean_dec_ref(v___x_3893_);
v___x_3895_ = l_Lean_Meta_mkForallFVars(v_zs12_3854_, v___x_3894_, v___x_3851_, v___x_3852_, v___x_3852_, v___x_3853_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3897_; uint8_t v___x_3898_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3896_);
lean_dec_ref_known(v___x_3895_, 1);
v___x_3897_ = lean_array_get_size(v_zs12_3854_);
v___x_3898_ = lean_nat_dec_eq(v___x_3897_, v___x_3845_);
if (v___x_3898_ == 0)
{
v_e_3873_ = v_a_3896_;
goto v___jp_3872_;
}
else
{
lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1);
v___x_3900_ = l_Lean_mkArrow(v___x_3899_, v_a_3896_, v___y_3860_, v___y_3861_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc(v_a_3901_);
lean_dec_ref_known(v___x_3900_, 1);
v_e_3873_ = v_a_3901_;
goto v___jp_3872_;
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
lean_dec(v___x_3847_);
lean_dec(v_v_3846_);
lean_dec(v___x_3845_);
v_a_3902_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3900_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3900_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
lean_dec(v___x_3847_);
lean_dec(v_v_3846_);
lean_dec(v___x_3845_);
v_a_3910_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3895_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3895_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
else
{
lean_object* v_a_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3925_; 
lean_dec_ref(v___x_3884_);
lean_dec_ref(v___x_3883_);
lean_dec_ref(v_is_3855_);
lean_dec_ref(v_motive_3850_);
lean_dec(v___x_3847_);
lean_dec(v_v_3846_);
lean_dec(v___x_3845_);
v_a_3918_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3920_ = v___x_3886_;
v_isShared_3921_ = v_isSharedCheck_3925_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_a_3918_);
lean_dec(v___x_3886_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3925_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
lean_object* v___x_3923_; 
if (v_isShared_3921_ == 0)
{
v___x_3923_ = v___x_3920_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v_a_3918_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
}
v___jp_3863_:
{
lean_object* v___x_3866_; uint8_t v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3866_ = lean_array_get_size(v_zs12_3854_);
v___x_3867_ = lean_nat_dec_eq(v___x_3866_, v___x_3845_);
v___x_3868_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3868_, 0, v___x_3866_);
lean_ctor_set(v___x_3868_, 1, v___x_3845_);
lean_ctor_set_uint8(v___x_3868_, sizeof(void*)*2, v___x_3867_);
v___x_3869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3869_, 0, v___y_3865_);
lean_ctor_set(v___x_3869_, 1, v___y_3864_);
v___x_3870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
lean_ctor_set(v___x_3870_, 1, v___x_3868_);
v___x_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
return v___x_3871_;
}
v___jp_3872_:
{
if (lean_obj_tag(v_v_3846_) == 1)
{
lean_object* v_str_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
lean_dec(v___x_3847_);
v_str_3874_ = lean_ctor_get(v_v_3846_, 1);
lean_inc_ref(v_str_3874_);
lean_dec_ref_known(v_v_3846_, 2);
v___x_3875_ = lean_box(0);
v___x_3876_ = l_Lean_Name_str___override(v___x_3875_, v_str_3874_);
v___y_3864_ = v_e_3873_;
v___y_3865_ = v___x_3876_;
goto v___jp_3863_;
}
else
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
lean_dec(v_v_3846_);
v___x_3877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0));
v___x_3878_ = lean_nat_add(v___x_3847_, v___x_3848_);
lean_dec(v___x_3847_);
v___x_3879_ = l_Nat_reprFast(v___x_3878_);
v___x_3880_ = lean_string_append(v___x_3877_, v___x_3879_);
lean_dec_ref(v___x_3879_);
v___x_3881_ = lean_box(0);
v___x_3882_ = l_Lean_Name_str___override(v___x_3881_, v___x_3880_);
v___y_3864_ = v_e_3873_;
v___y_3865_ = v___x_3882_;
goto v___jp_3863_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3926_ = _args[0];
lean_object* v_v_3927_ = _args[1];
lean_object* v___x_3928_ = _args[2];
lean_object* v___x_3929_ = _args[3];
lean_object* v___x_3930_ = _args[4];
lean_object* v_motive_3931_ = _args[5];
lean_object* v___x_3932_ = _args[6];
lean_object* v___x_3933_ = _args[7];
lean_object* v___x_3934_ = _args[8];
lean_object* v_zs12_3935_ = _args[9];
lean_object* v_is_3936_ = _args[10];
lean_object* v_fields1_3937_ = _args[11];
lean_object* v_fields2_3938_ = _args[12];
lean_object* v___y_3939_ = _args[13];
lean_object* v___y_3940_ = _args[14];
lean_object* v___y_3941_ = _args[15];
lean_object* v___y_3942_ = _args[16];
lean_object* v___y_3943_ = _args[17];
_start:
{
uint8_t v___x_16291__boxed_3944_; uint8_t v___x_16292__boxed_3945_; uint8_t v___x_16293__boxed_3946_; lean_object* v_res_3947_; 
v___x_16291__boxed_3944_ = lean_unbox(v___x_3932_);
v___x_16292__boxed_3945_ = lean_unbox(v___x_3933_);
v___x_16293__boxed_3946_ = lean_unbox(v___x_3934_);
v_res_3947_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(v___x_3926_, v_v_3927_, v___x_3928_, v___x_3929_, v___x_3930_, v_motive_3931_, v___x_16291__boxed_3944_, v___x_16292__boxed_3945_, v___x_16293__boxed_3946_, v_zs12_3935_, v_is_3936_, v_fields1_3937_, v_fields2_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec(v___y_3940_);
lean_dec_ref(v___y_3939_);
lean_dec_ref(v_fields2_3938_);
lean_dec_ref(v_fields1_3937_);
lean_dec_ref(v_zs12_3935_);
lean_dec(v___x_3929_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object* v_tail_3948_, lean_object* v_params_3949_, lean_object* v_motive_3950_, size_t v_sz_3951_, size_t v_i_3952_, lean_object* v_bs_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_){
_start:
{
uint8_t v___x_3959_; 
v___x_3959_ = lean_usize_dec_lt(v_i_3952_, v_sz_3951_);
if (v___x_3959_ == 0)
{
lean_object* v___x_3960_; 
lean_dec_ref(v_motive_3950_);
lean_dec(v_tail_3948_);
v___x_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3960_, 0, v_bs_3953_);
return v___x_3960_;
}
else
{
lean_object* v___x_3961_; lean_object* v___x_3962_; uint8_t v___x_3963_; uint8_t v___x_3964_; lean_object* v_v_3965_; lean_object* v_bs_x27_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___f_3973_; lean_object* v___x_3974_; 
v___x_3961_ = lean_unsigned_to_nat(0u);
v___x_3962_ = lean_unsigned_to_nat(1u);
v___x_3963_ = 0;
v___x_3964_ = 1;
v_v_3965_ = lean_array_uget(v_bs_3953_, v_i_3952_);
v_bs_x27_3966_ = lean_array_uset(v_bs_3953_, v_i_3952_, v___x_3961_);
v___x_3967_ = lean_usize_to_nat(v_i_3952_);
lean_inc(v_tail_3948_);
lean_inc(v_v_3965_);
v___x_3968_ = l_Lean_mkConst(v_v_3965_, v_tail_3948_);
v___x_3969_ = l_Lean_mkAppN(v___x_3968_, v_params_3949_);
v___x_3970_ = lean_box(v___x_3963_);
v___x_3971_ = lean_box(v___x_3959_);
v___x_3972_ = lean_box(v___x_3964_);
lean_inc_ref(v_motive_3950_);
lean_inc_ref(v___x_3969_);
v___f_3973_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed), 18, 9);
lean_closure_set(v___f_3973_, 0, v___x_3961_);
lean_closure_set(v___f_3973_, 1, v_v_3965_);
lean_closure_set(v___f_3973_, 2, v___x_3967_);
lean_closure_set(v___f_3973_, 3, v___x_3962_);
lean_closure_set(v___f_3973_, 4, v___x_3969_);
lean_closure_set(v___f_3973_, 5, v_motive_3950_);
lean_closure_set(v___f_3973_, 6, v___x_3970_);
lean_closure_set(v___f_3973_, 7, v___x_3971_);
lean_closure_set(v___f_3973_, 8, v___x_3972_);
v___x_3974_ = l_Lean_Meta_withSharedCtorIndices___redArg(v___x_3969_, v___f_3973_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; size_t v___x_3976_; size_t v___x_3977_; lean_object* v___x_3978_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref_known(v___x_3974_, 1);
v___x_3976_ = ((size_t)1ULL);
v___x_3977_ = lean_usize_add(v_i_3952_, v___x_3976_);
v___x_3978_ = lean_array_uset(v_bs_x27_3966_, v_i_3952_, v_a_3975_);
v_i_3952_ = v___x_3977_;
v_bs_3953_ = v___x_3978_;
goto _start;
}
else
{
lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3987_; 
lean_dec_ref(v_bs_x27_3966_);
lean_dec_ref(v_motive_3950_);
lean_dec(v_tail_3948_);
v_a_3980_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3982_ = v___x_3974_;
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v___x_3974_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3985_; 
if (v_isShared_3983_ == 0)
{
v___x_3985_ = v___x_3982_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v_a_3980_);
v___x_3985_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
return v___x_3985_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object* v_tail_3988_, lean_object* v_params_3989_, lean_object* v_motive_3990_, lean_object* v_sz_3991_, lean_object* v_i_3992_, lean_object* v_bs_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
size_t v_sz_boxed_3999_; size_t v_i_boxed_4000_; lean_object* v_res_4001_; 
v_sz_boxed_3999_ = lean_unbox_usize(v_sz_3991_);
lean_dec(v_sz_3991_);
v_i_boxed_4000_ = lean_unbox_usize(v_i_3992_);
lean_dec(v_i_3992_);
v_res_4001_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_3988_, v_params_3989_, v_motive_3990_, v_sz_boxed_3999_, v_i_boxed_4000_, v_bs_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec_ref(v_params_3989_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object* v_ctors_4004_, lean_object* v_tail_4005_, lean_object* v_params_4006_, lean_object* v_numIndices_4007_, lean_object* v___x_4008_, lean_object* v___x_4009_, uint8_t v___x_4010_, uint8_t v___x_4011_, uint8_t v___x_4012_, lean_object* v_is_4013_, lean_object* v___x_4014_, lean_object* v___x_4015_, lean_object* v___x_4016_, lean_object* v___x_4017_, lean_object* v___x_4018_, lean_object* v___x_4019_, lean_object* v_heq_4020_, lean_object* v_val_4021_, lean_object* v___x_4022_, lean_object* v_declName_4023_, lean_object* v_levelParams_4024_, lean_object* v___x_4025_, lean_object* v___x_4026_, lean_object* v_numParams_4027_, lean_object* v___x_4028_, lean_object* v_motive_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v___x_4035_; size_t v_sz_4036_; size_t v___x_4037_; lean_object* v___x_4038_; 
v___x_4035_ = lean_array_mk(v_ctors_4004_);
v_sz_4036_ = lean_array_size(v___x_4035_);
v___x_4037_ = ((size_t)0ULL);
lean_inc_ref(v___x_4035_);
lean_inc_ref(v_motive_4029_);
lean_inc(v_tail_4005_);
v___x_4038_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4005_, v_params_4006_, v_motive_4029_, v_sz_4036_, v___x_4037_, v___x_4035_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4040_; lean_object* v_fst_4041_; lean_object* v_snd_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___f_4048_; uint8_t v___x_4049_; lean_object* v___x_4050_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
v___x_4040_ = l_Array_unzip___redArg(v_a_4039_);
lean_dec(v_a_4039_);
v_fst_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_fst_4041_);
v_snd_4042_ = lean_ctor_get(v___x_4040_, 1);
lean_inc(v_snd_4042_);
lean_dec_ref(v___x_4040_);
v___x_4043_ = lean_box(v___x_4010_);
v___x_4044_ = lean_box(v___x_4011_);
v___x_4045_ = lean_box(v___x_4012_);
v___x_4046_ = lean_box_usize(v_sz_4036_);
v___x_4047_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1));
v___f_4048_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__5___boxed), 35, 29);
lean_closure_set(v___f_4048_, 0, v_numIndices_4007_);
lean_closure_set(v___f_4048_, 1, v___x_4008_);
lean_closure_set(v___f_4048_, 2, v_motive_4029_);
lean_closure_set(v___f_4048_, 3, v___x_4009_);
lean_closure_set(v___f_4048_, 4, v___x_4043_);
lean_closure_set(v___f_4048_, 5, v___x_4044_);
lean_closure_set(v___f_4048_, 6, v___x_4045_);
lean_closure_set(v___f_4048_, 7, v_is_4013_);
lean_closure_set(v___f_4048_, 8, v___x_4014_);
lean_closure_set(v___f_4048_, 9, v___x_4015_);
lean_closure_set(v___f_4048_, 10, v___x_4016_);
lean_closure_set(v___f_4048_, 11, v___x_4017_);
lean_closure_set(v___f_4048_, 12, v_params_4006_);
lean_closure_set(v___f_4048_, 13, v___x_4018_);
lean_closure_set(v___f_4048_, 14, v___x_4019_);
lean_closure_set(v___f_4048_, 15, v_heq_4020_);
lean_closure_set(v___f_4048_, 16, v_val_4021_);
lean_closure_set(v___f_4048_, 17, v_tail_4005_);
lean_closure_set(v___f_4048_, 18, v___x_4046_);
lean_closure_set(v___f_4048_, 19, v___x_4047_);
lean_closure_set(v___f_4048_, 20, v___x_4035_);
lean_closure_set(v___f_4048_, 21, v___x_4022_);
lean_closure_set(v___f_4048_, 22, v_declName_4023_);
lean_closure_set(v___f_4048_, 23, v_levelParams_4024_);
lean_closure_set(v___f_4048_, 24, v___x_4025_);
lean_closure_set(v___f_4048_, 25, v___x_4026_);
lean_closure_set(v___f_4048_, 26, v_numParams_4027_);
lean_closure_set(v___f_4048_, 27, v_snd_4042_);
lean_closure_set(v___f_4048_, 28, v___x_4028_);
v___x_4049_ = 0;
v___x_4050_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_fst_4041_, v___f_4048_, v___x_4049_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4050_;
}
else
{
lean_object* v_a_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4058_; 
lean_dec_ref(v___x_4035_);
lean_dec_ref(v_motive_4029_);
lean_dec_ref(v___x_4028_);
lean_dec(v_numParams_4027_);
lean_dec(v___x_4026_);
lean_dec(v___x_4025_);
lean_dec(v_levelParams_4024_);
lean_dec(v_declName_4023_);
lean_dec_ref(v___x_4022_);
lean_dec_ref(v_val_4021_);
lean_dec_ref(v_heq_4020_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v___x_4018_);
lean_dec(v___x_4017_);
lean_dec(v___x_4016_);
lean_dec_ref(v___x_4015_);
lean_dec_ref(v___x_4014_);
lean_dec_ref(v_is_4013_);
lean_dec_ref(v___x_4009_);
lean_dec(v___x_4008_);
lean_dec(v_numIndices_4007_);
lean_dec_ref(v_params_4006_);
lean_dec(v_tail_4005_);
v_a_4051_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4058_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_4053_ = v___x_4038_;
v_isShared_4054_ = v_isSharedCheck_4058_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_a_4051_);
lean_dec(v___x_4038_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4058_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4056_; 
if (v_isShared_4054_ == 0)
{
v___x_4056_ = v___x_4053_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v_a_4051_);
v___x_4056_ = v_reuseFailAlloc_4057_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
return v___x_4056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object** _args){
lean_object* v_ctors_4059_ = _args[0];
lean_object* v_tail_4060_ = _args[1];
lean_object* v_params_4061_ = _args[2];
lean_object* v_numIndices_4062_ = _args[3];
lean_object* v___x_4063_ = _args[4];
lean_object* v___x_4064_ = _args[5];
lean_object* v___x_4065_ = _args[6];
lean_object* v___x_4066_ = _args[7];
lean_object* v___x_4067_ = _args[8];
lean_object* v_is_4068_ = _args[9];
lean_object* v___x_4069_ = _args[10];
lean_object* v___x_4070_ = _args[11];
lean_object* v___x_4071_ = _args[12];
lean_object* v___x_4072_ = _args[13];
lean_object* v___x_4073_ = _args[14];
lean_object* v___x_4074_ = _args[15];
lean_object* v_heq_4075_ = _args[16];
lean_object* v_val_4076_ = _args[17];
lean_object* v___x_4077_ = _args[18];
lean_object* v_declName_4078_ = _args[19];
lean_object* v_levelParams_4079_ = _args[20];
lean_object* v___x_4080_ = _args[21];
lean_object* v___x_4081_ = _args[22];
lean_object* v_numParams_4082_ = _args[23];
lean_object* v___x_4083_ = _args[24];
lean_object* v_motive_4084_ = _args[25];
lean_object* v___y_4085_ = _args[26];
lean_object* v___y_4086_ = _args[27];
lean_object* v___y_4087_ = _args[28];
lean_object* v___y_4088_ = _args[29];
lean_object* v___y_4089_ = _args[30];
_start:
{
uint8_t v___x_16528__boxed_4090_; uint8_t v___x_16529__boxed_4091_; uint8_t v___x_16530__boxed_4092_; lean_object* v_res_4093_; 
v___x_16528__boxed_4090_ = lean_unbox(v___x_4065_);
v___x_16529__boxed_4091_ = lean_unbox(v___x_4066_);
v___x_16530__boxed_4092_ = lean_unbox(v___x_4067_);
v_res_4093_ = l_Lean_mkCasesOnSameCtor___lam__6(v_ctors_4059_, v_tail_4060_, v_params_4061_, v_numIndices_4062_, v___x_4063_, v___x_4064_, v___x_16528__boxed_4090_, v___x_16529__boxed_4091_, v___x_16530__boxed_4092_, v_is_4068_, v___x_4069_, v___x_4070_, v___x_4071_, v___x_4072_, v___x_4073_, v___x_4074_, v_heq_4075_, v_val_4076_, v___x_4077_, v_declName_4078_, v_levelParams_4079_, v___x_4080_, v___x_4081_, v_numParams_4082_, v___x_4083_, v_motive_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object* v___x_4094_, lean_object* v___x_4095_, lean_object* v_is_4096_, lean_object* v_head_4097_, lean_object* v_ctors_4098_, lean_object* v_tail_4099_, lean_object* v_params_4100_, lean_object* v_numIndices_4101_, lean_object* v___x_4102_, lean_object* v___x_4103_, lean_object* v___x_4104_, lean_object* v___x_4105_, lean_object* v___x_4106_, lean_object* v_val_4107_, lean_object* v___x_4108_, lean_object* v_declName_4109_, lean_object* v_levelParams_4110_, lean_object* v___x_4111_, lean_object* v_numParams_4112_, lean_object* v___x_4113_, lean_object* v_heq_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_){
_start:
{
lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; uint8_t v___x_4127_; uint8_t v___x_4128_; uint8_t v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___f_4133_; lean_object* v___x_4134_; 
v___x_4120_ = lean_unsigned_to_nat(3u);
v___x_4121_ = lean_mk_empty_array_with_capacity(v___x_4120_);
lean_inc_ref(v___x_4094_);
v___x_4122_ = lean_array_push(v___x_4121_, v___x_4094_);
lean_inc_ref(v___x_4095_);
v___x_4123_ = lean_array_push(v___x_4122_, v___x_4095_);
lean_inc_ref(v_heq_4114_);
v___x_4124_ = lean_array_push(v___x_4123_, v_heq_4114_);
lean_inc_ref(v_is_4096_);
v___x_4125_ = l_Array_append___redArg(v_is_4096_, v___x_4124_);
lean_dec_ref(v___x_4124_);
v___x_4126_ = l_Lean_mkSort(v_head_4097_);
v___x_4127_ = 0;
v___x_4128_ = 1;
v___x_4129_ = 1;
v___x_4130_ = lean_box(v___x_4127_);
v___x_4131_ = lean_box(v___x_4128_);
v___x_4132_ = lean_box(v___x_4129_);
lean_inc_ref(v___x_4125_);
v___f_4133_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed), 31, 25);
lean_closure_set(v___f_4133_, 0, v_ctors_4098_);
lean_closure_set(v___f_4133_, 1, v_tail_4099_);
lean_closure_set(v___f_4133_, 2, v_params_4100_);
lean_closure_set(v___f_4133_, 3, v_numIndices_4101_);
lean_closure_set(v___f_4133_, 4, v___x_4102_);
lean_closure_set(v___f_4133_, 5, v___x_4125_);
lean_closure_set(v___f_4133_, 6, v___x_4130_);
lean_closure_set(v___f_4133_, 7, v___x_4131_);
lean_closure_set(v___f_4133_, 8, v___x_4132_);
lean_closure_set(v___f_4133_, 9, v_is_4096_);
lean_closure_set(v___f_4133_, 10, v___x_4095_);
lean_closure_set(v___f_4133_, 11, v___x_4094_);
lean_closure_set(v___f_4133_, 12, v___x_4103_);
lean_closure_set(v___f_4133_, 13, v___x_4104_);
lean_closure_set(v___f_4133_, 14, v___x_4105_);
lean_closure_set(v___f_4133_, 15, v___x_4106_);
lean_closure_set(v___f_4133_, 16, v_heq_4114_);
lean_closure_set(v___f_4133_, 17, v_val_4107_);
lean_closure_set(v___f_4133_, 18, v___x_4108_);
lean_closure_set(v___f_4133_, 19, v_declName_4109_);
lean_closure_set(v___f_4133_, 20, v_levelParams_4110_);
lean_closure_set(v___f_4133_, 21, v___x_4120_);
lean_closure_set(v___f_4133_, 22, v___x_4111_);
lean_closure_set(v___f_4133_, 23, v_numParams_4112_);
lean_closure_set(v___f_4133_, 24, v___x_4113_);
v___x_4134_ = l_Lean_Meta_mkForallFVars(v___x_4125_, v___x_4126_, v___x_4127_, v___x_4128_, v___x_4128_, v___x_4129_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec_ref(v___x_4125_);
if (lean_obj_tag(v___x_4134_) == 0)
{
lean_object* v_a_4135_; lean_object* v___x_4136_; uint8_t v___x_4137_; lean_object* v___x_4138_; 
v_a_4135_ = lean_ctor_get(v___x_4134_, 0);
lean_inc(v_a_4135_);
lean_dec_ref_known(v___x_4134_, 1);
v___x_4136_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_4137_ = 0;
v___x_4138_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_4136_, v___x_4129_, v_a_4135_, v___f_4133_, v___x_4137_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
return v___x_4138_;
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
lean_dec_ref(v___f_4133_);
v_a_4139_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4134_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4134_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object** _args){
lean_object* v___x_4147_ = _args[0];
lean_object* v___x_4148_ = _args[1];
lean_object* v_is_4149_ = _args[2];
lean_object* v_head_4150_ = _args[3];
lean_object* v_ctors_4151_ = _args[4];
lean_object* v_tail_4152_ = _args[5];
lean_object* v_params_4153_ = _args[6];
lean_object* v_numIndices_4154_ = _args[7];
lean_object* v___x_4155_ = _args[8];
lean_object* v___x_4156_ = _args[9];
lean_object* v___x_4157_ = _args[10];
lean_object* v___x_4158_ = _args[11];
lean_object* v___x_4159_ = _args[12];
lean_object* v_val_4160_ = _args[13];
lean_object* v___x_4161_ = _args[14];
lean_object* v_declName_4162_ = _args[15];
lean_object* v_levelParams_4163_ = _args[16];
lean_object* v___x_4164_ = _args[17];
lean_object* v_numParams_4165_ = _args[18];
lean_object* v___x_4166_ = _args[19];
lean_object* v_heq_4167_ = _args[20];
lean_object* v___y_4168_ = _args[21];
lean_object* v___y_4169_ = _args[22];
lean_object* v___y_4170_ = _args[23];
lean_object* v___y_4171_ = _args[24];
lean_object* v___y_4172_ = _args[25];
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l_Lean_mkCasesOnSameCtor___lam__7(v___x_4147_, v___x_4148_, v_is_4149_, v_head_4150_, v_ctors_4151_, v_tail_4152_, v_params_4153_, v_numIndices_4154_, v___x_4155_, v___x_4156_, v___x_4157_, v___x_4158_, v___x_4159_, v_val_4160_, v___x_4161_, v_declName_4162_, v_levelParams_4163_, v___x_4164_, v_numParams_4165_, v___x_4166_, v_heq_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_);
lean_dec(v___y_4171_);
lean_dec_ref(v___y_4170_);
lean_dec(v___y_4169_);
lean_dec_ref(v___y_4168_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object* v___x_4174_, lean_object* v_x1_4175_, lean_object* v_indName_4176_, lean_object* v_tail_4177_, lean_object* v_params_4178_, lean_object* v_is_4179_, lean_object* v___x_4180_, lean_object* v_head_4181_, lean_object* v_ctors_4182_, lean_object* v_numIndices_4183_, lean_object* v___x_4184_, lean_object* v___x_4185_, lean_object* v_val_4186_, lean_object* v_declName_4187_, lean_object* v_levelParams_4188_, lean_object* v_numParams_4189_, lean_object* v___x_4190_, lean_object* v_x2_4191_, lean_object* v_x_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___f_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4198_ = lean_unsigned_to_nat(0u);
v___x_4199_ = lean_array_get_borrowed(v___x_4174_, v_x1_4175_, v___x_4198_);
v___x_4200_ = lean_array_get_borrowed(v___x_4174_, v_x2_4191_, v___x_4198_);
v___x_4201_ = l_Lean_mkCtorIdxName(v_indName_4176_);
lean_inc(v_tail_4177_);
v___x_4202_ = l_Lean_mkConst(v___x_4201_, v_tail_4177_);
lean_inc_ref(v_params_4178_);
v___x_4203_ = l_Array_append___redArg(v_params_4178_, v_is_4179_);
v___x_4204_ = lean_mk_empty_array_with_capacity(v___x_4180_);
lean_inc_n(v___x_4199_, 2);
lean_inc_ref_n(v___x_4204_, 2);
v___x_4205_ = lean_array_push(v___x_4204_, v___x_4199_);
lean_inc_ref(v___x_4203_);
v___x_4206_ = l_Array_append___redArg(v___x_4203_, v___x_4205_);
lean_inc_ref(v___x_4202_);
v___x_4207_ = l_Lean_mkAppN(v___x_4202_, v___x_4206_);
lean_dec_ref(v___x_4206_);
lean_inc_n(v___x_4200_, 2);
v___x_4208_ = lean_array_push(v___x_4204_, v___x_4200_);
lean_inc_ref(v___x_4208_);
v___f_4209_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__7___boxed), 26, 20);
lean_closure_set(v___f_4209_, 0, v___x_4199_);
lean_closure_set(v___f_4209_, 1, v___x_4200_);
lean_closure_set(v___f_4209_, 2, v_is_4179_);
lean_closure_set(v___f_4209_, 3, v_head_4181_);
lean_closure_set(v___f_4209_, 4, v_ctors_4182_);
lean_closure_set(v___f_4209_, 5, v_tail_4177_);
lean_closure_set(v___f_4209_, 6, v_params_4178_);
lean_closure_set(v___f_4209_, 7, v_numIndices_4183_);
lean_closure_set(v___f_4209_, 8, v___x_4180_);
lean_closure_set(v___f_4209_, 9, v___x_4184_);
lean_closure_set(v___f_4209_, 10, v___x_4185_);
lean_closure_set(v___f_4209_, 11, v___x_4205_);
lean_closure_set(v___f_4209_, 12, v___x_4208_);
lean_closure_set(v___f_4209_, 13, v_val_4186_);
lean_closure_set(v___f_4209_, 14, v___x_4204_);
lean_closure_set(v___f_4209_, 15, v_declName_4187_);
lean_closure_set(v___f_4209_, 16, v_levelParams_4188_);
lean_closure_set(v___f_4209_, 17, v___x_4198_);
lean_closure_set(v___f_4209_, 18, v_numParams_4189_);
lean_closure_set(v___f_4209_, 19, v___x_4190_);
v___x_4210_ = l_Array_append___redArg(v___x_4203_, v___x_4208_);
lean_dec_ref(v___x_4208_);
v___x_4211_ = l_Lean_mkAppN(v___x_4202_, v___x_4210_);
lean_dec_ref(v___x_4210_);
v___x_4212_ = l_Lean_Meta_mkEq(v___x_4207_, v___x_4211_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
lean_inc(v_a_4213_);
lean_dec_ref_known(v___x_4212_, 1);
v___x_4214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_4215_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_4214_, v_a_4213_, v___f_4209_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
return v___x_4215_;
}
else
{
lean_object* v_a_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4223_; 
lean_dec_ref(v___f_4209_);
v_a_4216_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4218_ = v___x_4212_;
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_a_4216_);
lean_dec(v___x_4212_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___x_4221_; 
if (v_isShared_4219_ == 0)
{
v___x_4221_ = v___x_4218_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v_a_4216_);
v___x_4221_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
return v___x_4221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object** _args){
lean_object* v___x_4224_ = _args[0];
lean_object* v_x1_4225_ = _args[1];
lean_object* v_indName_4226_ = _args[2];
lean_object* v_tail_4227_ = _args[3];
lean_object* v_params_4228_ = _args[4];
lean_object* v_is_4229_ = _args[5];
lean_object* v___x_4230_ = _args[6];
lean_object* v_head_4231_ = _args[7];
lean_object* v_ctors_4232_ = _args[8];
lean_object* v_numIndices_4233_ = _args[9];
lean_object* v___x_4234_ = _args[10];
lean_object* v___x_4235_ = _args[11];
lean_object* v_val_4236_ = _args[12];
lean_object* v_declName_4237_ = _args[13];
lean_object* v_levelParams_4238_ = _args[14];
lean_object* v_numParams_4239_ = _args[15];
lean_object* v___x_4240_ = _args[16];
lean_object* v_x2_4241_ = _args[17];
lean_object* v_x_4242_ = _args[18];
lean_object* v___y_4243_ = _args[19];
lean_object* v___y_4244_ = _args[20];
lean_object* v___y_4245_ = _args[21];
lean_object* v___y_4246_ = _args[22];
lean_object* v___y_4247_ = _args[23];
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lean_mkCasesOnSameCtor___lam__8(v___x_4224_, v_x1_4225_, v_indName_4226_, v_tail_4227_, v_params_4228_, v_is_4229_, v___x_4230_, v_head_4231_, v_ctors_4232_, v_numIndices_4233_, v___x_4234_, v___x_4235_, v_val_4236_, v_declName_4237_, v_levelParams_4238_, v_numParams_4239_, v___x_4240_, v_x2_4241_, v_x_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
lean_dec(v___y_4244_);
lean_dec_ref(v___y_4243_);
lean_dec_ref(v_x_4242_);
lean_dec_ref(v_x2_4241_);
lean_dec_ref(v_x1_4225_);
lean_dec_ref(v___x_4224_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object* v___x_4249_, lean_object* v_indName_4250_, lean_object* v_tail_4251_, lean_object* v_params_4252_, lean_object* v_is_4253_, lean_object* v___x_4254_, lean_object* v_head_4255_, lean_object* v_ctors_4256_, lean_object* v_numIndices_4257_, lean_object* v___x_4258_, lean_object* v___x_4259_, lean_object* v_val_4260_, lean_object* v_declName_4261_, lean_object* v_levelParams_4262_, lean_object* v_numParams_4263_, lean_object* v___x_4264_, lean_object* v_t_4265_, lean_object* v___x_4266_, lean_object* v_x1_4267_, lean_object* v_x_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___f_4274_; uint8_t v___x_4275_; lean_object* v___x_4276_; 
v___f_4274_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__8___boxed), 24, 17);
lean_closure_set(v___f_4274_, 0, v___x_4249_);
lean_closure_set(v___f_4274_, 1, v_x1_4267_);
lean_closure_set(v___f_4274_, 2, v_indName_4250_);
lean_closure_set(v___f_4274_, 3, v_tail_4251_);
lean_closure_set(v___f_4274_, 4, v_params_4252_);
lean_closure_set(v___f_4274_, 5, v_is_4253_);
lean_closure_set(v___f_4274_, 6, v___x_4254_);
lean_closure_set(v___f_4274_, 7, v_head_4255_);
lean_closure_set(v___f_4274_, 8, v_ctors_4256_);
lean_closure_set(v___f_4274_, 9, v_numIndices_4257_);
lean_closure_set(v___f_4274_, 10, v___x_4258_);
lean_closure_set(v___f_4274_, 11, v___x_4259_);
lean_closure_set(v___f_4274_, 12, v_val_4260_);
lean_closure_set(v___f_4274_, 13, v_declName_4261_);
lean_closure_set(v___f_4274_, 14, v_levelParams_4262_);
lean_closure_set(v___f_4274_, 15, v_numParams_4263_);
lean_closure_set(v___f_4274_, 16, v___x_4264_);
v___x_4275_ = 0;
v___x_4276_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4265_, v___x_4266_, v___f_4274_, v___x_4275_, v___x_4275_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
return v___x_4276_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object** _args){
lean_object* v___x_4277_ = _args[0];
lean_object* v_indName_4278_ = _args[1];
lean_object* v_tail_4279_ = _args[2];
lean_object* v_params_4280_ = _args[3];
lean_object* v_is_4281_ = _args[4];
lean_object* v___x_4282_ = _args[5];
lean_object* v_head_4283_ = _args[6];
lean_object* v_ctors_4284_ = _args[7];
lean_object* v_numIndices_4285_ = _args[8];
lean_object* v___x_4286_ = _args[9];
lean_object* v___x_4287_ = _args[10];
lean_object* v_val_4288_ = _args[11];
lean_object* v_declName_4289_ = _args[12];
lean_object* v_levelParams_4290_ = _args[13];
lean_object* v_numParams_4291_ = _args[14];
lean_object* v___x_4292_ = _args[15];
lean_object* v_t_4293_ = _args[16];
lean_object* v___x_4294_ = _args[17];
lean_object* v_x1_4295_ = _args[18];
lean_object* v_x_4296_ = _args[19];
lean_object* v___y_4297_ = _args[20];
lean_object* v___y_4298_ = _args[21];
lean_object* v___y_4299_ = _args[22];
lean_object* v___y_4300_ = _args[23];
lean_object* v___y_4301_ = _args[24];
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lean_mkCasesOnSameCtor___lam__9(v___x_4277_, v_indName_4278_, v_tail_4279_, v_params_4280_, v_is_4281_, v___x_4282_, v_head_4283_, v_ctors_4284_, v_numIndices_4285_, v___x_4286_, v___x_4287_, v_val_4288_, v_declName_4289_, v_levelParams_4290_, v_numParams_4291_, v___x_4292_, v_t_4293_, v___x_4294_, v_x1_4295_, v_x_4296_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec_ref(v_x_4296_);
return v_res_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object* v___x_4303_, lean_object* v_indName_4304_, lean_object* v_tail_4305_, lean_object* v_params_4306_, lean_object* v_head_4307_, lean_object* v_ctors_4308_, lean_object* v_numIndices_4309_, lean_object* v___x_4310_, lean_object* v___x_4311_, lean_object* v_val_4312_, lean_object* v_declName_4313_, lean_object* v_levelParams_4314_, lean_object* v_numParams_4315_, lean_object* v___x_4316_, lean_object* v_is_4317_, lean_object* v_t_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_){
_start:
{
lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___f_4326_; uint8_t v___x_4327_; lean_object* v___x_4328_; 
v___x_4324_ = lean_unsigned_to_nat(1u);
v___x_4325_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
lean_inc_ref(v_t_4318_);
v___f_4326_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__9___boxed), 25, 18);
lean_closure_set(v___f_4326_, 0, v___x_4303_);
lean_closure_set(v___f_4326_, 1, v_indName_4304_);
lean_closure_set(v___f_4326_, 2, v_tail_4305_);
lean_closure_set(v___f_4326_, 3, v_params_4306_);
lean_closure_set(v___f_4326_, 4, v_is_4317_);
lean_closure_set(v___f_4326_, 5, v___x_4324_);
lean_closure_set(v___f_4326_, 6, v_head_4307_);
lean_closure_set(v___f_4326_, 7, v_ctors_4308_);
lean_closure_set(v___f_4326_, 8, v_numIndices_4309_);
lean_closure_set(v___f_4326_, 9, v___x_4310_);
lean_closure_set(v___f_4326_, 10, v___x_4311_);
lean_closure_set(v___f_4326_, 11, v_val_4312_);
lean_closure_set(v___f_4326_, 12, v_declName_4313_);
lean_closure_set(v___f_4326_, 13, v_levelParams_4314_);
lean_closure_set(v___f_4326_, 14, v_numParams_4315_);
lean_closure_set(v___f_4326_, 15, v___x_4316_);
lean_closure_set(v___f_4326_, 16, v_t_4318_);
lean_closure_set(v___f_4326_, 17, v___x_4325_);
v___x_4327_ = 0;
v___x_4328_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4318_, v___x_4325_, v___f_4326_, v___x_4327_, v___x_4327_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object** _args){
lean_object* v___x_4329_ = _args[0];
lean_object* v_indName_4330_ = _args[1];
lean_object* v_tail_4331_ = _args[2];
lean_object* v_params_4332_ = _args[3];
lean_object* v_head_4333_ = _args[4];
lean_object* v_ctors_4334_ = _args[5];
lean_object* v_numIndices_4335_ = _args[6];
lean_object* v___x_4336_ = _args[7];
lean_object* v___x_4337_ = _args[8];
lean_object* v_val_4338_ = _args[9];
lean_object* v_declName_4339_ = _args[10];
lean_object* v_levelParams_4340_ = _args[11];
lean_object* v_numParams_4341_ = _args[12];
lean_object* v___x_4342_ = _args[13];
lean_object* v_is_4343_ = _args[14];
lean_object* v_t_4344_ = _args[15];
lean_object* v___y_4345_ = _args[16];
lean_object* v___y_4346_ = _args[17];
lean_object* v___y_4347_ = _args[18];
lean_object* v___y_4348_ = _args[19];
lean_object* v___y_4349_ = _args[20];
_start:
{
lean_object* v_res_4350_; 
v_res_4350_ = l_Lean_mkCasesOnSameCtor___lam__10(v___x_4329_, v_indName_4330_, v_tail_4331_, v_params_4332_, v_head_4333_, v_ctors_4334_, v_numIndices_4335_, v___x_4336_, v___x_4337_, v_val_4338_, v_declName_4339_, v_levelParams_4340_, v_numParams_4341_, v___x_4342_, v_is_4343_, v_t_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
return v_res_4350_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object* v___x_4351_, lean_object* v_indName_4352_, lean_object* v_tail_4353_, lean_object* v_head_4354_, lean_object* v_ctors_4355_, lean_object* v_numIndices_4356_, lean_object* v___x_4357_, lean_object* v___x_4358_, lean_object* v_val_4359_, lean_object* v_declName_4360_, lean_object* v_levelParams_4361_, lean_object* v_numParams_4362_, lean_object* v_params_4363_, lean_object* v_t_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_){
_start:
{
lean_object* v___x_4370_; lean_object* v___f_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; lean_object* v___x_4374_; 
v___x_4370_ = l_Lean_Expr_bindingBody_x21(v_t_4364_);
lean_inc_ref(v___x_4370_);
lean_inc(v_numIndices_4356_);
v___f_4371_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__10___boxed), 21, 14);
lean_closure_set(v___f_4371_, 0, v___x_4351_);
lean_closure_set(v___f_4371_, 1, v_indName_4352_);
lean_closure_set(v___f_4371_, 2, v_tail_4353_);
lean_closure_set(v___f_4371_, 3, v_params_4363_);
lean_closure_set(v___f_4371_, 4, v_head_4354_);
lean_closure_set(v___f_4371_, 5, v_ctors_4355_);
lean_closure_set(v___f_4371_, 6, v_numIndices_4356_);
lean_closure_set(v___f_4371_, 7, v___x_4357_);
lean_closure_set(v___f_4371_, 8, v___x_4358_);
lean_closure_set(v___f_4371_, 9, v_val_4359_);
lean_closure_set(v___f_4371_, 10, v_declName_4360_);
lean_closure_set(v___f_4371_, 11, v_levelParams_4361_);
lean_closure_set(v___f_4371_, 12, v_numParams_4362_);
lean_closure_set(v___f_4371_, 13, v___x_4370_);
v___x_4372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4372_, 0, v_numIndices_4356_);
v___x_4373_ = 0;
v___x_4374_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_4370_, v___x_4372_, v___f_4371_, v___x_4373_, v___x_4373_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object** _args){
lean_object* v___x_4375_ = _args[0];
lean_object* v_indName_4376_ = _args[1];
lean_object* v_tail_4377_ = _args[2];
lean_object* v_head_4378_ = _args[3];
lean_object* v_ctors_4379_ = _args[4];
lean_object* v_numIndices_4380_ = _args[5];
lean_object* v___x_4381_ = _args[6];
lean_object* v___x_4382_ = _args[7];
lean_object* v_val_4383_ = _args[8];
lean_object* v_declName_4384_ = _args[9];
lean_object* v_levelParams_4385_ = _args[10];
lean_object* v_numParams_4386_ = _args[11];
lean_object* v_params_4387_ = _args[12];
lean_object* v_t_4388_ = _args[13];
lean_object* v___y_4389_ = _args[14];
lean_object* v___y_4390_ = _args[15];
lean_object* v___y_4391_ = _args[16];
lean_object* v___y_4392_ = _args[17];
lean_object* v___y_4393_ = _args[18];
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lean_mkCasesOnSameCtor___lam__11(v___x_4375_, v_indName_4376_, v_tail_4377_, v_head_4378_, v_ctors_4379_, v_numIndices_4380_, v___x_4381_, v___x_4382_, v_val_4383_, v_declName_4384_, v_levelParams_4385_, v_numParams_4386_, v_params_4387_, v_t_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
lean_dec_ref(v_t_4388_);
return v_res_4394_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__3(void){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4399_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_4400_ = lean_unsigned_to_nat(58u);
v___x_4401_ = lean_unsigned_to_nat(142u);
v___x_4402_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4403_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4404_ = l_mkPanicMessageWithDecl(v___x_4403_, v___x_4402_, v___x_4401_, v___x_4400_, v___x_4399_);
return v___x_4404_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__4(void){
_start:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v___x_4405_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_4406_ = lean_unsigned_to_nat(60u);
v___x_4407_ = lean_unsigned_to_nat(136u);
v___x_4408_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4409_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4410_ = l_mkPanicMessageWithDecl(v___x_4409_, v___x_4408_, v___x_4407_, v___x_4406_, v___x_4405_);
return v___x_4410_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object* v_declName_4411_, lean_object* v_indName_4412_, lean_object* v_a_4413_, lean_object* v_a_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_){
_start:
{
lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4418_ = l_Lean_instInhabitedExpr;
lean_inc(v_indName_4412_);
v___x_4419_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_a_4420_);
lean_dec_ref_known(v___x_4419_, 1);
if (lean_obj_tag(v_a_4420_) == 5)
{
lean_object* v_val_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v_val_4421_ = lean_ctor_get(v_a_4420_, 0);
lean_inc_ref(v_val_4421_);
lean_dec_ref_known(v_a_4420_, 1);
v___x_4422_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__1));
lean_inc(v_declName_4411_);
v___x_4423_ = l_Lean_Name_append(v_declName_4411_, v___x_4422_);
lean_inc(v_indName_4412_);
lean_inc(v___x_4423_);
v___x_4424_ = l_Lean_mkCasesOnSameCtorHet(v___x_4423_, v_indName_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4456_; 
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4456_ == 0)
{
lean_object* v_unused_4457_; 
v_unused_4457_ = lean_ctor_get(v___x_4424_, 0);
lean_dec(v_unused_4457_);
v___x_4426_ = v___x_4424_;
v_isShared_4427_ = v_isSharedCheck_4456_;
goto v_resetjp_4425_;
}
else
{
lean_dec(v___x_4424_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4456_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
lean_inc(v_indName_4412_);
v___x_4428_ = l_Lean_mkCasesOnName(v_indName_4412_);
v___x_4429_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_4428_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v_levelParams_4431_; lean_object* v_type_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
v_levelParams_4431_ = lean_ctor_get(v_a_4430_, 1);
lean_inc_n(v_levelParams_4431_, 2);
v_type_4432_ = lean_ctor_get(v_a_4430_, 2);
lean_inc_ref(v_type_4432_);
lean_dec(v_a_4430_);
v___x_4433_ = lean_box(0);
v___x_4434_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_4431_, v___x_4433_);
if (lean_obj_tag(v___x_4434_) == 1)
{
lean_object* v_head_4435_; lean_object* v_tail_4436_; lean_object* v_numParams_4437_; lean_object* v_numIndices_4438_; lean_object* v_ctors_4439_; lean_object* v___f_4440_; lean_object* v___x_4442_; 
v_head_4435_ = lean_ctor_get(v___x_4434_, 0);
lean_inc(v_head_4435_);
v_tail_4436_ = lean_ctor_get(v___x_4434_, 1);
lean_inc(v_tail_4436_);
v_numParams_4437_ = lean_ctor_get(v_val_4421_, 1);
lean_inc_n(v_numParams_4437_, 2);
v_numIndices_4438_ = lean_ctor_get(v_val_4421_, 2);
lean_inc(v_numIndices_4438_);
v_ctors_4439_ = lean_ctor_get(v_val_4421_, 4);
lean_inc(v_ctors_4439_);
v___f_4440_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__11___boxed), 19, 12);
lean_closure_set(v___f_4440_, 0, v___x_4418_);
lean_closure_set(v___f_4440_, 1, v_indName_4412_);
lean_closure_set(v___f_4440_, 2, v_tail_4436_);
lean_closure_set(v___f_4440_, 3, v_head_4435_);
lean_closure_set(v___f_4440_, 4, v_ctors_4439_);
lean_closure_set(v___f_4440_, 5, v_numIndices_4438_);
lean_closure_set(v___f_4440_, 6, v___x_4423_);
lean_closure_set(v___f_4440_, 7, v___x_4434_);
lean_closure_set(v___f_4440_, 8, v_val_4421_);
lean_closure_set(v___f_4440_, 9, v_declName_4411_);
lean_closure_set(v___f_4440_, 10, v_levelParams_4431_);
lean_closure_set(v___f_4440_, 11, v_numParams_4437_);
if (v_isShared_4427_ == 0)
{
lean_ctor_set_tag(v___x_4426_, 1);
lean_ctor_set(v___x_4426_, 0, v_numParams_4437_);
v___x_4442_ = v___x_4426_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v_numParams_4437_);
v___x_4442_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
uint8_t v___x_4443_; lean_object* v___x_4444_; 
v___x_4443_ = 0;
v___x_4444_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_4432_, v___x_4442_, v___f_4440_, v___x_4443_, v___x_4443_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
return v___x_4444_;
}
}
else
{
lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_dec(v___x_4434_);
lean_dec_ref(v_type_4432_);
lean_dec(v_levelParams_4431_);
lean_del_object(v___x_4426_);
lean_dec(v___x_4423_);
lean_dec_ref(v_val_4421_);
lean_dec(v_indName_4412_);
lean_dec(v_declName_4411_);
v___x_4446_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__3, &l_Lean_mkCasesOnSameCtor___closed__3_once, _init_l_Lean_mkCasesOnSameCtor___closed__3);
v___x_4447_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4446_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
return v___x_4447_;
}
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_del_object(v___x_4426_);
lean_dec(v___x_4423_);
lean_dec_ref(v_val_4421_);
lean_dec(v_indName_4412_);
lean_dec(v_declName_4411_);
v_a_4448_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4429_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4429_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
}
else
{
lean_dec(v___x_4423_);
lean_dec_ref(v_val_4421_);
lean_dec(v_indName_4412_);
lean_dec(v_declName_4411_);
return v___x_4424_;
}
}
else
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
lean_dec(v_a_4420_);
lean_dec(v_indName_4412_);
lean_dec(v_declName_4411_);
v___x_4458_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__4, &l_Lean_mkCasesOnSameCtor___closed__4_once, _init_l_Lean_mkCasesOnSameCtor___closed__4);
v___x_4459_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4458_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
return v___x_4459_;
}
}
else
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4467_; 
lean_dec(v_indName_4412_);
lean_dec(v_declName_4411_);
v_a_4460_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4462_ = v___x_4419_;
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v___x_4419_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_a_4460_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object* v_declName_4468_, lean_object* v_indName_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lean_mkCasesOnSameCtor(v_declName_4468_, v_indName_4469_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
lean_dec(v_a_4473_);
lean_dec_ref(v_a_4472_);
lean_dec(v_a_4471_);
lean_dec_ref(v_a_4470_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object* v_tail_4476_, lean_object* v_params_4477_, lean_object* v_motive_4478_, lean_object* v_as_4479_, size_t v_sz_4480_, size_t v_i_4481_, lean_object* v_bs_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4476_, v_params_4477_, v_motive_4478_, v_sz_4480_, v_i_4481_, v_bs_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object* v_tail_4489_, lean_object* v_params_4490_, lean_object* v_motive_4491_, lean_object* v_as_4492_, lean_object* v_sz_4493_, lean_object* v_i_4494_, lean_object* v_bs_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
size_t v_sz_boxed_4501_; size_t v_i_boxed_4502_; lean_object* v_res_4503_; 
v_sz_boxed_4501_ = lean_unbox_usize(v_sz_4493_);
lean_dec(v_sz_4493_);
v_i_boxed_4502_ = lean_unbox_usize(v_i_4494_);
lean_dec(v_i_4494_);
v_res_4503_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(v_tail_4489_, v_params_4490_, v_motive_4491_, v_as_4492_, v_sz_boxed_4501_, v_i_boxed_4502_, v_bs_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_);
lean_dec(v___y_4499_);
lean_dec_ref(v___y_4498_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec_ref(v_as_4492_);
lean_dec_ref(v_params_4490_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object* v_tail_4504_, lean_object* v_params_4505_, lean_object* v_a_4506_, lean_object* v_snd_4507_, lean_object* v_alts_4508_, lean_object* v_as_4509_, size_t v_sz_4510_, size_t v_i_4511_, lean_object* v_bs_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_){
_start:
{
lean_object* v___x_4518_; 
v___x_4518_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_4504_, v_params_4505_, v_a_4506_, v_snd_4507_, v_alts_4508_, v_sz_4510_, v_i_4511_, v_bs_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
return v___x_4518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object* v_tail_4519_, lean_object* v_params_4520_, lean_object* v_a_4521_, lean_object* v_snd_4522_, lean_object* v_alts_4523_, lean_object* v_as_4524_, lean_object* v_sz_4525_, lean_object* v_i_4526_, lean_object* v_bs_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_){
_start:
{
size_t v_sz_boxed_4533_; size_t v_i_boxed_4534_; lean_object* v_res_4535_; 
v_sz_boxed_4533_ = lean_unbox_usize(v_sz_4525_);
lean_dec(v_sz_4525_);
v_i_boxed_4534_ = lean_unbox_usize(v_i_4526_);
lean_dec(v_i_4526_);
v_res_4535_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(v_tail_4519_, v_params_4520_, v_a_4521_, v_snd_4522_, v_alts_4523_, v_as_4524_, v_sz_boxed_4533_, v_i_boxed_4534_, v_bs_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec_ref(v_as_4524_);
lean_dec_ref(v_params_4520_);
return v_res_4535_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
}
#ifdef __cplusplus
}
#endif

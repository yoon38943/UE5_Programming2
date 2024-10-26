// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/DelegateParamTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_DelegateParamTrigger_generated_h
#error "DelegateParamTrigger.generated.h already included, missing '#pragma once' in DelegateParamTrigger.h"
#endif
#define BASIC_DelegateParamTrigger_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelegateParamTrigger(); \
	friend struct Z_Construct_UClass_ADelegateParamTrigger_Statics; \
public: \
	DECLARE_CLASS(ADelegateParamTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ADelegateParamTrigger)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADelegateParamTrigger(ADelegateParamTrigger&&); \
	ADelegateParamTrigger(const ADelegateParamTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateParamTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateParamTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelegateParamTrigger) \
	NO_API virtual ~ADelegateParamTrigger();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ADelegateParamTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

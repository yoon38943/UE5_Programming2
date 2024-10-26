// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/DelegateTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_DelegateTrigger_generated_h
#error "DelegateTrigger.generated.h already included, missing '#pragma once' in DelegateTrigger.h"
#endif
#define BASIC_DelegateTrigger_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelegateTrigger(); \
	friend struct Z_Construct_UClass_ADelegateTrigger_Statics; \
public: \
	DECLARE_CLASS(ADelegateTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ADelegateTrigger)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADelegateTrigger(ADelegateTrigger&&); \
	ADelegateTrigger(const ADelegateTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelegateTrigger) \
	NO_API virtual ~ADelegateTrigger();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ADelegateTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

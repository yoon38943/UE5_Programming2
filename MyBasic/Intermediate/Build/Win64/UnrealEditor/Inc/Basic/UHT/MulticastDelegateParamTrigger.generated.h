// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/MulticastDelegateParamTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_MulticastDelegateParamTrigger_generated_h
#error "MulticastDelegateParamTrigger.generated.h already included, missing '#pragma once' in MulticastDelegateParamTrigger.h"
#endif
#define BASIC_MulticastDelegateParamTrigger_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMulticastDelegateParamTrigger(); \
	friend struct Z_Construct_UClass_AMulticastDelegateParamTrigger_Statics; \
public: \
	DECLARE_CLASS(AMulticastDelegateParamTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AMulticastDelegateParamTrigger)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMulticastDelegateParamTrigger(AMulticastDelegateParamTrigger&&); \
	AMulticastDelegateParamTrigger(const AMulticastDelegateParamTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMulticastDelegateParamTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMulticastDelegateParamTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMulticastDelegateParamTrigger) \
	NO_API virtual ~AMulticastDelegateParamTrigger();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AMulticastDelegateParamTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

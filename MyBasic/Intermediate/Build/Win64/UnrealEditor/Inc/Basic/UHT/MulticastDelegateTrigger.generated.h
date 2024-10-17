// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/MulticastDelegateTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_MulticastDelegateTrigger_generated_h
#error "MulticastDelegateTrigger.generated.h already included, missing '#pragma once' in MulticastDelegateTrigger.h"
#endif
#define BASIC_MulticastDelegateTrigger_generated_h

#define FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMulticastDelegateTrigger(); \
	friend struct Z_Construct_UClass_AMulticastDelegateTrigger_Statics; \
public: \
	DECLARE_CLASS(AMulticastDelegateTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AMulticastDelegateTrigger)


#define FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMulticastDelegateTrigger(AMulticastDelegateTrigger&&); \
	AMulticastDelegateTrigger(const AMulticastDelegateTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMulticastDelegateTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMulticastDelegateTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMulticastDelegateTrigger) \
	NO_API virtual ~AMulticastDelegateTrigger();


#define FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_7_PROLOG
#define FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AMulticastDelegateTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

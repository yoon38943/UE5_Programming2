// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/EventTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_EventTrigger_generated_h
#error "EventTrigger.generated.h already included, missing '#pragma once' in EventTrigger.h"
#endif
#define BASIC_EventTrigger_generated_h

#define FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEventTrigger(); \
	friend struct Z_Construct_UClass_AEventTrigger_Statics; \
public: \
	DECLARE_CLASS(AEventTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AEventTrigger)


#define FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEventTrigger(AEventTrigger&&); \
	AEventTrigger(const AEventTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEventTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEventTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEventTrigger) \
	NO_API virtual ~AEventTrigger();


#define FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_12_PROLOG
#define FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AEventTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

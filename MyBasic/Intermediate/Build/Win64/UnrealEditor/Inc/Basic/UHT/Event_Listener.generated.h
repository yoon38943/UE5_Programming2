// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/Event_Listener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_Event_Listener_generated_h
#error "Event_Listener.generated.h already included, missing '#pragma once' in Event_Listener.h"
#endif
#define BASIC_Event_Listener_generated_h

#define FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEvent2Triggered); \
	DECLARE_FUNCTION(execOnEvent1Triggered);


#define FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEvent_Listener(); \
	friend struct Z_Construct_UClass_AEvent_Listener_Statics; \
public: \
	DECLARE_CLASS(AEvent_Listener, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AEvent_Listener)


#define FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEvent_Listener(AEvent_Listener&&); \
	AEvent_Listener(const AEvent_Listener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEvent_Listener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEvent_Listener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEvent_Listener) \
	NO_API virtual ~AEvent_Listener();


#define FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_7_PROLOG
#define FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AEvent_Listener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

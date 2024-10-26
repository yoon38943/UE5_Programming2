// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/MulticastDelegateListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_MulticastDelegateListener_generated_h
#error "MulticastDelegateListener.generated.h already included, missing '#pragma once' in MulticastDelegateListener.h"
#endif
#define BASIC_MulticastDelegateListener_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleLight);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMulticastDelegateListener(); \
	friend struct Z_Construct_UClass_AMulticastDelegateListener_Statics; \
public: \
	DECLARE_CLASS(AMulticastDelegateListener, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AMulticastDelegateListener)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMulticastDelegateListener(AMulticastDelegateListener&&); \
	AMulticastDelegateListener(const AMulticastDelegateListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMulticastDelegateListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMulticastDelegateListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMulticastDelegateListener) \
	NO_API virtual ~AMulticastDelegateListener();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AMulticastDelegateListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

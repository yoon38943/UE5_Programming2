// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/DelegateListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_DelegateListener_generated_h
#error "DelegateListener.generated.h already included, missing '#pragma once' in DelegateListener.h"
#endif
#define BASIC_DelegateListener_generated_h

#define FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableLight);


#define FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelegateListener(); \
	friend struct Z_Construct_UClass_ADelegateListener_Statics; \
public: \
	DECLARE_CLASS(ADelegateListener, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ADelegateListener)


#define FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADelegateListener(ADelegateListener&&); \
	ADelegateListener(const ADelegateListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelegateListener) \
	NO_API virtual ~ADelegateListener();


#define FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_7_PROLOG
#define FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ADelegateListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

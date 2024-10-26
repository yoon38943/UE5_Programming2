// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventAndDelegate/DelegateParamListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef BASIC_DelegateParamListener_generated_h
#error "DelegateParamListener.generated.h already included, missing '#pragma once' in DelegateParamListener.h"
#endif
#define BASIC_DelegateParamListener_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLightColorAndRotate); \
	DECLARE_FUNCTION(execSetLightColor);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelegateParamListener(); \
	friend struct Z_Construct_UClass_ADelegateParamListener_Statics; \
public: \
	DECLARE_CLASS(ADelegateParamListener, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ADelegateParamListener)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADelegateParamListener(ADelegateParamListener&&); \
	ADelegateParamListener(const ADelegateParamListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateParamListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateParamListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelegateParamListener) \
	NO_API virtual ~ADelegateParamListener();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ADelegateParamListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

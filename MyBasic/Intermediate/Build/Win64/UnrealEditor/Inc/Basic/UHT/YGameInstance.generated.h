// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YGameInstance_generated_h
#error "YGameInstance.generated.h already included, missing '#pragma once' in YGameInstance.h"
#endif
#define BASIC_YGameInstance_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYGameInstance(); \
	friend struct Z_Construct_UClass_UYGameInstance_Statics; \
public: \
	DECLARE_CLASS(UYGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(UYGameInstance)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYGameInstance(UYGameInstance&&); \
	UYGameInstance(const UYGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYGameInstance) \
	NO_API virtual ~UYGameInstance();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_8_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class UYGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_YGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

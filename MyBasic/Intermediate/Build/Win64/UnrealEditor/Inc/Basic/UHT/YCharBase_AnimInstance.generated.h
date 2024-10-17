// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/YCharBase_AnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YCharBase_AnimInstance_generated_h
#error "YCharBase_AnimInstance.generated.h already included, missing '#pragma once' in YCharBase_AnimInstance.h"
#endif
#define BASIC_YCharBase_AnimInstance_generated_h

#define FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYCharBase_AnimInstance(); \
	friend struct Z_Construct_UClass_UYCharBase_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UYCharBase_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(UYCharBase_AnimInstance)


#define FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYCharBase_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYCharBase_AnimInstance(UYCharBase_AnimInstance&&); \
	UYCharBase_AnimInstance(const UYCharBase_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYCharBase_AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYCharBase_AnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYCharBase_AnimInstance) \
	NO_API virtual ~UYCharBase_AnimInstance();


#define FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_7_PROLOG
#define FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class UYCharBase_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

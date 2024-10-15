// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/YCharBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YCharBase_generated_h
#error "YCharBase.generated.h already included, missing '#pragma once' in YCharBase.h"
#endif
#define BASIC_YCharBase_generated_h

#define FID_MyBasic_Source_Basic_Character_YCharBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYCharBase(); \
	friend struct Z_Construct_UClass_AYCharBase_Statics; \
public: \
	DECLARE_CLASS(AYCharBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AYCharBase)


#define FID_MyBasic_Source_Basic_Character_YCharBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYCharBase(AYCharBase&&); \
	AYCharBase(const AYCharBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCharBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCharBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYCharBase) \
	NO_API virtual ~AYCharBase();


#define FID_MyBasic_Source_Basic_Character_YCharBase_h_12_PROLOG
#define FID_MyBasic_Source_Basic_Character_YCharBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Character_YCharBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Character_YCharBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AYCharBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Character_YCharBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

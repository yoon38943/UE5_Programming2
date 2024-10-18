// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/YCharShooter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YCharShooter_generated_h
#error "YCharShooter.generated.h already included, missing '#pragma once' in YCharShooter.h"
#endif
#define BASIC_YCharShooter_generated_h

#define FID_MyBasic_Source_Basic_Character_YCharShooter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYCharShooter(); \
	friend struct Z_Construct_UClass_AYCharShooter_Statics; \
public: \
	DECLARE_CLASS(AYCharShooter, AYCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AYCharShooter)


#define FID_MyBasic_Source_Basic_Character_YCharShooter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYCharShooter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYCharShooter(AYCharShooter&&); \
	AYCharShooter(const AYCharShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCharShooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCharShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYCharShooter) \
	NO_API virtual ~AYCharShooter();


#define FID_MyBasic_Source_Basic_Character_YCharShooter_h_9_PROLOG
#define FID_MyBasic_Source_Basic_Character_YCharShooter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Character_YCharShooter_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Character_YCharShooter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AYCharShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Character_YCharShooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

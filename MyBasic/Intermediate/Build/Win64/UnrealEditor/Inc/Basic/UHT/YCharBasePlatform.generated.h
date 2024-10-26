// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/YCharBasePlatform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YCharBasePlatform_generated_h
#error "YCharBasePlatform.generated.h already included, missing '#pragma once' in YCharBasePlatform.h"
#endif
#define BASIC_YCharBasePlatform_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGameEvent);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYCharBasePlatform(); \
	friend struct Z_Construct_UClass_AYCharBasePlatform_Statics; \
public: \
	DECLARE_CLASS(AYCharBasePlatform, AYCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AYCharBasePlatform)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYCharBasePlatform(AYCharBasePlatform&&); \
	AYCharBasePlatform(const AYCharBasePlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCharBasePlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCharBasePlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYCharBasePlatform) \
	NO_API virtual ~AYCharBasePlatform();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AYCharBasePlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

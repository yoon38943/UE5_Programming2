// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/Trophy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BASIC_Trophy_generated_h
#error "Trophy.generated.h already included, missing '#pragma once' in Trophy.h"
#endif
#define BASIC_Trophy_generated_h

#define FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapTrophyMesh);


#define FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrophy(); \
	friend struct Z_Construct_UClass_ATrophy_Statics; \
public: \
	DECLARE_CLASS(ATrophy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ATrophy)


#define FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATrophy(ATrophy&&); \
	ATrophy(const ATrophy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrophy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrophy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrophy) \
	NO_API virtual ~ATrophy();


#define FID_MyBasic_Source_Basic_Gimmick_Trophy_h_7_PROLOG
#define FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Gimmick_Trophy_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ATrophy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Gimmick_Trophy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

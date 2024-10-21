// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooting/ShooterAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_ShooterAIController_generated_h
#error "ShooterAIController.generated.h already included, missing '#pragma once' in ShooterAIController.h"
#endif
#define BASIC_ShooterAIController_generated_h

#define FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAIController(); \
	friend struct Z_Construct_UClass_AShooterAIController_Statics; \
public: \
	DECLARE_CLASS(AShooterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AShooterAIController)


#define FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterAIController(AShooterAIController&&); \
	AShooterAIController(const AShooterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAIController) \
	NO_API virtual ~AShooterAIController();


#define FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_7_PROLOG
#define FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AShooterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Shooting_ShooterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
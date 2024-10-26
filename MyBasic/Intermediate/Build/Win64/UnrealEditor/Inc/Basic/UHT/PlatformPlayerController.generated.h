// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PlatformPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_PlatformPlayerController_generated_h
#error "PlatformPlayerController.generated.h already included, missing '#pragma once' in PlatformPlayerController.h"
#endif
#define BASIC_PlatformPlayerController_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformPlayerController(); \
	friend struct Z_Construct_UClass_APlatformPlayerController_Statics; \
public: \
	DECLARE_CLASS(APlatformPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(APlatformPlayerController)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlatformPlayerController(APlatformPlayerController&&); \
	APlatformPlayerController(const APlatformPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformPlayerController) \
	NO_API virtual ~APlatformPlayerController();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_8_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_11_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class APlatformPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_Character_PlatformPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

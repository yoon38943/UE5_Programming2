// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/YCharAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YCharAction_generated_h
#error "YCharAction.generated.h already included, missing '#pragma once' in YCharAction.h"
#endif
#define BASIC_YCharAction_generated_h

#define FID_MyBasic_Source_Basic_Action_YCharAction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYCharAction(); \
	friend struct Z_Construct_UClass_AYCharAction_Statics; \
public: \
	DECLARE_CLASS(AYCharAction, AYCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(AYCharAction)


#define FID_MyBasic_Source_Basic_Action_YCharAction_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYCharAction(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYCharAction(AYCharAction&&); \
	AYCharAction(const AYCharAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYCharAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYCharAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYCharAction) \
	NO_API virtual ~AYCharAction();


#define FID_MyBasic_Source_Basic_Action_YCharAction_h_7_PROLOG
#define FID_MyBasic_Source_Basic_Action_YCharAction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Action_YCharAction_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Action_YCharAction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class AYCharAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Action_YCharAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

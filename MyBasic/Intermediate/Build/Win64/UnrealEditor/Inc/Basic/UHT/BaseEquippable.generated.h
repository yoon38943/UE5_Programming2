// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/BaseEquippable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef BASIC_BaseEquippable_generated_h
#error "BaseEquippable.generated.h already included, missing '#pragma once' in BaseEquippable.h"
#endif
#define BASIC_BaseEquippable_generated_h

#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEquipped_Implementation(); \
	DECLARE_FUNCTION(execOnUnEquipped); \
	DECLARE_FUNCTION(execOnEquipped); \
	DECLARE_FUNCTION(execAttachActor); \
	DECLARE_FUNCTION(execGetItemMesh);


#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_CALLBACK_WRAPPERS
#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEquippable(); \
	friend struct Z_Construct_UClass_ABaseEquippable_Statics; \
public: \
	DECLARE_CLASS(ABaseEquippable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ABaseEquippable)


#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseEquippable(ABaseEquippable&&); \
	ABaseEquippable(const ABaseEquippable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEquippable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEquippable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEquippable) \
	NO_API virtual ~ABaseEquippable();


#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_7_PROLOG
#define FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_CALLBACK_WRAPPERS \
	FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyBasic_Source_Basic_Action_BaseEquippable_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ABaseEquippable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyBasic_Source_Basic_Action_BaseEquippable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

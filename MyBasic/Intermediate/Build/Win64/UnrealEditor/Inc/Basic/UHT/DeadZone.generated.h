// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/DeadZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASIC_DeadZone_generated_h
#error "DeadZone.generated.h already included, missing '#pragma once' in DeadZone.h"
#endif
#define BASIC_DeadZone_generated_h

#define FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeadZone(); \
	friend struct Z_Construct_UClass_ADeadZone_Statics; \
public: \
	DECLARE_CLASS(ADeadZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basic"), NO_API) \
	DECLARE_SERIALIZER(ADeadZone)


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeadZone(ADeadZone&&); \
	ADeadZone(const ADeadZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeadZone) \
	NO_API virtual ~ADeadZone();


#define FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_7_PROLOG
#define FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_INCLASS_NO_PURE_DECLS \
	FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASIC_API UClass* StaticClass<class ADeadZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_Gimmick_DeadZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

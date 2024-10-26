// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Action/YEnumFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYEnumFile() {}

// Begin Cross Module References
BASIC_API UEnum* Z_Construct_UEnum_Basic_E_CharacterAction();
BASIC_API UEnum* Z_Construct_UEnum_Basic_E_CharacterState();
BASIC_API UEnum* Z_Construct_UEnum_Basic_E_CombatType();
BASIC_API UEnum* Z_Construct_UEnum_Basic_E_MovementSpeed();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Enum E_CharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_CharacterState;
static UEnum* E_CharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_CharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_CharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Basic_E_CharacterState, (UObject*)Z_Construct_UPackage__Script_Basic(), TEXT("E_CharacterState"));
	}
	return Z_Registration_Info_UEnum_E_CharacterState.OuterSingleton;
}
template<> BASIC_API UEnum* StaticEnum<E_CharacterState>()
{
	return E_CharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Basic_E_CharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "E_CharacterState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "E_CharacterState::Dead" },
		{ "Disable.DisplayName", "Disable" },
		{ "Disable.Name", "E_CharacterState::Disable" },
		{ "GeneralActionState.DisplayName", "GeneralActionState" },
		{ "GeneralActionState.Name", "E_CharacterState::GeneralActionState" },
		{ "ModuleRelativePath", "Action/YEnumFile.h" },
		{ "Nothing.DisplayName", "Nothing" },
		{ "Nothing.Name", "E_CharacterState::Nothing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_CharacterState::Nothing", (int64)E_CharacterState::Nothing },
		{ "E_CharacterState::Attacking", (int64)E_CharacterState::Attacking },
		{ "E_CharacterState::GeneralActionState", (int64)E_CharacterState::GeneralActionState },
		{ "E_CharacterState::Dead", (int64)E_CharacterState::Dead },
		{ "E_CharacterState::Disable", (int64)E_CharacterState::Disable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Basic_E_CharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Basic,
	nullptr,
	"E_CharacterState",
	"E_CharacterState",
	Z_Construct_UEnum_Basic_E_CharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Basic_E_CharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Basic_E_CharacterState()
{
	if (!Z_Registration_Info_UEnum_E_CharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_CharacterState.InnerSingleton, Z_Construct_UEnum_Basic_E_CharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_CharacterState.InnerSingleton;
}
// End Enum E_CharacterState

// Begin Enum E_CharacterAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_CharacterAction;
static UEnum* E_CharacterAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_CharacterAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_CharacterAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Basic_E_CharacterAction, (UObject*)Z_Construct_UPackage__Script_Basic(), TEXT("E_CharacterAction"));
	}
	return Z_Registration_Info_UEnum_E_CharacterAction.OuterSingleton;
}
template<> BASIC_API UEnum* StaticEnum<E_CharacterAction>()
{
	return E_CharacterAction_StaticEnum();
}
struct Z_Construct_UEnum_Basic_E_CharacterAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChargedAttack.DisplayName", "ChargedAttack" },
		{ "ChargedAttack.Name", "E_CharacterAction::ChargedAttack" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "E_CharacterAction::Disabled" },
		{ "Dodge.DisplayName", "Dodge" },
		{ "Dodge.Name", "E_CharacterAction::Dodge" },
		{ "EnterCombat.DisplayName", "EnterCombat" },
		{ "EnterCombat.Name", "E_CharacterAction::EnterCombat" },
		{ "ExitCombat.DisplayName", "ExitCombat" },
		{ "ExitCombat.Name", "E_CharacterAction::ExitCombat" },
		{ "FallingAttack.DisplayName", "FallingAttack" },
		{ "FallingAttack.Name", "E_CharacterAction::FallingAttack" },
		{ "GeneralAction.DisplayName", "GeneralAction" },
		{ "GeneralAction.Name", "E_CharacterAction::GeneralAction" },
		{ "LightAttack.DisplayName", "LightAttack" },
		{ "LightAttack.Name", "E_CharacterAction::LightAttack" },
		{ "ModuleRelativePath", "Action/YEnumFile.h" },
		{ "Nothing.DisplayName", "Nothing" },
		{ "Nothing.Name", "E_CharacterAction::Nothing" },
		{ "StrongAttack.DisplayName", "StrongAttack" },
		{ "StrongAttack.Name", "E_CharacterAction::StrongAttack" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_CharacterAction::Nothing", (int64)E_CharacterAction::Nothing },
		{ "E_CharacterAction::GeneralAction", (int64)E_CharacterAction::GeneralAction },
		{ "E_CharacterAction::LightAttack", (int64)E_CharacterAction::LightAttack },
		{ "E_CharacterAction::StrongAttack", (int64)E_CharacterAction::StrongAttack },
		{ "E_CharacterAction::ChargedAttack", (int64)E_CharacterAction::ChargedAttack },
		{ "E_CharacterAction::FallingAttack", (int64)E_CharacterAction::FallingAttack },
		{ "E_CharacterAction::Dodge", (int64)E_CharacterAction::Dodge },
		{ "E_CharacterAction::EnterCombat", (int64)E_CharacterAction::EnterCombat },
		{ "E_CharacterAction::ExitCombat", (int64)E_CharacterAction::ExitCombat },
		{ "E_CharacterAction::Disabled", (int64)E_CharacterAction::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Basic_E_CharacterAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Basic,
	nullptr,
	"E_CharacterAction",
	"E_CharacterAction",
	Z_Construct_UEnum_Basic_E_CharacterAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CharacterAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CharacterAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Basic_E_CharacterAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Basic_E_CharacterAction()
{
	if (!Z_Registration_Info_UEnum_E_CharacterAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_CharacterAction.InnerSingleton, Z_Construct_UEnum_Basic_E_CharacterAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_CharacterAction.InnerSingleton;
}
// End Enum E_CharacterAction

// Begin Enum E_CombatType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_CombatType;
static UEnum* E_CombatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_CombatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_CombatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Basic_E_CombatType, (UObject*)Z_Construct_UPackage__Script_Basic(), TEXT("E_CombatType"));
	}
	return Z_Registration_Info_UEnum_E_CombatType.OuterSingleton;
}
template<> BASIC_API UEnum* StaticEnum<E_CombatType>()
{
	return E_CombatType_StaticEnum();
}
struct Z_Construct_UEnum_Basic_E_CombatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GreatSword.DisplayName", "GreatSword" },
		{ "GreatSword.Name", "E_CombatType::GreatSword" },
		{ "LightSword.DisplayName", "LightSword" },
		{ "LightSword.Name", "E_CombatType::LightSword" },
		{ "ModuleRelativePath", "Action/YEnumFile.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "E_CombatType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_CombatType::None", (int64)E_CombatType::None },
		{ "E_CombatType::LightSword", (int64)E_CombatType::LightSword },
		{ "E_CombatType::GreatSword", (int64)E_CombatType::GreatSword },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Basic_E_CombatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Basic,
	nullptr,
	"E_CombatType",
	"E_CombatType",
	Z_Construct_UEnum_Basic_E_CombatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CombatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_CombatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Basic_E_CombatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Basic_E_CombatType()
{
	if (!Z_Registration_Info_UEnum_E_CombatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_CombatType.InnerSingleton, Z_Construct_UEnum_Basic_E_CombatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_CombatType.InnerSingleton;
}
// End Enum E_CombatType

// Begin Enum E_MovementSpeed
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_MovementSpeed;
static UEnum* E_MovementSpeed_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_MovementSpeed.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_MovementSpeed.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Basic_E_MovementSpeed, (UObject*)Z_Construct_UPackage__Script_Basic(), TEXT("E_MovementSpeed"));
	}
	return Z_Registration_Info_UEnum_E_MovementSpeed.OuterSingleton;
}
template<> BASIC_API UEnum* StaticEnum<E_MovementSpeed>()
{
	return E_MovementSpeed_StaticEnum();
}
struct Z_Construct_UEnum_Basic_E_MovementSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Jogging.DisplayName", "Jogging" },
		{ "Jogging.Name", "E_MovementSpeed::Jogging" },
		{ "ModuleRelativePath", "Action/YEnumFile.h" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "E_MovementSpeed::Sprinting" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "E_MovementSpeed::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_MovementSpeed::Walking", (int64)E_MovementSpeed::Walking },
		{ "E_MovementSpeed::Jogging", (int64)E_MovementSpeed::Jogging },
		{ "E_MovementSpeed::Sprinting", (int64)E_MovementSpeed::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Basic,
	nullptr,
	"E_MovementSpeed",
	"E_MovementSpeed",
	Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Basic_E_MovementSpeed()
{
	if (!Z_Registration_Info_UEnum_E_MovementSpeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_MovementSpeed.InnerSingleton, Z_Construct_UEnum_Basic_E_MovementSpeed_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_MovementSpeed.InnerSingleton;
}
// End Enum E_MovementSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YEnumFile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_CharacterState_StaticEnum, TEXT("E_CharacterState"), &Z_Registration_Info_UEnum_E_CharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4094651595U) },
		{ E_CharacterAction_StaticEnum, TEXT("E_CharacterAction"), &Z_Registration_Info_UEnum_E_CharacterAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3580276162U) },
		{ E_CombatType_StaticEnum, TEXT("E_CombatType"), &Z_Registration_Info_UEnum_E_CombatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3239799160U) },
		{ E_MovementSpeed_StaticEnum, TEXT("E_MovementSpeed"), &Z_Registration_Info_UEnum_E_MovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2012172245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YEnumFile_h_123894596(TEXT("/Script/Basic"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YEnumFile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YEnumFile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

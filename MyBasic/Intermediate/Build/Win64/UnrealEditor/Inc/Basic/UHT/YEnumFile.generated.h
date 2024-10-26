// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/YEnumFile.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASIC_YEnumFile_generated_h
#error "YEnumFile.generated.h already included, missing '#pragma once' in YEnumFile.h"
#endif
#define BASIC_YEnumFile_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YEnumFile_h


#define FOREACH_ENUM_E_CHARACTERSTATE(op) \
	op(E_CharacterState::Nothing) \
	op(E_CharacterState::Attacking) \
	op(E_CharacterState::GeneralActionState) \
	op(E_CharacterState::Dead) \
	op(E_CharacterState::Disable) 

enum class E_CharacterState : uint8;
template<> struct TIsUEnumClass<E_CharacterState> { enum { Value = true }; };
template<> BASIC_API UEnum* StaticEnum<E_CharacterState>();

#define FOREACH_ENUM_E_CHARACTERACTION(op) \
	op(E_CharacterAction::Nothing) \
	op(E_CharacterAction::GeneralAction) \
	op(E_CharacterAction::LightAttack) \
	op(E_CharacterAction::StrongAttack) \
	op(E_CharacterAction::ChargedAttack) \
	op(E_CharacterAction::FallingAttack) \
	op(E_CharacterAction::Dodge) \
	op(E_CharacterAction::EnterCombat) \
	op(E_CharacterAction::ExitCombat) \
	op(E_CharacterAction::Disabled) 

enum class E_CharacterAction : uint8;
template<> struct TIsUEnumClass<E_CharacterAction> { enum { Value = true }; };
template<> BASIC_API UEnum* StaticEnum<E_CharacterAction>();

#define FOREACH_ENUM_E_COMBATTYPE(op) \
	op(E_CombatType::None) \
	op(E_CombatType::LightSword) \
	op(E_CombatType::GreatSword) 

enum class E_CombatType : uint8;
template<> struct TIsUEnumClass<E_CombatType> { enum { Value = true }; };
template<> BASIC_API UEnum* StaticEnum<E_CombatType>();

#define FOREACH_ENUM_E_MOVEMENTSPEED(op) \
	op(E_MovementSpeed::Walking) \
	op(E_MovementSpeed::Jogging) \
	op(E_MovementSpeed::Sprinting) 

enum class E_MovementSpeed : uint8;
template<> struct TIsUEnumClass<E_MovementSpeed> { enum { Value = true }; };
template<> BASIC_API UEnum* StaticEnum<E_MovementSpeed>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

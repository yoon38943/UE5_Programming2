#pragma once

UENUM(BlueprintType)
enum class E_CharacterState : uint8
{
	Nothing						UMETA(DisplayName = "Nothing"),
	Attacking						UMETA(DisplayName = "Attacking"),
	GeneralActionState		UMETA(DisplayName = "GeneralActionState"),
	Dead							UMETA(DisplayName = "Dead"),
	Disable							UMETA(DisplayName = "Disable"),
};

UENUM(BlueprintType)
enum class E_CharacterAction : uint8
{
	Nothing				UMETA(DisplayName = "Nothing"),
	GeneralAction		UMETA(DisplayName = "GeneralAction"),
	LightAttack			UMETA(DisplayName = "LightAttack"),
	StrongAttack		UMETA(DisplayName = "StrongAttack"),
	ChargedAttack		UMETA(DisplayName = "ChargedAttack"),
	FallingAttack		UMETA(DisplayName = "FallingAttack"),
	Dodge					UMETA(DisplayName = "Dodge"),
	EnterCombat		UMETA(DisplayName = "EnterCombat"),
	ExitCombat			UMETA(DisplayName = "ExitCombat"),
	Disabled				UMETA(DisplayName = "Disabled"),
};

UENUM(BlueprintType)
enum class E_CombatType : uint8
{
	None				UMETA(DisplayName = "None"),
	LightSword		UMETA(DisplayName = "LightSword"),
	GreatSword		UMETA(DisplayName = "GreatSword"),
};

UENUM(BlueprintType)
enum class E_MovementSpeed : uint8
{
	Walking		UMETA(DisplayName = "Walking"),
	Jogging		UMETA(DisplayName = "Jogging"),
	Sprinting		UMETA(DisplayName = "Sprinting"),
};
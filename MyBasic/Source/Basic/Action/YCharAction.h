#pragma once

#include "CoreMinimal.h"
#include "Character/YCharBase.h"
#include "YCharAction.generated.h"

UCLASS()
class BASIC_API AYCharAction : public AYCharBase
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "YCharBase_AnimInstance.generated.h"

UCLASS()
class BASIC_API UYCharBase_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class AYCharBase* YCharBase; // ���漱��
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class UCharacterMovementComponent* YCharMovementComponent;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	FVector YCharVelocity;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float YCharSpeed;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool YShouldMove;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool YCharIsFalling;

protected:
	// Event Blueprint Initialize Animation �̺�Ʈ
	virtual void NativeInitializeAnimation() override;
	// Event Blueprint Update Animation �̺�Ʈ
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};

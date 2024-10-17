#include "YCharBase_AnimInstance.h"
#include "YCharBase.h"
#include "../HDebugMacros.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

// �ִ��ν��Ͻ��� �ʱ�ȭ �� �� ���۷����� ����
void UYCharBase_AnimInstance::NativeInitializeAnimation()
{
	// ĳ���� ���۷��� ����
	YCharBase = Cast<AYCharBase>(TryGetPawnOwner());
	if (YCharBase != nullptr)
	{
		// ĳ���� �����Ʈ ������Ʈ ���۷��� ���� 
		YCharMovementComponent = YCharBase->GetCharacterMovement();
	}
	HCHECK(YCharBase);
	HCHECK(YCharMovementComponent);
}

// �ִϸ��̼� ������Ʈ ����
void UYCharBase_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (YCharMovementComponent)
	{
		YCharVelocity = YCharMovementComponent->Velocity;
		YCharSpeed = UKismetMathLibrary::VSizeXY(YCharVelocity);

		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("Speed: %f"), YCharSpeed));
		
		YShouldMove = false;
		bool Acceleration = !YCharMovementComponent->GetCurrentAcceleration().Equals(FVector::ZeroVector, 0);
		if (YCharSpeed > 3.f && Acceleration)
		{
			YShouldMove = true;
		}

		YCharIsFalling = YCharMovementComponent->IsFalling();
	}
}

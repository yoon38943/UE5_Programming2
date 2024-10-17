#include "YCharBase_AnimInstance.h"
#include "YCharBase.h"
#include "../HDebugMacros.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

// 애님인스턴스가 초기화 될 때 레퍼런스를 저장
void UYCharBase_AnimInstance::NativeInitializeAnimation()
{
	// 캐릭터 레퍼런스 저장
	YCharBase = Cast<AYCharBase>(TryGetPawnOwner());
	if (YCharBase != nullptr)
	{
		// 캐릭터 무브먼트 컴포넌트 레퍼런스 저장 
		YCharMovementComponent = YCharBase->GetCharacterMovement();
	}
	HCHECK(YCharBase);
	HCHECK(YCharMovementComponent);
}

// 애니메이션 업데이트 루프
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

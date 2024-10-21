#include "YCharShooterAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "YCharShooter.h"

void UYCharShooterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (YCharBase != nullptr)
	{
		// 앵글 구하기
		FVector ITVector =	UKismetMathLibrary::InverseTransformDirection(YCharBase->GetActorTransform(), YCharBase->GetVelocity());
		FRotator  Rot = UKismetMathLibrary::Conv_VectorToRotator(ITVector);
		Angle = Rot.Yaw;

		// 에임 피치
		Rot = UKismetMathLibrary::NormalizedDeltaRotator(YCharBase->GetControlRotation(), YCharBase->GetActorRotation());
		AimPitch = Rot.Pitch;

		// 죽었는지 살았는지는 캐릭터에서 Health값 추가 + 계산후 적용
		AYCharShooter* YCharShooter = Cast<AYCharShooter>(YCharBase);
		if (YCharShooter != nullptr)
		{
		IsDead = YCharShooter->IsDead();
		}
	}
}

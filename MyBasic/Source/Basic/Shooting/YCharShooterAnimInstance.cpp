#include "YCharShooterAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "YCharShooter.h"

void UYCharShooterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (YCharBase != nullptr)
	{
		// �ޱ� ���ϱ�
		FVector ITVector =	UKismetMathLibrary::InverseTransformDirection(YCharBase->GetActorTransform(), YCharBase->GetVelocity());
		FRotator  Rot = UKismetMathLibrary::Conv_VectorToRotator(ITVector);
		Angle = Rot.Yaw;

		// ���� ��ġ
		Rot = UKismetMathLibrary::NormalizedDeltaRotator(YCharBase->GetControlRotation(), YCharBase->GetActorRotation());
		AimPitch = Rot.Pitch;

		// �׾����� ��Ҵ����� ĳ���Ϳ��� Health�� �߰� + ����� ����
		AYCharShooter* YCharShooter = Cast<AYCharShooter>(YCharBase);
		if (YCharShooter != nullptr)
		{
		IsDead = YCharShooter->IsDead();
		}
	}
}

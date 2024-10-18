#include "YCharShooter.h"
#include "../ETC/Gun.h"
#include "EnhancedInputComponent.h"

void AYCharShooter::BeginPlay()
{
	Super::BeginPlay();

	// ���� ���� ��Ű��
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	// ���̷����� ���Ͽ� �����Ѵ�.
	if (Gun != nullptr)
	{
		Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
		Gun->SetOwner(this);
	}
}

void AYCharShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �� Ʈ���� �׼� ����
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(IA_Shoot, ETriggerEvent::Started, this, &ThisClass::Shoot);
	}
}

void AYCharShooter::Shoot()
{
	if (Gun != nullptr)
	{
		// �ѿ��� Ʈ���� ó��
		Gun->PullTrigger();
	}
}

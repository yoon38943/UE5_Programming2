#include "YCharShooter.h"
#include "../ETC/Gun.h"
#include "EnhancedInputComponent.h"

void AYCharShooter::BeginPlay()
{
	Super::BeginPlay();

	// 총을 스폰 시키고
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	// 스켈레톤의 소켓에 부착한다.
	if (Gun != nullptr)
	{
		Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
		Gun->SetOwner(this);
	}
}

void AYCharShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 건 트리거 액션 세팅
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(IA_Shoot, ETriggerEvent::Started, this, &ThisClass::Shoot);
	}
}

void AYCharShooter::Shoot()
{
	if (Gun != nullptr)
	{
		// 총에서 트리거 처리
		Gun->PullTrigger();
	}
}

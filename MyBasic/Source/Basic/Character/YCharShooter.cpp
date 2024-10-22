#include "YCharShooter.h"
#include "../ETC/Gun.h"
#include "EnhancedInputComponent.h"
#include "../HDebugMacros.h"
#include "Components/CapsuleComponent.h"
#include "../Shooting/ShooterGameModeBase.h"

#include "../ETC/Gun.h"

void AYCharShooter::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;

	// ���� ���� ��Ű��
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	// �Ķ�� ĳ������ ���� ���̵�
	GetMesh()->HideBoneByName(TEXT("Weapon_r"), EPhysBodyOp::PBO_None);
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

float AYCharShooter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCause)
{
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCause);
	DamageToApply = FMath::Min(Health, DamageToApply);
	Health -= DamageToApply;	// Health�� 0 ������ �������� �ʴ´�.
	HLOG(Warning, TEXT("Health : %f/%f"), Health, MaxHealth);

	if (IsDead())
	{
		// ���� ó��
		// ���� �׾�����, �ƴϸ� ���� ��� �����ߴ���
		AShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AShooterGameModeBase>();
		if (GameMode != nullptr)
		{
			GameMode->PawnKilled(this);
		}

		// ĳ���Ϳ� ��Ʈ�ѷ��� �и�( UnPossess ) => �� AI ���� ����
		DetachFromControllerPendingDestroy();
		// ĸ�� �ݸ��� ��ȿȭ
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	}
	return 0.0f;
}

void AYCharShooter::Shoot()
{
	if (Gun != nullptr)
	{
		// �ѿ��� Ʈ���� ó��
		Gun->PullTrigger();
	}
}

bool AYCharShooter::IsDead() const
{
	return Health <= 0;
}

float AYCharShooter::GetHealthPercent() const
{
	if (MaxHealth > 0)
	{
		return Health / MaxHealth;
	}

	return 0.0f;
}

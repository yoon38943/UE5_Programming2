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

	// 총을 스폰 시키고
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	// 파라곤 캐릭터의 무기 하이드
	GetMesh()->HideBoneByName(TEXT("Weapon_r"), EPhysBodyOp::PBO_None);
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

float AYCharShooter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCause)
{
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCause);
	DamageToApply = FMath::Min(Health, DamageToApply);
	Health -= DamageToApply;	// Health는 0 밑으로 떨어지지 않는다.
	HLOG(Warning, TEXT("Health : %f/%f"), Health, MaxHealth);

	if (IsDead())
	{
		// 종료 처리
		// 내가 죽었는지, 아니면 적을 모두 섬멸했는지
		AShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AShooterGameModeBase>();
		if (GameMode != nullptr)
		{
			GameMode->PawnKilled(this);
		}

		// 캐릭터와 컨트롤러를 분리( UnPossess ) => 즉 AI 동작 못함
		DetachFromControllerPendingDestroy();
		// 캡슐 콜리전 무효화
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	}
	return 0.0f;
}

void AYCharShooter::Shoot()
{
	if (Gun != nullptr)
	{
		// 총에서 트리거 처리
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

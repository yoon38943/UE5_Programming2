#include "Gun.h"
#include "Kismet/GameplayStatics.h"
#include "../HDebugMacros.h"
#include "Engine/DamageEvents.h"
#include "../Shooting/ShooterPlayerController.h"

AGun::AGun()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::PullTrigger()
{
	// �ѱ� ����Ʈ& ���� ���
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlash"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlash"));

	// �����Ȱ� ź�� ����ó�� / ź���� ��� �����Ǹ� �ٸ� �Լ��� ���ε� ���� ó���� �ʿ�
	// �Ѿ��� �����ߵȴ�.( ���� ���� ) => ����Ʈ���̽��� ����Ѵ�.
	FHitResult Hit;
	FVector ShotDirection;
	bool bSuccess = GunTrace2(Hit, ShotDirection);
	//bool bSuccess = GunTrace2(Hit, ShotDirection);
	if (bSuccess)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

		AActor* HitActor = Hit.GetActor();
		if (HitActor != nullptr)	// ��򰡿� �¾Ұ� �װ� ���͸� 
		{
			// ������ ������� ( ��� �¾ҳ�<�Ӹ�, ��> ) ����
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			AController* OwnerController = GetOwnerController();
			HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
		}
	}
}

bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if (OwnerController == nullptr)
	{
		return false;
	}

	// ����Ʈ�� �����̼ǰ� �����̼�
	FVector Start;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Start, Rotation);	// ����Ʈ�� �����̼�

	ShotDirection = -Rotation.Vector();

	// Shooting�� �Ѱ� �÷��̾�� AI��
	if (AShooterPlayerController* PlayerController = Cast<AShooterPlayerController>(GetOwnerController()))
	{
		// ĳ������ �����ϸ� �÷��̾��°�
		if (Mesh != nullptr)
		{
			Start = Mesh->GetSocketLocation(TEXT("MuzzleFlash"));
		}
	}

	FVector End = Start + Rotation.Vector() * MaxRange;

	/*DrawDebugCamera(GetWorld(), Start, Rotation, 90, 2, FColor::Red, true);
	HDRAW_VECTOR(Start, End);*/

	// ������ ������ ���� ���� ��Ų��.
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	return GetWorld()->LineTraceSingleByProfile(Hit, Start, End, "Bullet", Params);
	//return GetWorld()->LineTraceSingleByChannel((Hit, Start, End, ECollisionChannel::ECC_EngineTraceChannel3, Params);
}

bool AGun::GunTrace2(FHitResult& Hit, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if (OwnerController == nullptr)
	{
		return false;
	}

	// ����Ʈ�� �����̼ǰ� �����̼�
	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);
	ShotDirection = -Rotation.Vector();
	FVector End = Location + Rotation.Vector() * MaxRange;

	// ���� �÷��̾� ��Ʈ�ѷ��� ���� AI��Ʈ�ѷ��� �� �б�
	if (Mesh != nullptr)
	{
		Location = Mesh->GetSocketLocation(TEXT("MuzzleFlash"));
	}


	//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);
	//HDRAW_VECTOR(Location, End);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	return GetWorld()->LineTraceSingleByProfile(Hit, Location, End, "Bullet", Params);
}

AController* AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
	{
		return nullptr;
	}
	return OwnerPawn->GetController();
}


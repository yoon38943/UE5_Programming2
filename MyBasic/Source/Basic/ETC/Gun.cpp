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
	// 총구 이펙트& 사운드 출력
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlash"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlash"));

	// 생략된게 탄알 갯수처리 / 탄알이 모두 소진되면 다른 함수로 리로딩 관련 처리가 필요
	// 총알을 날려야된다.( 벡터 연산 ) => 라인트레이스를 써야한다.
	FHitResult Hit;
	FVector ShotDirection;
	bool bSuccess = GunTrace2(Hit, ShotDirection);
	//bool bSuccess = GunTrace2(Hit, ShotDirection);
	if (bSuccess)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

		AActor* HitActor = Hit.GetActor();
		if (HitActor != nullptr)	// 어딘가에 맞았고 그게 액터면 
		{
			// 데미지 산출공식 ( 어디 맞았냐<머리, 팔> ) 생략
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

	// 뷰포트의 로케이션과 로테이션
	FVector Start;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Start, Rotation);	// 뷰포트의 로케이션

	ShotDirection = -Rotation.Vector();

	// Shooting을 한게 플레이어냐 AI냐
	if (AShooterPlayerController* PlayerController = Cast<AShooterPlayerController>(GetOwnerController()))
	{
		// 캐스팅이 성공하면 플레이어라는것
		if (Mesh != nullptr)
		{
			Start = Mesh->GetSocketLocation(TEXT("MuzzleFlash"));
		}
	}

	FVector End = Start + Rotation.Vector() * MaxRange;

	/*DrawDebugCamera(GetWorld(), Start, Rotation, 90, 2, FColor::Red, true);
	HDRAW_VECTOR(Start, End);*/

	// 쿼리를 날릴때 나는 제외 시킨다.
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

	// 뷰포트의 로케이션과 로테이션
	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);
	ShotDirection = -Rotation.Vector();
	FVector End = Location + Rotation.Vector() * MaxRange;

	// 유저 플레이어 컨트롤러일 때와 AI컨트롤러일 때 분기
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


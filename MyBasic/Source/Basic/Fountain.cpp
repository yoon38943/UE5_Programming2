#include "Fountain.h"		// 클래스 헤더 ( 보통 맨 처음 선언 )
#include "HDebugMacros.h"

// 클래스 헤더내 전방선언 한것 중 CoreMinimal.h or EngineMinimal.h에 포함 안된것들
#include "Components/PointLightComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

AFountain::AFountain()
{
	PrimaryActorTick.bCanEverTick = true;

	//가상 경로

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	SetRootComponent(Body);

	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Water->SetupAttachment(Body);
	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));

	// /script/engine.blueprint'/game/ex10_cpp/bp_fountain.bp_fountain'
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> sm_body(TEXT("/script/engine.blueprint'/game/ex10_cpp/bp_fountain.bp_fountain'"));
	if (sm_body.Succeeded())
	{
		Body->SetStaticMesh(sm_body.Object);
	}*/

	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("movement"));

	Movement->RotationRate = FRotator(0.0f, 30.0f, 0.0f);
}

void AFountain::BeginPlay()
{
	Super::BeginPlay();	// 부모클래스의 함수 명시적 호출 ( 필요에 따라 호출하거나 생략한다 )

	UE_LOG(LogTemp, Warning, TEXT("AFountain::BeginPlay called!"));
	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("AFountain::BeginPlay OnScreeen Message!"));

	HLOG_S(Warning);
	HLOG_S(Error);
	HCHECK(1 == 0);
}

void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


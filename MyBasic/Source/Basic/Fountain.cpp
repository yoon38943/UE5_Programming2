#include "Fountain.h"		// Ŭ���� ��� ( ���� �� ó�� ���� )
#include "HDebugMacros.h"

// Ŭ���� ����� ���漱�� �Ѱ� �� CoreMinimal.h or EngineMinimal.h�� ���� �ȵȰ͵�
#include "Components/PointLightComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

AFountain::AFountain()
{
	PrimaryActorTick.bCanEverTick = true;

	//���� ���

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
	Super::BeginPlay();	// �θ�Ŭ������ �Լ� ����� ȣ�� ( �ʿ信 ���� ȣ���ϰų� �����Ѵ� )

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


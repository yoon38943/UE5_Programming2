#include "Fountain.h"
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

	// /Script/Engine.Blueprint'/Game/EX10_CPP/BP_Fountain.BP_Fountain'
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BODY(TEXT("/Script/Engine.Blueprint'/Game/EX10_CPP/BP_Fountain.BP_Fountain"));
	if (SM_BODY.Succeeded())
	{
		Body->SetStaticMesh(SM_BODY.Object);
	}

	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT"));

	Movement->RotationRate = FRotator(0.0f, 30.0f, 0.0f);
}

void AFountain::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


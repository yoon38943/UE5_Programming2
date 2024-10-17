#include "Trophy.h"
#include "Components/SceneComponent.h"
#include "GameFramework/RotatingMovementComponent.h"


ATrophy::ATrophy()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("STATIC_MESH"));
	StaticMesh->SetupAttachment(GetRootComponent());

	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
	RotatingMovement->RotationRate = FRotator(0.0f, 30.f, 0.0f);
}

void ATrophy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATrophy::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (StaticMesh)
	{
		StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnOverlapTrophyMesh);
	}
}


void ATrophy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Amplitude = 6.f;
	float TimeConstant = 5.f;
	static float RunningTime = 0.0f;

	RunningTime += DeltaTime;
	float DeltaVal = Amplitude * FMath::Sin(RunningTime * TimeConstant);
	AddActorWorldOffset(FVector(DeltaVal, 0.0f, 0.0f));
}

void ATrophy::OnOverlapTrophyMesh(UPrimitiveComponent* OverlappedCompt, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("On Overlap Begin~~ Name : %s \nYou Win!!"), *OtherActor->GetName()));
	Destroy();
}


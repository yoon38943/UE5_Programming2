#include "YMovingPlatform.h"
#include "Components/SceneComponent.h"

AYMovingPlatform::AYMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	// �� ������Ʈ �������� ����� ( ��Ʈ ������Ʈ ���� )
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("STATIC_MESH"));
	StaticMesh->SetupAttachment(DefaultSceneRoot);
}



void AYMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	
}

void AYMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AYMovingPlatform::MovePlatform(float DeltaTime)
{
	if (ShouldPlatformReturn())
	{
		// ���⺤��
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + (MoveDirection * MoveDistance);
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

void AYMovingPlatform::RotatePlatform(float DeltaTime)
{
	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation = RotationVelocity * DeltaTime;
	AddActorLocalRotation(CurrentRotation);
}

bool AYMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistanceMoved() > MoveDistance;
}


float AYMovingPlatform::GetDistanceMoved() const
{
	// ���ڷ� �ѱ� �� ���� ������ �Ÿ��� ���ϴ� �Լ�
	return FVector::Dist(StartLocation, GetActorLocation());
}


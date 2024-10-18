#include "YCharBasePlatform.h"
#include "../YGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlatformPlayerController.h"

AYCharBasePlatform::AYCharBasePlatform()
{
	
}

void AYCharBasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FHitResult res;
	GetCharacterMovement()->K2_MoveUpdatedComponent(FVector(1.0, 1.0, 0.0), GetActorRotation(), res);
	GetCharacterMovement()->K2_MoveUpdatedComponent(FVector(-1.0, -1.0, 0.0), GetActorRotation(), res);
}

void AYCharBasePlatform::BeginPlay()
{
	Super::BeginPlay();

	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		DelegateHandle = YGI->MD_GameEnd.AddUObject(this, &ThisClass::SetGameEvent);
	}
}

void AYCharBasePlatform::SetGameEvent(int32 Type)
{
	if (APlatformPlayerController* PlatformPlayerController = Cast<APlatformPlayerController>(GetController()))
	{
		//Æ®·ÎÇÇ(1), Á×À½(0)
		PlatformPlayerController->GameHasEnded(nullptr, Type ? true : false);
	}
}

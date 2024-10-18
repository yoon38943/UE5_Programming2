#include "DeadZone.h"
#include "Components/SceneComponent.h"
#include "../YGameInstance.h"
#include "../Character/YCharBase.h"

ADeadZone::ADeadZone()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static_Mesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
}

void ADeadZone::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s You Died"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);

	//AYCharBase* YCharacter = Cast<AYCharBase>(OtherActor);
	//YCharacter->InputWidgetViewport_Implementation();
	//OtherActor->Destroy();

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		UYGameInstance* YGI = Cast<UYGameInstance>(World->GetGameInstance());
		if (YGI != nullptr)
		{
			YGI->MD_GameEnd.Broadcast(0);
		}
	}
}

void ADeadZone::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADeadZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


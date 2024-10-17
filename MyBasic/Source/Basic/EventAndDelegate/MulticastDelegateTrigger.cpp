#include "MulticastDelegateTrigger.h"
#include "../YGameInstance.h"
#include "Components/BoxComponent.h"

AMulticastDelegateTrigger::AMulticastDelegateTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerZone"));
	TriggerZone->SetBoxExtent(FVector(200, 200, 200));
}


void AMulticastDelegateTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMulticastDelegateTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMulticastDelegateTrigger::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s BeginOverlap"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		UYGameInstance* YGI = Cast<UYGameInstance>(World->GetGameInstance());
		if (YGI != nullptr)
		{
			YGI->MulticastDelegateSignature.Broadcast();
		}
	}
}

void AMulticastDelegateTrigger::NotifyActorEndOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s EndOverlap"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, Message);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		UYGameInstance* YGI = Cast<UYGameInstance>(World->GetGameInstance());
		if (YGI != nullptr)
		{
			// 델리게이트 호출시 파라미터 2개를 전달
			YGI->MulticastDelegateSignature.Broadcast();
		}
	}
}
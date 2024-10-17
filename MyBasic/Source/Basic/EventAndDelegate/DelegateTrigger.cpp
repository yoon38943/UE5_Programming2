#include "DelegateTrigger.h"
#include "../YGameInstance.h"
#include "Components/SphereComponent.h"

ADelegateTrigger::ADelegateTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerZone"));
	TriggerZone->InitSphereRadius(400.f);
}


void ADelegateTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADelegateTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ADelegateTrigger::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s BeginOverlap"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		UYGameInstance* YGI = Cast<UYGameInstance>(World->GetGameInstance());
		if (YGI != nullptr)
		{
			YGI->DefaultDelegateSignature.ExecuteIfBound();
		}
	}
}

void ADelegateTrigger::NotifyActorEndOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s EndOverlap"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, Message);
}
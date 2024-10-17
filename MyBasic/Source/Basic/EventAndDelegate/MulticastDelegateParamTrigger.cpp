#include "MulticastDelegateParamTrigger.h"
#include "../YGameInstance.h"
#include "Components/BoxComponent.h"

AMulticastDelegateParamTrigger::AMulticastDelegateParamTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerZone"));
	TriggerZone->SetBoxExtent(FVector(200, 200, 200));
	LightColor = FLinearColor(0, 0, 0, 0);
	RotateSpeed = 0;
}


void AMulticastDelegateParamTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMulticastDelegateParamTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMulticastDelegateParamTrigger::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s BeginOverlap"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		UYGameInstance* YGI = Cast<UYGameInstance>(World->GetGameInstance());
		if (YGI != nullptr)
		{
			// 델리게이트 호출시 파라미터 1개를 전달
			YGI->MulticastDelegateSignature1.Broadcast(LightColor);
		}
	}
}

void AMulticastDelegateParamTrigger::NotifyActorEndOverlap(AActor* OtherActor)
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
			YGI->MulticastDelegateSignature2.Broadcast(FLinearColor(1.f, 0.f, 0.f), RotateSpeed);
		}
	}
}

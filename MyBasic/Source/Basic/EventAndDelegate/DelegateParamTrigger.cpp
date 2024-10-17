#include "DelegateParamTrigger.h"
#include "../YGameInstance.h"
#include "Components/CapsuleComponent.h"


ADelegateParamTrigger::ADelegateParamTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerZone"));
	TriggerZone->InitCapsuleSize(200.f, 350.f);
	LightColor = FLinearColor(0, 0, 0, 0);
	RotateSpeed = 0;
}


void ADelegateParamTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADelegateParamTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADelegateParamTrigger::NotifyActorBeginOverlap(AActor* OtherActor)
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
			YGI->DefaultDelegateSignatureParam1.ExecuteIfBound(LightColor);
		}
	}
}

void ADelegateParamTrigger::NotifyActorEndOverlap(AActor* OtherActor)
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
			YGI->DefaultDelegateSignatureParam2.ExecuteIfBound(FLinearColor(1.f, 0.f, 0.f), RotateSpeed);
		}
	}
}

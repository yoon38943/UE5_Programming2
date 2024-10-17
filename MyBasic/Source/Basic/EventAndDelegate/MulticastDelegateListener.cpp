#include "MulticastDelegateListener.h"
#include "../YGameInstance.h"
#include "Components/PointLightComponent.h"


AMulticastDelegateListener::AMulticastDelegateListener()
{
	PrimaryActorTick.bCanEverTick = true;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	SetRootComponent(PointLight);
	PointLight->SetVisibility(false);
}

void AMulticastDelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		// 멀티캐스트 델리게이트는 핸들관리를 해줘야된다.
		DelegateHandle = YGI->MulticastDelegateSignature.AddUObject(this, &ThisClass::ToggleLight);
	}
}

void AMulticastDelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		// 핸들을 리무브 시켜줘야한다
		YGI->MulticastDelegateSignature.Remove(DelegateHandle);
	}
}

void AMulticastDelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMulticastDelegateListener::ToggleLight()
{
	PointLight->ToggleVisibility();
}

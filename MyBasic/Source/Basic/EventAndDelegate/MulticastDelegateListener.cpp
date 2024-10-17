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
		// ��Ƽĳ��Ʈ ��������Ʈ�� �ڵ������ ����ߵȴ�.
		DelegateHandle = YGI->MulticastDelegateSignature.AddUObject(this, &ThisClass::ToggleLight);
	}
}

void AMulticastDelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		// �ڵ��� ������ ��������Ѵ�
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

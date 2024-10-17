#include "MulticastDelegateParamListener.h"
#include "../YGameInstance.h"
#include "Components/SpotLightComponent.h"

AMulticastDelegateParamListener::AMulticastDelegateParamListener()
{
	PrimaryActorTick.bCanEverTick = true;

	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SetRootComponent(SpotLight);
	SpotLight->SetIntensity(10000.f);

	RotateSpeed = 0;
}


void AMulticastDelegateParamListener::BeginPlay()
{
	Super::BeginPlay();

	// 중요!!
	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		DelegateHandle1 = YGI->MulticastDelegateSignature1.AddUObject(this, &ThisClass::SetLightColor);
		DelegateHandle2 = YGI->MulticastDelegateSignature2.AddUObject(this, &ThisClass::SetLightColorAndRotate);
	}
}

void AMulticastDelegateParamListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		YGI->MulticastDelegateSignature1.Remove(DelegateHandle1);
		YGI->MulticastDelegateSignature2.Remove(DelegateHandle2);
	}
}

void AMulticastDelegateParamListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetRotateSpeed() > 0)
	{
		// 초당 설정된 각도로 yaw 회전
		AddActorLocalRotation(FRotator(0.0f, GetRotateSpeed() * DeltaTime, 0.0f));
	}
}


void AMulticastDelegateParamListener::SetLightColor(FLinearColor LightColor)
{
	SpotLight->SetLightColor(LightColor);
	SetRotateSpeed(0);
}

void AMulticastDelegateParamListener::SetLightColorAndRotate(FLinearColor LightColor, int32 Speed)
{
	SpotLight->SetLightColor(LightColor);
	SetRotateSpeed(Speed);
}
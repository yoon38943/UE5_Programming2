#include "DelegateParamListener.h"
#include "../YGameInstance.h"
#include "Components/SpotLightComponent.h"


ADelegateParamListener::ADelegateParamListener()
{
	PrimaryActorTick.bCanEverTick = true;

	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SetRootComponent(SpotLight);
	SpotLight->SetIntensity(100000.f);
	RotateSpeed = 0;
}

void ADelegateParamListener::BeginPlay()
{
	Super::BeginPlay();
	
	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		// ��������Ʈ ���ε�
		YGI->DefaultDelegateSignatureParam1.BindUObject(this, &ThisClass::SetLightColor);
		YGI->DefaultDelegateSignatureParam2.BindUObject(this, &ThisClass::SetLightColorAndRotate);
	}
}

void ADelegateParamListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetRotateSpeed() > 0)
	{
		// �ʴ� ������ ������ yaw ȸ��
		AddActorLocalRotation(FRotator(0.0f, GetRotateSpeed() * DeltaTime, 0.0f));
	}
}

void ADelegateParamListener::SetLightColor(FLinearColor LightColor)
{
	SpotLight->SetLightColor(LightColor);
	SetRotateSpeed(0);
}

void ADelegateParamListener::SetLightColorAndRotate(FLinearColor LightColor, int32 Speed)
{
	SpotLight->SetLightColor(LightColor);
	SetRotateSpeed(Speed);
}

#include "DelegateListener.h"
#include "../YGameInstance.h"
#include "Components/PointLightComponent.h"

ADelegateListener::ADelegateListener()
{
	PrimaryActorTick.bCanEverTick = true;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	SetRootComponent(PointLight);
	PointLight->SetVisibility(false);
	PointLight->SetLightColor(FLinearColor::Blue);
	PointLight->SetIntensity(10000);
}

void ADelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		// ��������Ʈ ���ε�
		YGI->DefaultDelegateSignature.BindUObject(this, &ThisClass::EnableLight);
	}
}

void ADelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//auto Message = FString::Printf(TEXT("%s EndListener"), *(OtherActor->GetName()));
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, Message);

	UYGameInstance* YGI = Cast<UYGameInstance>(GetWorld()->GetGameInstance());
	if (YGI != nullptr)
	{
		YGI->DefaultDelegateSignature.BindUObject(this, &ThisClass::DisableLight);
		// �Ҹ�� ���ε� ���� �ʼ�!
		YGI->DefaultDelegateSignature.Unbind();
	}
}

void ADelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADelegateListener::EnableLight()
{
	PointLight->SetVisibility(true);
}

void ADelegateListener::DisableLight()
{
	PointLight->SetVisibility(false);
}

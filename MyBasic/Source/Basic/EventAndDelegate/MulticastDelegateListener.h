#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MulticastDelegateListener.generated.h"

UCLASS()
class BASIC_API AMulticastDelegateListener : public AActor
{
	GENERATED_BODY()

public:
	FDelegateHandle DelegateHandle;

	UPROPERTY()
	class UPointLightComponent* PointLight;

public:
	UFUNCTION()
	void ToggleLight();
	
public:	
	AMulticastDelegateListener();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	virtual void Tick(float DeltaTime) override;

};

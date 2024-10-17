#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MulticastDelegateParamListener.generated.h"

UCLASS()
class BASIC_API AMulticastDelegateParamListener : public AActor
{
	GENERATED_BODY()
	
public:	
	AMulticastDelegateParamListener();

	FDelegateHandle DelegateHandle1;
	FDelegateHandle DelegateHandle2;

public:
	UPROPERTY()
	class USpotLightComponent* SpotLight;

private:
	int32 RotateSpeed;

public:
	int32 GetRotateSpeed() { return RotateSpeed; }
	int32 SetRotateSpeed(int32 Speed) { return RotateSpeed = Speed; }

	void SetLightColor(FLinearColor LightColor);
	void SetLightColorAndRotate(FLinearColor LightColor, int32 Speed);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	virtual void Tick(float DeltaTime) override;

};

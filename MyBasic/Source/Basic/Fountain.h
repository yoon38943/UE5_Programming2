#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"


class UStaticMeshComponent; // 전방선언
class URotatingMovementComponent;

UCLASS()
class BASIC_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Body;	// calss를 앞에 붙이면 변수 선언과 동시에 전방선언을 하는 것과 같다
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;
	UPROPERTY(VisibleAnywhere)
	class UPointLightComponent* Light;
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;
	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;

protected:
	virtual void BeginPlay() override;

public:	
	AFountain();
	virtual void Tick(float DeltaTime) override;

};

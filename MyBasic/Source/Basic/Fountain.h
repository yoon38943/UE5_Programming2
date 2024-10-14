#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"


class UStaticMeshComponent; // ���漱��
class URotatingMovementComponent;

UCLASS()
class BASIC_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Body;	// calss�� �տ� ���̸� ���� ����� ���ÿ� ���漱���� �ϴ� �Ͱ� ����
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

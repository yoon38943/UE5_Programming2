#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeadZone.generated.h"

UCLASS()
class BASIC_API ADeadZone : public AActor
{
	GENERATED_BODY()
	
public:	
	ADeadZone();

	class USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* StaticMesh;


	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};

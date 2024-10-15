#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YMovingPlatform.generated.h"

UCLASS()
class BASIC_API AYMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

private:
	UPROPERTY(EditAnywhere, Category = "Moving")
	FVector PlatformVelocity = FVector(100, 0, 0);
	UPROPERTY(EditAnywhere, Category = "Moving")
	float MoveDistance = 100;
	UPROPERTY(EditAnywhere, Category = "Rotation")
	FRotator RotationVelocity;

	FVector StartLocation;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

	bool ShouldPlatformReturn() const;
	float GetDistanceMoved() const;

protected:
	virtual void BeginPlay() override;

public:	
	AYMovingPlatform();
	virtual void Tick(float DeltaTime) override;

};

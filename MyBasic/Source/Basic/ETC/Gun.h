#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class BASIC_API AGun : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* Mesh;
	UPROPERTY(EditAnywhere)
	class UParticleSystem* MuzzleFlash; // √—±∏ ¿Ã∆Â∆Æ
	UPROPERTY(EditAnywhere)
	class UParticleSystem* ImpactEffect; // ≈∏¡° ¿Ã∆Â∆Æ
	UPROPERTY(EditAnywhere)
	class USoundBase* MuzzleSound;
	UPROPERTY(EditAnywhere)
	class USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000;
	UPROPERTY(EditAnywhere)
	float Damage = 10;
		
public:	
	AGun();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();

private:
	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
	bool GunTrace2(FHitResult& Hit, FVector& ShotDirection);
	AController* GetOwnerController() const;
};

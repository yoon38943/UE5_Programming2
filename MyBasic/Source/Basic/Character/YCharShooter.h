#pragma once

#include "CoreMinimal.h"
#include "YCharBase.h"
#include "YCharShooter.generated.h"

class AGun;

UCLASS()
class BASIC_API AYCharShooter : public AYCharBase
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> GunClass;
	UPROPERTY()
	AGun* Gun;

	UPROPERTY(EditAnywhere)
	float MaxHealth = 100;
	UPROPERTY(EditAnywhere)
	float Health;		// 현재 체력

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCause) override;

public:
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Shoot;

	void Shoot();

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;
};

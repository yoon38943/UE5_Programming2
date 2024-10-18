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

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Shoot;

	void Shoot();
};

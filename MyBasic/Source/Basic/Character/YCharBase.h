#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "YCharBase.generated.h"

class UInputAction; //전방선언
struct FInputActionValue;

UCLASS()
class BASIC_API AYCharBase : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"));
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"));
	class UCameraComponent* FollowCamera;


public:
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }


	// --> IMC & IA -------------------------------------------
public:

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IMC_Asset;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_Look;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_Move;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_Jump;

	void YLook(const FInputActionValue& Value);
	void YMove(const FInputActionValue& Value);

	// --> IMC & IA -------------------------------------------

public:
	AYCharBase();
	
	UFUNCTION(BlueprintImplementableEvent)
	void InputWidgetViewport_Implementation();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:	
	virtual void Tick(float DeltaTime) override;
};

#include "YCharAction.h"
#include "EnhancedInputComponent.h"

void AYCharAction::BeginPlay()
{
	Super::BeginPlay();


}

void AYCharAction::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Looking
		// EnhancedInputComponent->BindAction(IA_Shoot, ETriggerEvent::Started, this, &ThisClass::Shoot);
	}
}



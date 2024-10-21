#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	// �����̺�� Ʈ�� ����
}

void AShooterAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (LineOfSightTo(PlayerPawn) == true)	// �÷��̾����� �þ߿� ����
	{
		SetFocus(PlayerPawn);
		MoveToActor(PlayerPawn, 200);		// 2���� �ݰ� ������ ������
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}
}

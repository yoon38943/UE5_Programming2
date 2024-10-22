#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "YCharShooter.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	// �����̺�� Ʈ�� 
	if (EnemyBT != nullptr)
	{
		RunBehaviorTree(EnemyBT);

		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		SetFocus(PlayerPawn);

		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocationKey"), GetPawn()->GetActorLocation());
	}
}

void AShooterAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	//if (LineOfSightTo(PlayerPawn) == true)	// �÷��̾����� �þ߿� ����
	//{
	//	SetFocus(PlayerPawn);
	//	MoveToActor(PlayerPawn, 200);		// 2���� �ݰ� ������ ������
	//}
	//else
	//{
	//	ClearFocus(EAIFocusPriority::Gameplay);
	//	StopMovement();
	//}
}

bool AShooterAIController::IsDead() const
{
	AYCharShooter* ControlledCharacter = Cast<AYCharShooter>(GetPawn());
	if (ControlledCharacter != nullptr)
	{
		return ControlledCharacter->IsDead();
	}
	return false;
}

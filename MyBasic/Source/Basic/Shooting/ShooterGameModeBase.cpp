#include "ShooterGameModeBase.h"
#include "ShooterAIController.h"
#include "../HDebugMacros.h"
#include "EngineUtils.h"

// �� �Ǵ� AI�� �׾��� ��
void AShooterGameModeBase::PawnKilled(APawn* PawnKilled)
{
	HLOG(Warning, TEXT("PawnKilled~~~"));

	// ������ ����?
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr)
	{
		EndGame(false);
	}

	// AI���� ���������� return;
	for (AShooterAIController* Controller : TActorRange<AShooterAIController>(GetWorld()))
	{
		if (!Controller->IsDead())
		{
			// ��� �ִ� ����� �ִ�
			return;
		}
	}

	EndGame(true);
}

// ���� ���� ó�� �Լ� ( bIsPlayerWin : true => ���� ��� ���Ҵ�, false => ���� �׾��� )
void AShooterGameModeBase::EndGame(bool bIsPlayerWin)
{
	// �������� ��� ��Ʈ�ѷ��� ��ȸ( ���忡�� ������ ���ͷ��̼��ؼ� �������°� �ǵ��� ���� )
	// ���� Pool�� ���� ���� + �� �����̳ʿ��� �������°� ����
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
//		if (bIsPlayerWin == true && Controller->IsPlayerController() == true)
		bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWin;
		// �÷��̾� �¸�
		Controller->GameHasEnded(Controller->GetPawn(), bIsPlayerWin);
	}
}

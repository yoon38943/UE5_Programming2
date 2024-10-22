#include "ShooterGameModeBase.h"
#include "ShooterAIController.h"
#include "../HDebugMacros.h"
#include "EngineUtils.h"

// 나 또는 AI가 죽었을 때
void AShooterGameModeBase::PawnKilled(APawn* PawnKilled)
{
	HLOG(Warning, TEXT("PawnKilled~~~"));

	// 죽은게 나냐?
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr)
	{
		EndGame(false);
	}

	// AI들이 남아있으면 return;
	for (AShooterAIController* Controller : TActorRange<AShooterAIController>(GetWorld()))
	{
		if (!Controller->IsDead())
		{
			// 살아 있는 놈들이 있다
			return;
		}
	}

	EndGame(true);
}

// 게임 종료 처리 함수 ( bIsPlayerWin : true => 나만 살아 남았다, false => 내가 죽었다 )
void AShooterGameModeBase::EndGame(bool bIsPlayerWin)
{
	// 레벨상의 모든 컨트롤러를 순회( 월드에서 뭔가를 이터레이션해서 가져오는건 되도록 지양 )
	// 개별 Pool을 만들어서 관리 + 그 컨테이너에서 가져오는게 정석
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
//		if (bIsPlayerWin == true && Controller->IsPlayerController() == true)
		bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWin;
		// 플레이어 승리
		Controller->GameHasEnded(Controller->GetPawn(), bIsPlayerWin);
	}
}

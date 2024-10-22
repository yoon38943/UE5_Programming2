#include "BTS_PlayerLocationIfSeen.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_PlayerLocationIfSeen::UBTS_PlayerLocationIfSeen()
{
	// BT에 노출되는 노드의 이름
	NodeName = "Update Player Location If Seen";
}

void UBTS_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn == nullptr)
	{
		return;
	}

	if (OwnerComp.GetAIOwner() == nullptr)
	{
		return;
	}

	// 플레이어폰이 시야에 들어옴
	if (OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn) == true)
	{
		// BT에 바인딩한 블랙보드 키에 폰을 설정
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), PlayerPawn);
	}
	else
	{
		// 해당 블랙보드 키를 지운다
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}

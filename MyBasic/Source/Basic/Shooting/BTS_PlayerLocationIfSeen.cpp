#include "BTS_PlayerLocationIfSeen.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_PlayerLocationIfSeen::UBTS_PlayerLocationIfSeen()
{
	// BT�� ����Ǵ� ����� �̸�
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

	// �÷��̾����� �þ߿� ����
	if (OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn) == true)
	{
		// BT�� ���ε��� ������ Ű�� ���� ����
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), PlayerPawn);
	}
	else
	{
		// �ش� ������ Ű�� �����
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}

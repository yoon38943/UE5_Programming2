#include "BTT_Shoot.h"
#include "YCharShooter.h"
#include "AIController.h"

UBTT_Shoot::UBTT_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTT_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (OwnerComp.GetAIOwner() == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AYCharShooter* YCharShooter = Cast<AYCharShooter>(OwnerComp.GetAIOwner()->GetPawn());
	if (YCharShooter == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	YCharShooter->Shoot();

	return EBTNodeResult::Succeeded;
}

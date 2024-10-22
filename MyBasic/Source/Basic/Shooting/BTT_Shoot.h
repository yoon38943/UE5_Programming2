#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_Shoot.generated.h"

UCLASS()
class BASIC_API UBTT_Shoot : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTT_Shoot();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

#pragma once

#include "CoreMinimal.h"
#include "YCharBase.h"
#include "YCharBasePlatform.generated.h"

UCLASS()
class BASIC_API AYCharBasePlatform : public AYCharBase
{
	GENERATED_BODY()
	
public:
	AYCharBasePlatform();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	FDelegateHandle DelegateHandle;

	UFUNCTION()
	void SetGameEvent(int32 Type);
};

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_Listener.generated.h"

UCLASS()
class BASIC_API AEvent_Listener : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* TestMesh;

	UPROPERTY(EditAnywhere)
	class AEventTrigger* EventTriggerObj;

	UFUNCTION()
	void OnEvent1Triggered();
	UFUNCTION()
	void OnEvent2Triggered();

private:
	bool IsRotationState;	// true면 회전, false면 정지

public:
	bool GetIsRotationState() { return IsRotationState; }
	void SetIsRotationState(bool bState) { IsRotationState = bState; }
public:	
	AEvent_Listener();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventTrigger.generated.h"

// �̺�Ʈ ���� : �̺�Ʈ�� ������ Ŭ������, �̺�Ʈ Ŭ������ ����( �̺�Ʈ �̸����� ��� )
// �̺�Ʈ�� �����Ѵٴ°� �����ϰ� Broadcast() �� �� �ִ� Ŭ������� �ǹ� ( friend�� ������ )
DECLARE_EVENT(AEventTrigger, YEvent1)
DECLARE_EVENT(AEventTrigger, YEvent2)

UCLASS()
class BASIC_API AEventTrigger : public AActor
{
	GENERATED_BODY()
	
public:
	class UBoxComponent* TriggerZone;		// Ʈ���� ����

	YEvent1 OnEvent1;		// �̺�Ʈ1 ( Ʈ���� ���� �� �� )
	YEvent2 OnEvent2;		// �̺�Ʈ2 ( Ʈ���� ���� ���� �� )

	// UFUCNTION() ���� ���ϸ� �ߵ� �� ��
	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	UFUNCTION()
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;


public:	
	AEventTrigger();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};

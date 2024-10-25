#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventTrigger.generated.h"

// 이벤트 선언 : 이벤트를 소유한 클래스와, 이벤트 클래스를 지정( 이벤트 이름으로 사용 )
// 이벤트를 소유한다는건 유일하게 Broadcast() 할 수 있는 클래스라는 의미 ( friend로 설정됨 )
DECLARE_EVENT(AEventTrigger, YEvent1)
DECLARE_EVENT(AEventTrigger, YEvent2)

UCLASS()
class BASIC_API AEventTrigger : public AActor
{
	GENERATED_BODY()
	
public:
	class UBoxComponent* TriggerZone;		// 트리거 영역

	YEvent1 OnEvent1;		// 이벤트1 ( 트리거 영역 들어갈 때 )
	YEvent2 OnEvent2;		// 이벤트2 ( 트리거 영역 나갈 때 )

	// UFUCNTION() 지정 안하면 발동 안 함
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

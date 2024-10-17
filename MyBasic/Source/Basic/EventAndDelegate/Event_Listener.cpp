#include "Event_Listener.h"
#include "EventTrigger.h"


AEvent_Listener::AEvent_Listener()
{
	PrimaryActorTick.bCanEverTick = true;

	EventTriggerObj = nullptr;
	IsRotationState = false;	// 정지 상태
	TestMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TestMesh"));
	SetRootComponent(TestMesh);
}

void AEvent_Listener::BeginPlay()
{
	Super::BeginPlay();

	// 트리거 이벤트 바인딩
	if (EventTriggerObj != nullptr)
	{
		EventTriggerObj->OnEvent1.AddUObject(this, &ThisClass::OnEvent1Triggered);
		EventTriggerObj->OnEvent2.AddUObject(this, &ThisClass::OnEvent2Triggered);
	}
}

void AEvent_Listener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetIsRotationState() == true)	// 회전 상태면
	{
		// 초당 100도씩 yaw 회전
		static const int32 RotateSpeed = 100;
		AddActorLocalRotation(FRotator(0.0f, RotateSpeed * DeltaTime, 0.0f));
	}
}


void AEvent_Listener::OnEvent1Triggered()
{
	SetIsRotationState(true);
}

void AEvent_Listener::OnEvent2Triggered()
{
	SetIsRotationState(false);
}
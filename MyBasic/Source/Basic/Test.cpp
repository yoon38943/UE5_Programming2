
#include "Test.h"
#include "HDebugMacros.h"
// #include "CoreMinimal.h"

ATest::ATest()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATest::BeginPlay()
{
	// Super : 상위 base 클래스의 함수를 강제 호출
	Super::BeginPlay();
	
	//FVector Location = GetActorLocation();
	//HDRAW_SPHERE(Location);
	//
	//FVector Start, End;
	//Start = Location;
	//End = Start + (GetActorForwardVector() * 1000);
	//HDRAW_VECTOR(Start, End);
}

void ATest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;
	float DeltaVal = Amplitude * FMath::Sin(RunningTime * TimeConstant);
	AddActorWorldOffset(FVector(0.f, DeltaVal, 0.f));

	FVector Location = GetActorLocation();
	HDRAW_SPHERE_SingleFrame(Location);
	HDRAW_VECTOR_SingleFrame(Location, Location + (GetActorForwardVector() * 100.f));
}


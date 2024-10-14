// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test.generated.h"

UCLASS()
class BASIC_API ATest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//변수 6개
	UPROPERTY(EditDefaultsOnly);
	int32 TempVal1 = 99;
	UPROPERTY(EditInstanceOnly);
	int32 TempVal3 = 11;
	UPROPERTY(EditAnyWhere);
	bool TempVal2 = true;
	UPROPERTY(VisibleDefaultsOnly);
	float TempVal4 = 3.14;
	UPROPERTY(VisibleInstanceOnly);
	int32 TempVal5 = 123;
	UPROPERTY(VisibleAnywhere);
	int32 TempVal6 = 12345;

private:
	UPROPERTY(VisibleAnywhere)
	float RunningTime = 0.0f;
	UPROPERTY(EditDefaultsOnly)
	float Amplitude = 0.5f; //진폭
	UPROPERTY(EditInstanceOnly)
	float TimeConstant = 10.f; //sin 속도를 가속
};

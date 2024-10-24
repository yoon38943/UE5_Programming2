#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEquippable.generated.h"

UCLASS()
class BASIC_API ABaseEquippable : public AActor
{
	GENERATED_BODY()

private:
	USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemSkeletalMesh;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ItemStaticMesh;

	UFUNCTION(BlueprintPure, Category = ItemMesh)
	UPrimitiveComponent* GetItemMesh();
	UFUNCTION(BlueprintCallable, Category = ItemMesh)
	void AttachActor(FName SocketName);

	UPROPERTY(VisibleDefaultsOnly)
	bool IsEquipped = false;

public:
	// 파생클래스가 BP일 때 오버라이드 하는 방법
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnEquipped();

	UFUNCTION(BlueprintCallable)
	void OnUnEquipped();


public:
	UPROPERTY(BlueprintReadWrite, Category = socketname)
	FName AttachSocketName;


public:	
	ABaseEquippable();
	void SetIsEquipped(bool Equip) { IsEquipped = Equip; }
	bool GetIsEquipped(void) { return IsEquipped; }

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};

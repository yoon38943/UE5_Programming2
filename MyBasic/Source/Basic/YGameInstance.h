#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EventAndDelegate/YDelegateDefine.h"
#include "YGameInstance.generated.h"

UCLASS()
class BASIC_API UYGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	FDelegateSignature DefaultDelegateSignature;
	FDelegateSignatureParam1 DefaultDelegateSignatureParam1;
	FDelegateSignatureParam2 DefaultDelegateSignatureParam2;

	FMulticastDelegateSignature MulticastDelegateSignature;
	FMulticastDelegateSignature1 MulticastDelegateSignature1;
	FMulticastDelegateSignature2 MulticastDelegateSignature2;

	FMD_GameEnd MD_GameEnd;
};

#pragma once

#include "Delegates/DelegateCombinations.h"	// ��������Ʈ ��ũ�ΰ� ���ǵ� ���

//--------------------------------------------------------
// ���� ������Ʈ ���ε���

// �⺻ ��������Ʈ
DECLARE_DELEGATE(FDelegateSignature)
// �⺻ ��������Ʈ�� ���� 1���� ����
DECLARE_DELEGATE_OneParam(FDelegateSignatureParam1, FLinearColor)
// �⺻ ��������Ʈ�� ���� 2���� ����
DECLARE_DELEGATE_TwoParams(FDelegateSignatureParam2, FLinearColor, int32)

//--------------------------------------------------------
// ��Ƽ ������Ʈ ���ε���

// ��Ƽĳ��Ʈ ��������Ʈ
DECLARE_MULTICAST_DELEGATE(FMulticastDelegateSignature)
// ��Ƽĳ��Ʈ ��������Ʈ�� ���� 1���� ����
DECLARE_MULTICAST_DELEGATE_OneParam(FMulticastDelegateSignature1, FLinearColor)
DECLARE_MULTICAST_DELEGATE_OneParam(FMD_GameEnd, int32)

// ��Ƽĳ��Ʈ ��������Ʈ�� ���� 2���� ����
DECLARE_MULTICAST_DELEGATE_TwoParams(FMulticastDelegateSignature2, FLinearColor, int32)
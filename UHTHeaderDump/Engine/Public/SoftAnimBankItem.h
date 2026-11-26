#pragma once
#include "CoreMinimal.h"
#include "SoftAnimBankItem.generated.h"

class UAnimBank;

USTRUCT(BlueprintType)
struct FSoftAnimBankItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBank> BankAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIndex;
    
    ENGINE_API FSoftAnimBankItem();
};


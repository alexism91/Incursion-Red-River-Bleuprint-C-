#pragma once
#include "CoreMinimal.h"
#include "AnimBankItem.generated.h"

class UAnimBank;

USTRUCT(BlueprintType)
struct FAnimBankItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimBank* BankAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIndex;
    
    ENGINE_API FAnimBankItem();
};


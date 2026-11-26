#pragma once
#include "CoreMinimal.h"
#include "AnimBankItem.h"
#include "SkinnedMeshComponentDescriptorBase.h"
#include "SkinnedMeshComponentDescriptor.generated.h"

class USkinnedAsset;

USTRUCT(BlueprintType)
struct FSkinnedMeshComponentDescriptor : public FSkinnedMeshComponentDescriptorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* SkinnedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimBankItem> BankItems;
    
    ENGINE_API FSkinnedMeshComponentDescriptor();
};


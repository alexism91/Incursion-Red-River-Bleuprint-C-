#pragma once
#include "CoreMinimal.h"
#include "SkinnedMeshComponentDescriptorBase.h"
#include "SoftAnimBankItem.h"
#include "SoftSkinnedMeshComponentDescriptor.generated.h"

class USkinnedAsset;

USTRUCT(BlueprintType)
struct FSoftSkinnedMeshComponentDescriptor : public FSkinnedMeshComponentDescriptorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkinnedAsset> SkinnedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftAnimBankItem> BankItems;
    
    ENGINE_API FSoftSkinnedMeshComponentDescriptor();
};


#pragma once
#include "CoreMinimal.h"
#include "BoneChainLink.h"
#include "StriderBoneChain.generated.h"

USTRUCT(BlueprintType)
struct FStriderBoneChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneChainLink> BoneChain;
    
    STRIDER_API FStriderBoneChain();
};


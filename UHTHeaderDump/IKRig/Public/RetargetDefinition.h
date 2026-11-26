#pragma once
#include "CoreMinimal.h"
#include "BoneChain.h"
#include "RetargetDefinition.generated.h"

USTRUCT(BlueprintType)
struct FRetargetDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneChain> BoneChains;
    
    IKRIG_API FRetargetDefinition();
};


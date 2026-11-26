#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "InterchangeAnimationPayLoadKey.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeAnimationPayLoadKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterchangeAnimationPayLoadType Type;
    
    INTERCHANGENODES_API FInterchangeAnimationPayLoadKey();
};


#pragma once
#include "CoreMinimal.h"
#include "RetargetChainPair.generated.h"

USTRUCT(BlueprintType)
struct FRetargetChainPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceChainName;
    
    IKRIG_API FRetargetChainPair();
};


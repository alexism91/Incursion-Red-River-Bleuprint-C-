#pragma once
#include "CoreMinimal.h"
#include "RetargetStrideWarpChainSettings.generated.h"

USTRUCT(BlueprintType)
struct FRetargetStrideWarpChainSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableStrideWarping;
    
    IKRIG_API FRetargetStrideWarpChainSettings();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRPerceptionSharingConfig.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRPerceptionSharingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClusterRebuildInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeHysteresisFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeHysteresisTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingSweepSeconds;
    
    FIRRPerceptionSharingConfig();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRCoverOverwatchParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCoverOverwatchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleSpreadWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralSpreadWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRewardedSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeekCoverageWeightPerThreat;
    
    FIRRCoverOverwatchParams();
};


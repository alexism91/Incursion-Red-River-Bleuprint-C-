#pragma once
#include "CoreMinimal.h"
#include "IRRCoverRetreatParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCoverRetreatParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPathToTargetRatio;
    
    FIRRCoverRetreatParams();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRCoverAdvancePathParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCoverAdvancePathParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPathToTargetRatio;
    
    FIRRCoverAdvancePathParams();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRCoverAdvanceTowardParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCoverAdvanceTowardParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvanceProgressRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowardTargetProgressWeight;
    
    FIRRCoverAdvanceTowardParams();
};


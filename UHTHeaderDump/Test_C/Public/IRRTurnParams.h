#pragma once
#include "CoreMinimal.h"
#include "IRRTurnParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRTurnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed;
    
    FIRRTurnParams();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRDayTime.h"
#include "IRRWeatherDurationOverride.generated.h"

USTRUCT(BlueprintType)
struct FIRRWeatherDurationOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime MinimumTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime MaximumTime;
    
    IRRMISSIONSYSTEM_API FIRRWeatherDurationOverride();
};


#pragma once
#include "CoreMinimal.h"
#include "IRRAITimeAndWeatherEffects.generated.h"

USTRUCT(BlueprintType)
struct FIRRAITimeAndWeatherEffects {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VisionDistanceEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VisionSpeedEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VisionAngleEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HearingDistanceEffect;
    
    TEST_C_API FIRRAITimeAndWeatherEffects();
};


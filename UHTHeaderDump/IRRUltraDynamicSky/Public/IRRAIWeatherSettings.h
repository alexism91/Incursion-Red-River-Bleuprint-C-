#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeatherSettings.generated.h"

USTRUCT(BlueprintType)
struct IRRULTRADYNAMICSKY_API FIRRAIWeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAIVisionDistance_Meters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIVisibilityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIHearingFactor;
    
    FIRRAIWeatherSettings();
};


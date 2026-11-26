#pragma once
#include "CoreMinimal.h"
#include "ECalibratedMapChannels.h"
#include "ECalibratedMapPixelOrigin.h"
#include "CalibratedMapFormat.generated.h"

USTRUCT(BlueprintType)
struct FCalibratedMapFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalibratedMapPixelOrigin PixelOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalibratedMapChannels UndistortionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalibratedMapChannels DistortionChannels;
    
    CAMERACALIBRATIONCORE_API FCalibratedMapFormat();
};


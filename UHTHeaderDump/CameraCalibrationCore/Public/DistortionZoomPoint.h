#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.h"
#include "DistortionZoomPoint.generated.h"

USTRUCT(BlueprintType)
struct FDistortionZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistortionInfo DistortionInfo;
    
    CAMERACALIBRATIONCORE_API FDistortionZoomPoint();
};


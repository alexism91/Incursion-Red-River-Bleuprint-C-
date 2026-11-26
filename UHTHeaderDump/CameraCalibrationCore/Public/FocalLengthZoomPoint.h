#pragma once
#include "CoreMinimal.h"
#include "FocalLengthInfo.h"
#include "FocalLengthZoomPoint.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocalLengthInfo FocalLengthInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalibrationPoint;
    
    CAMERACALIBRATIONCORE_API FFocalLengthZoomPoint();
};


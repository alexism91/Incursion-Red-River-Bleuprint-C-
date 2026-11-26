#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.h"
#include "FocalLengthInfo.h"
#include "ImageCenterInfo.h"
#include "LensDistortionState.generated.h"

USTRUCT(BlueprintType)
struct FLensDistortionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistortionInfo DistortionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocalLengthInfo FocalLengthInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCenterInfo ImageCenter;
    
    CAMERACALIBRATIONCORE_API FLensDistortionState();
};


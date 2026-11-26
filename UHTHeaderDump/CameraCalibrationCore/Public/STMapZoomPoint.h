#pragma once
#include "CoreMinimal.h"
#include "DerivedDistortionData.h"
#include "STMapInfo.h"
#include "STMapZoomPoint.generated.h"

USTRUCT(BlueprintType)
struct FSTMapZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTMapInfo STMapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDerivedDistortionData DerivedDistortionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalibrationPoint;
    
    CAMERACALIBRATIONCORE_API FSTMapZoomPoint();
};


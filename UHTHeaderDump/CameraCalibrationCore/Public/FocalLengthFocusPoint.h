#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "FocalLengthZoomPoint.h"
#include "FocalLengthFocusPoint.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Focus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Fx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Fy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocalLengthZoomPoint> ZoomPoints;
    
    CAMERACALIBRATIONCORE_API FFocalLengthFocusPoint();
};


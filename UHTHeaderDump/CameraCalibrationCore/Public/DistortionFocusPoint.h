#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "DistortionZoomPoint.h"
#include "DistortionFocusPoint.generated.h"

USTRUCT(BlueprintType)
struct FDistortionFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Focus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve MapBlendingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistortionZoomPoint> ZoomPoints;
    
    CAMERACALIBRATIONCORE_API FDistortionFocusPoint();
};


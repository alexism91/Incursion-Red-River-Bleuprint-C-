#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "STMapZoomPoint.h"
#include "STMapFocusPoint.generated.h"

USTRUCT(BlueprintType)
struct FSTMapFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Focus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve MapBlendingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSTMapZoomPoint> ZoomPoints;
    
    CAMERACALIBRATIONCORE_API FSTMapFocusPoint();
};


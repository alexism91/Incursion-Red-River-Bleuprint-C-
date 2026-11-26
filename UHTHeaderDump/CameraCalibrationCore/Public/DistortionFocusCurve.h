#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusCurve.h"
#include "DistortionFocusCurve.generated.h"

USTRUCT(BlueprintType)
struct FDistortionFocusCurve : public FBaseFocusCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve MapBlendingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    CAMERACALIBRATIONCORE_API FDistortionFocusCurve();
};


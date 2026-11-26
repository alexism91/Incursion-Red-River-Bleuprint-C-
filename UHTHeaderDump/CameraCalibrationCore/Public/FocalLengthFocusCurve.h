#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusCurve.h"
#include "FocalLengthFocusCurve.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthFocusCurve : public FBaseFocusCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Fx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Fy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    CAMERACALIBRATIONCORE_API FFocalLengthFocusCurve();
};


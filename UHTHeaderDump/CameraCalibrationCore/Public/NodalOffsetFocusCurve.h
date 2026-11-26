#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusCurve.h"
#include "NodalOffsetFocusCurve.generated.h"

USTRUCT(BlueprintType)
struct FNodalOffsetFocusCurve : public FBaseFocusCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve LocationOffset[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve RotationOffset[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    CAMERACALIBRATIONCORE_API FNodalOffsetFocusCurve();
};


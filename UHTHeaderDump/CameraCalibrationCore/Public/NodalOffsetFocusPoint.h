#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "NodalOffsetFocusPoint.generated.h"

USTRUCT(BlueprintType)
struct FNodalOffsetFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Focus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve LocationOffset[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve RotationOffset[3];
    
    CAMERACALIBRATIONCORE_API FNodalOffsetFocusPoint();
};


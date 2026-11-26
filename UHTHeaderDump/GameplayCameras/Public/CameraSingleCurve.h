#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "CameraSingleCurve.generated.h"

USTRUCT(BlueprintType)
struct FCameraSingleCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Curve;
    
    GAMEPLAYCAMERAS_API FCameraSingleCurve();
};


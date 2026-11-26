#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "CameraRotatorCurve.generated.h"

USTRUCT(BlueprintType)
struct FCameraRotatorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Curves[3];
    
    GAMEPLAYCAMERAS_API FCameraRotatorCurve();
};


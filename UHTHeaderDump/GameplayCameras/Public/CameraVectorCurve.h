#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "CameraVectorCurve.generated.h"

USTRUCT(BlueprintType)
struct FCameraVectorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Curves[3];
    
    GAMEPLAYCAMERAS_API FCameraVectorCurve();
};


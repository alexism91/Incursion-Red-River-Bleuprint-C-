#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "FocalLengthInfo.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D FxFy;
    
    CAMERACALIBRATIONCORE_API FFocalLengthInfo();
};


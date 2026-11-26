#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ImageCenterInfo.generated.h"

USTRUCT(BlueprintType)
struct FImageCenterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D PrincipalPoint;
    
    CAMERACALIBRATIONCORE_API FImageCenterInfo();
};


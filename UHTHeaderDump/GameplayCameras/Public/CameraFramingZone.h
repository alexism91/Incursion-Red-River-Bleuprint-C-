#pragma once
#include "CoreMinimal.h"
#include "CameraFramingZone.generated.h"

USTRUCT(BlueprintType)
struct FCameraFramingZone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Left;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Top;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Right;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Bottom;
    
    GAMEPLAYCAMERAS_API FCameraFramingZone();
};


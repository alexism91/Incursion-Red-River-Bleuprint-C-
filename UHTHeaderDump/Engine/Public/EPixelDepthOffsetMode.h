#pragma once
#include "CoreMinimal.h"
#include "EPixelDepthOffsetMode.generated.h"

UENUM(BlueprintType)
enum EPixelDepthOffsetMode {
    PDOM_Legacy,
    PDOM_AlongCameraVector,
};


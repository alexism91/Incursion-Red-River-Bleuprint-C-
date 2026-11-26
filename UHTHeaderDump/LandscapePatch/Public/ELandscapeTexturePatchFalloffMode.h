#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTexturePatchFalloffMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTexturePatchFalloffMode : uint8 {
    Circle,
    RoundedRectangle,
};


#pragma once
#include "CoreMinimal.h"
#include "EIRRUserSetting.generated.h"

UENUM(BlueprintType)
enum class EIRRUserSetting : uint8 {
    Resolution,
    WindowMode,
    VSync,
    FrameRateLimit,
};


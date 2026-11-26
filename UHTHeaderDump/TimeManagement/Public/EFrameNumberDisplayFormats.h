#pragma once
#include "CoreMinimal.h"
#include "EFrameNumberDisplayFormats.generated.h"

UENUM(BlueprintType)
enum class EFrameNumberDisplayFormats : uint8 {
    NonDropFrameTimecode,
    DropFrameTimecode,
    Seconds,
    Frames,
    Custom,
    MAX_Count,
};


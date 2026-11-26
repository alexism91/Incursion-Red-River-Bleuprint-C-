#pragma once
#include "CoreMinimal.h"
#include "EIRRCinematicExposureMode.generated.h"

UENUM(BlueprintType)
enum class EIRRCinematicExposureMode : uint8 {
    Level,
    Auto,
    Manual,
};


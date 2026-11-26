#pragma once
#include "CoreMinimal.h"
#include "EIRRCinematicFocusMode.generated.h"

UENUM(BlueprintType)
enum class EIRRCinematicFocusMode : uint8 {
    Manual,
    Crosshair,
    Subject,
    Disabled,
};


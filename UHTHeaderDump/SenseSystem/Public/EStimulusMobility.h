#pragma once
#include "CoreMinimal.h"
#include "EStimulusMobility.generated.h"

UENUM(BlueprintType)
enum class EStimulusMobility : uint8 {
    Static,
    MovableOwner,
    MovableTick,
};


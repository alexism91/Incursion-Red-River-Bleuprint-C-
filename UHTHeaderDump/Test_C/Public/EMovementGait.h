#pragma once
#include "CoreMinimal.h"
#include "EMovementGait.generated.h"

UENUM(BlueprintType)
enum class EMovementGait : uint8 {
    Sneak,
    Walk,
    Sprint,
    CheatMode,
};


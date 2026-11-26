#pragma once
#include "CoreMinimal.h"
#include "EAIDifficulty.generated.h"

UENUM(BlueprintType)
enum class EAIDifficulty : uint8 {
    LOW,
    MID,
    HIGH,
    EXTREME,
    CUSTOM,
};


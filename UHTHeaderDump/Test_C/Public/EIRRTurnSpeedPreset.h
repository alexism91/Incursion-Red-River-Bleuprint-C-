#pragma once
#include "CoreMinimal.h"
#include "EIRRTurnSpeedPreset.generated.h"

UENUM(BlueprintType)
enum class EIRRTurnSpeedPreset : uint8 {
    Low,
    Medium,
    High,
    VeryHigh,
};


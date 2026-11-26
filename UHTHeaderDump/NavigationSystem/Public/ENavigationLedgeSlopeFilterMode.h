#pragma once
#include "CoreMinimal.h"
#include "ENavigationLedgeSlopeFilterMode.generated.h"

UENUM(BlueprintType)
enum class ENavigationLedgeSlopeFilterMode : uint8 {
    Recast,
    None,
    UseStepHeightFromAgentMaxSlope,
};


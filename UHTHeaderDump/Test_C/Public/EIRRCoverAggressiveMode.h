#pragma once
#include "CoreMinimal.h"
#include "EIRRCoverAggressiveMode.generated.h"

UENUM(BlueprintType)
enum class EIRRCoverAggressiveMode : uint8 {
    AdvanceAlongPath,
    AdvanceTowardTarget,
    Flank,
    AdvanceTowardLocation,
};


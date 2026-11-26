#pragma once
#include "CoreMinimal.h"
#include "EIRRCoverSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EIRRCoverSelectionMode : uint8 {
    SingleBest,
    RandomBest5Pct,
    RandomBest25Pct,
    RandomAny,
};


#pragma once
#include "CoreMinimal.h"
#include "EIRRCoverDefensiveMode.generated.h"

UENUM(BlueprintType)
enum class EIRRCoverDefensiveMode : uint8 {
    Standard,
    Retreat,
    Overwatch,
    PushThrough,
};


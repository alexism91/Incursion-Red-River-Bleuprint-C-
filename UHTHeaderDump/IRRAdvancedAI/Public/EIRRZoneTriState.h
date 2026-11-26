#pragma once
#include "CoreMinimal.h"
#include "EIRRZoneTriState.generated.h"

UENUM(BlueprintType)
enum class EIRRZoneTriState : uint8 {
    Inherit,
    Enabled,
    Disabled,
};


#pragma once
#include "CoreMinimal.h"
#include "ELightState.generated.h"

UENUM(BlueprintType)
enum class ELightState : uint8 {
    None,
    Enabled,
    Disabled,
};


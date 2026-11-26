#pragma once
#include "CoreMinimal.h"
#include "EIRRHackDeviceState.generated.h"

UENUM(BlueprintType)
enum class EIRRHackDeviceState : uint8 {
    NoDeviceRequired,
    NoDevice,
    Depleted,
    Ready,
};


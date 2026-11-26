#pragma once
#include "CoreMinimal.h"
#include "EIRRKeyDevice.generated.h"

UENUM(BlueprintType)
enum class EIRRKeyDevice : uint8 {
    KeyboardMouse,
    Gamepad,
};


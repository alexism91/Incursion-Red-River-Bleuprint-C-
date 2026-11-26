#pragma once
#include "CoreMinimal.h"
#include "EPCGPinInitMode.generated.h"

UENUM(BlueprintType)
enum class EPCGPinInitMode : uint8 {
    FromInputPins,
    Custom,
};


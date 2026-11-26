#pragma once
#include "CoreMinimal.h"
#include "EIRRFillMode.generated.h"

UENUM(BlueprintType)
enum class EIRRFillMode : uint8 {
    None,
    Scrim,
    Tint,
};


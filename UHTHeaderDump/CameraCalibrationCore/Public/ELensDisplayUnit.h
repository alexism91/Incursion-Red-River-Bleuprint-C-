#pragma once
#include "CoreMinimal.h"
#include "ELensDisplayUnit.generated.h"

UENUM(BlueprintType)
enum class ELensDisplayUnit : uint8 {
    Millimeters,
    Pixels,
    Normalized,
};


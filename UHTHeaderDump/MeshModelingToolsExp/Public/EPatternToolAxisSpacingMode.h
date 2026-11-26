#pragma once
#include "CoreMinimal.h"
#include "EPatternToolAxisSpacingMode.generated.h"

UENUM(BlueprintType)
enum class EPatternToolAxisSpacingMode : uint8 {
    ByCount,
    StepSize,
    Packed,
};


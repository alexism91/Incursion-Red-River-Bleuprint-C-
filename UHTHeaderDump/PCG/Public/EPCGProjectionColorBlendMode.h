#pragma once
#include "CoreMinimal.h"
#include "EPCGProjectionColorBlendMode.generated.h"

UENUM(BlueprintType)
enum class EPCGProjectionColorBlendMode : uint8 {
    SourceValue,
    TargetValue,
    Add,
    Subtract,
    Multiply,
};


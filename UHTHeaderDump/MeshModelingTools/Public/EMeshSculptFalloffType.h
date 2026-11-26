#pragma once
#include "CoreMinimal.h"
#include "EMeshSculptFalloffType.generated.h"

UENUM(BlueprintType)
enum class EMeshSculptFalloffType : uint8 {
    Smooth,
    Linear,
    Inverse,
    Round,
    BoxSmooth,
    BoxLinear,
    BoxInverse,
    BoxRound,
    LastValue,
};


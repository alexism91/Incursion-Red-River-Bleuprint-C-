#pragma once
#include "CoreMinimal.h"
#include "EDataflowSetFloatArrayMethod.generated.h"

UENUM(BlueprintType)
enum class EDataflowSetFloatArrayMethod : uint8 {
    Random,
    Noise,
    ByBoundingBox,
};


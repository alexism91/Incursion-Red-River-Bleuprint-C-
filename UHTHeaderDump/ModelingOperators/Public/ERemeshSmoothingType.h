#pragma once
#include "CoreMinimal.h"
#include "ERemeshSmoothingType.generated.h"

UENUM(BlueprintType)
enum class ERemeshSmoothingType : uint8 {
    Uniform,
    Cotangent,
    MeanValue,
};


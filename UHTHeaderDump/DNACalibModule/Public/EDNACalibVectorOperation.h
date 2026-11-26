#pragma once
#include "CoreMinimal.h"
#include "EDNACalibVectorOperation.generated.h"

UENUM(BlueprintType)
enum class EDNACalibVectorOperation : uint8 {
    Interpolate,
    Add,
    Subtract,
    Multiply,
};


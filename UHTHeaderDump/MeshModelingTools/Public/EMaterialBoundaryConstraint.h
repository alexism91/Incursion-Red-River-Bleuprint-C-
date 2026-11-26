#pragma once
#include "CoreMinimal.h"
#include "EMaterialBoundaryConstraint.generated.h"

UENUM(BlueprintType)
enum class EMaterialBoundaryConstraint : uint8 {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
};


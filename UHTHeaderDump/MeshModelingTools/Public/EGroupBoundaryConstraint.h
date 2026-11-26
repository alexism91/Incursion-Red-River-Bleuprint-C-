#pragma once
#include "CoreMinimal.h"
#include "EGroupBoundaryConstraint.generated.h"

UENUM(BlueprintType)
enum class EGroupBoundaryConstraint : uint8 {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
};


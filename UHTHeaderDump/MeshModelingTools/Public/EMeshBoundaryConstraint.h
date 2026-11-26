#pragma once
#include "CoreMinimal.h"
#include "EMeshBoundaryConstraint.generated.h"

UENUM(BlueprintType)
enum class EMeshBoundaryConstraint : uint8 {
    Fixed = 7,
    Refine = 5,
    Free = 1,
};


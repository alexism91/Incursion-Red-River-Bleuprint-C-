#pragma once
#include "CoreMinimal.h"
#include "EConvexHullProximityFilter.generated.h"

UENUM(BlueprintType)
enum class EConvexHullProximityFilter : uint8 {
    None,
    BoundingBox,
};


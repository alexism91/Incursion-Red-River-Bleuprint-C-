#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineDataProperties.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineDataProperties : uint8 {
    SplineTransform,
    IsClosed,
};


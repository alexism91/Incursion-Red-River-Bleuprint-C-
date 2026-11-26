#pragma once
#include "CoreMinimal.h"
#include "EPCGDataMultiplicity.generated.h"

UENUM(BlueprintType)
enum class EPCGDataMultiplicity : uint8 {
    Pairwise,
    CartesianProduct,
};


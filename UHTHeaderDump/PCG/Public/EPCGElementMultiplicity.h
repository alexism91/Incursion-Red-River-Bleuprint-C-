#pragma once
#include "CoreMinimal.h"
#include "EPCGElementMultiplicity.generated.h"

UENUM(BlueprintType)
enum class EPCGElementMultiplicity : uint8 {
    Product,
    Sum,
};


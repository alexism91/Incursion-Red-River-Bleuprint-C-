#pragma once
#include "CoreMinimal.h"
#include "EPCGPointPosition.generated.h"

UENUM(BlueprintType)
enum class EPCGPointPosition : uint8 {
    CellCenter,
    CellCorners,
};


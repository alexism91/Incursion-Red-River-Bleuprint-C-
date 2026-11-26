#pragma once
#include "CoreMinimal.h"
#include "EIRRAIRandomLookMode.generated.h"

UENUM(BlueprintType)
enum class EIRRAIRandomLookMode : uint8 {
    TrueRandom,
    PreferSmallestAngle,
    PreferLargestAngle,
    Scan,
};


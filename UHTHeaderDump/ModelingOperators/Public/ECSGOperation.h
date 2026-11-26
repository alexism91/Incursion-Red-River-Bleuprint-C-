#pragma once
#include "CoreMinimal.h"
#include "ECSGOperation.generated.h"

UENUM(BlueprintType)
enum class ECSGOperation : uint8 {
    DifferenceAB,
    DifferenceBA,
    Intersect,
    Union,
};


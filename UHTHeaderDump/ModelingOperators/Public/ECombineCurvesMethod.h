#pragma once
#include "CoreMinimal.h"
#include "ECombineCurvesMethod.generated.h"

UENUM(BlueprintType)
enum class ECombineCurvesMethod : uint8 {
    LeaveSeparate,
    Union,
    Intersect,
    Difference,
    ExclusiveOr,
};


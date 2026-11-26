#pragma once
#include "CoreMinimal.h"
#include "EOffsetOpenCurvesMethod.generated.h"

UENUM(BlueprintType)
enum class EOffsetOpenCurvesMethod : uint8 {
    TreatAsClosed,
    Offset,
};


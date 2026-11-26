#pragma once
#include "CoreMinimal.h"
#include "EOffsetClosedCurvesMethod.generated.h"

UENUM(BlueprintType)
enum class EOffsetClosedCurvesMethod : uint8 {
    DoNotOffset,
    OffsetOuterSide,
    OffsetBothSides,
};


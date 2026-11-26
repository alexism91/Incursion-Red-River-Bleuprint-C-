#pragma once
#include "CoreMinimal.h"
#include "EFlattenCurveMethod.generated.h"

UENUM(BlueprintType)
enum class EFlattenCurveMethod : uint8 {
    DoNotFlatten,
    ToBestFitPlane,
    AlongX,
    AlongY,
    AlongZ,
};


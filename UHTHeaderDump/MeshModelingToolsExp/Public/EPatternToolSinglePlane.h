#pragma once
#include "CoreMinimal.h"
#include "EPatternToolSinglePlane.generated.h"

UENUM(BlueprintType)
enum class EPatternToolSinglePlane : uint8 {
    XYPlane,
    XZPlane,
    YZPlane,
};


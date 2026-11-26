#pragma once
#include "CoreMinimal.h"
#include "ECameraTargetShape.generated.h"

UENUM(BlueprintType)
enum class ECameraTargetShape : uint8 {
    Point,
    AutomaticBounds,
    ManualBounds,
};


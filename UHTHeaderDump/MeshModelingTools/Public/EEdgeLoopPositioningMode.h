#pragma once
#include "CoreMinimal.h"
#include "EEdgeLoopPositioningMode.generated.h"

UENUM()
enum class EEdgeLoopPositioningMode : int32 {
    Even,
    ProportionOffset,
    DistanceOffset,
};


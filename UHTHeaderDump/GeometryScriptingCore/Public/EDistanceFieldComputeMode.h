#pragma once
#include "CoreMinimal.h"
#include "EDistanceFieldComputeMode.generated.h"

UENUM(BlueprintType)
enum class EDistanceFieldComputeMode : uint8 {
    NarrowBand,
    FullGrid,
};


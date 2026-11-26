#pragma once
#include "CoreMinimal.h"
#include "EDistanceFieldUnits.generated.h"

UENUM(BlueprintType)
enum class EDistanceFieldUnits : uint8 {
    NumberOfVoxels,
    Distance,
};


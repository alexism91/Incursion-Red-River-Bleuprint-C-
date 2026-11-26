#pragma once
#include "CoreMinimal.h"
#include "EWaterExclusionMode.generated.h"

UENUM()
enum class EWaterExclusionMode : int32 {
    AddWaterBodiesListToExclusion,
    RemoveWaterBodiesListFromExclusion,
};


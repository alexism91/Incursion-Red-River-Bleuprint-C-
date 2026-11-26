#pragma once
#include "CoreMinimal.h"
#include "ERecomputeUVsPropertiesIslandMode.generated.h"

UENUM()
enum class ERecomputeUVsPropertiesIslandMode : int32 {
    PolyGroups,
    ExistingUVs,
};


#pragma once
#include "CoreMinimal.h"
#include "ERecomputeUVsPropertiesUnwrapType.generated.h"

UENUM()
enum class ERecomputeUVsPropertiesUnwrapType : int32 {
    ExpMap,
    Conformal,
    SpectralConformal,
    IslandMerging,
};


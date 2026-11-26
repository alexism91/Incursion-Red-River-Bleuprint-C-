#pragma once
#include "CoreMinimal.h"
#include "ERecomputeUVsPropertiesLayoutType.generated.h"

UENUM()
enum class ERecomputeUVsPropertiesLayoutType : int32 {
    None,
    Repack,
    NormalizeToExistingBounds,
    NormalizeToBounds,
    NormalizeToWorld,
};


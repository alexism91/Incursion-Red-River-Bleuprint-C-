#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSmoothBoneWeightsType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptSmoothBoneWeightsType : uint8 {
    DirectDistance,
    GeodesicVoxel,
};


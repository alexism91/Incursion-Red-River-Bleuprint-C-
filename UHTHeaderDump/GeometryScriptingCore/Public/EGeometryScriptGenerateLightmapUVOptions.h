#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptGenerateLightmapUVOptions.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptGenerateLightmapUVOptions : uint8 {
    MatchTargetLODSetting,
    GenerateLightmapUVs,
    DoNotGenerateLightmapUVs,
};


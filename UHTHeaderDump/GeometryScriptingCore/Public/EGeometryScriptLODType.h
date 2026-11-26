#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptLODType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptLODType : uint8 {
    MaxAvailable,
    HiResSourceModel,
    SourceModel,
    RenderData,
};


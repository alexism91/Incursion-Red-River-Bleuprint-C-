#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeVertexTopology.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeVertexTopology : uint8 {
    CreateNew,
    UseExisting,
};


#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRemoveMeshSimplificationType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptRemoveMeshSimplificationType : uint8 {
    StandardQEM,
    VolumePreserving,
    AttributeAware,
};


#pragma once
#include "CoreMinimal.h"
#include "ESetMeshMaterialMode.generated.h"

UENUM(BlueprintType)
enum class ESetMeshMaterialMode : uint8 {
    Original,
    Checkerboard,
    Override,
};


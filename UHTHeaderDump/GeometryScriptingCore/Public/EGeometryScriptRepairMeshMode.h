#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRepairMeshMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptRepairMeshMode : uint8 {
    DeleteOnly,
    RepairOrDelete,
    RepairOrSkip,
};


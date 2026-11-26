#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptEmptySelectionBehavior.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptEmptySelectionBehavior : uint8 {
    FullMeshSelection,
    EmptySelection,
};


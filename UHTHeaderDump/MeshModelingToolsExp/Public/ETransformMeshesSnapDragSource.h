#pragma once
#include "CoreMinimal.h"
#include "ETransformMeshesSnapDragSource.generated.h"

UENUM(BlueprintType)
enum class ETransformMeshesSnapDragSource : uint8 {
    ClickPoint,
    Pivot,
    LastValue,
};


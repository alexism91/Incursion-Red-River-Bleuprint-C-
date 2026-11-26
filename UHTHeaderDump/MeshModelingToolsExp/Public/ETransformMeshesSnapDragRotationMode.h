#pragma once
#include "CoreMinimal.h"
#include "ETransformMeshesSnapDragRotationMode.generated.h"

UENUM(BlueprintType)
enum class ETransformMeshesSnapDragRotationMode : uint8 {
    Ignore,
    Align,
    AlignFlipped,
    LastValue,
};


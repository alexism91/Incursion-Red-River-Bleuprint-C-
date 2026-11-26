#pragma once
#include "CoreMinimal.h"
#include "EEditPivotSnapDragRotationMode.generated.h"

UENUM(BlueprintType)
enum class EEditPivotSnapDragRotationMode : uint8 {
    Align = 1,
    AlignFlipped,
    LastValue,
};


#pragma once
#include "CoreMinimal.h"
#include "EEditPivotToolActions.generated.h"

UENUM(BlueprintType)
enum class EEditPivotToolActions : uint8 {
    NoAction,
    Center,
    Bottom,
    Top,
    Left,
    Right,
    Front,
    Back,
    WorldOrigin,
};


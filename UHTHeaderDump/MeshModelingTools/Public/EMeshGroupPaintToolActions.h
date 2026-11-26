#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintToolActions.generated.h"

UENUM(BlueprintType)
enum class EMeshGroupPaintToolActions : uint8 {
    NoAction,
    ClearFrozen,
    FreezeCurrent,
    FreezeOthers,
    GrowCurrent,
    ShrinkCurrent,
    ClearCurrent,
    FloodFillCurrent,
    ClearAll,
};


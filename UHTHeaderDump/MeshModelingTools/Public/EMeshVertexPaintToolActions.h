#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintToolActions.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintToolActions : uint8 {
    NoAction,
    PaintAll,
    EraseAll,
    FillBlack,
    FillWhite,
    ApplyCurrentUtility,
};


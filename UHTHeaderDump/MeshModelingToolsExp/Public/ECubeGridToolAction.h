#pragma once
#include "CoreMinimal.h"
#include "ECubeGridToolAction.generated.h"

UENUM(BlueprintType)
enum class ECubeGridToolAction : uint8 {
    NoAction,
    Push,
    Pull,
    Flip,
    SlideForward,
    SlideBack,
    DecreaseGridPower,
    IncreaseGridPower,
    CornerMode,
    ResetFromActor,
    AcceptAndStartNew,
};


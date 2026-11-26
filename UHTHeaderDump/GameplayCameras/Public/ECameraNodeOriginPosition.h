#pragma once
#include "CoreMinimal.h"
#include "ECameraNodeOriginPosition.generated.h"

UENUM(BlueprintType)
enum class ECameraNodeOriginPosition : uint8 {
    CameraPose,
    ActiveContext,
    OwningContext,
    Pivot,
    Pawn,
};


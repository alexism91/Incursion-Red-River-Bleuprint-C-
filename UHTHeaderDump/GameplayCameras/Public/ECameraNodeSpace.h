#pragma once
#include "CoreMinimal.h"
#include "ECameraNodeSpace.generated.h"

UENUM(BlueprintType)
enum class ECameraNodeSpace : uint8 {
    CameraPose,
    ActiveContext,
    OwningContext,
    Pivot,
    Pawn,
    World,
};


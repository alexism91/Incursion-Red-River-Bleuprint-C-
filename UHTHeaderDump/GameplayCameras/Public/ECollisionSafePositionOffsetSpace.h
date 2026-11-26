#pragma once
#include "CoreMinimal.h"
#include "ECollisionSafePositionOffsetSpace.generated.h"

UENUM(BlueprintType)
enum class ECollisionSafePositionOffsetSpace : uint8 {
    ActiveContext,
    OwningContext,
    Pivot,
    CameraPose,
    Pawn,
};


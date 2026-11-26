#pragma once
#include "CoreMinimal.h"
#include "ECollisionSafePosition.generated.h"

UENUM(BlueprintType)
enum class ECollisionSafePosition : uint8 {
    ActiveContext,
    OwningContext,
    Pivot,
    Pawn,
};


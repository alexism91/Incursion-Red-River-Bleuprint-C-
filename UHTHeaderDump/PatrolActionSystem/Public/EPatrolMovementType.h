#pragma once
#include "CoreMinimal.h"
#include "EPatrolMovementType.generated.h"

UENUM(BlueprintType)
enum class EPatrolMovementType : uint8 {
    Clockwise,
    CounterClockwise,
};


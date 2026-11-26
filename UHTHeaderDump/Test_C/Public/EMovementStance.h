#pragma once
#include "CoreMinimal.h"
#include "EMovementStance.generated.h"

UENUM(BlueprintType)
enum class EMovementStance : uint8 {
    Prone,
    Crouch,
    Stand,
};


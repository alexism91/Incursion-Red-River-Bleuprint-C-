#pragma once
#include "CoreMinimal.h"
#include "EIRRMovementStance.generated.h"

UENUM(BlueprintType)
enum class EIRRMovementStance : uint8 {
    Proning,
    Crouching,
    Sneaking,
    Walking,
    Sprinting,
    TacSprinting,
};


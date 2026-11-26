#pragma once
#include "CoreMinimal.h"
#include "EIRRMovementState.generated.h"

UENUM(BlueprintType)
enum class EIRRMovementState : uint8 {
    None,
    Walking,
    Sprinting,
};


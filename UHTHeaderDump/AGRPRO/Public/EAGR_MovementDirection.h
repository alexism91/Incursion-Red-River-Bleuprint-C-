#pragma once
#include "CoreMinimal.h"
#include "EAGR_MovementDirection.generated.h"

UENUM(BlueprintType)
enum class EAGR_MovementDirection : uint8 {
    Forward,
    Backward,
    Left,
    Right,
};


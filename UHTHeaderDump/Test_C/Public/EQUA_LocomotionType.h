#pragma once
#include "CoreMinimal.h"
#include "EQUA_LocomotionType.generated.h"

UENUM(BlueprintType)
enum class EQUA_LocomotionType : uint8 {
    Idle,
    Walk,
    Jog,
    Sprint,
    Crouch,
};


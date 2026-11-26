#pragma once
#include "CoreMinimal.h"
#include "EIRRStance.generated.h"

UENUM(BlueprintType)
enum class EIRRStance : uint8 {
    Prone,
    Crouch,
    Standing,
};


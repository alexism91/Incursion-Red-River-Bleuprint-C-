#pragma once
#include "CoreMinimal.h"
#include "EQUA_MuzzleType.generated.h"

UENUM(BlueprintType)
enum class EQUA_MuzzleType : uint8 {
    NONE,
    Standard,
    Compensator,
    Suppressor,
};


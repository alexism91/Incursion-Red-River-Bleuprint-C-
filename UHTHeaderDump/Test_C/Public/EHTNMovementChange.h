#pragma once
#include "CoreMinimal.h"
#include "EHTNMovementChange.generated.h"

UENUM(BlueprintType)
enum class EHTNMovementChange : uint8 {
    NoChange,
    Enable,
    Disable,
};


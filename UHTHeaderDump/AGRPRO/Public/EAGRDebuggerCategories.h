#pragma once
#include "CoreMinimal.h"
#include "EAGRDebuggerCategories.generated.h"

UENUM(BlueprintType)
enum class EAGRDebuggerCategories : uint8 {
    Custom,
    AnimState,
    AimOffset,
    Rotation,
    Runtime,
    Movement,
    State,
    Leans,
    Setup,
};


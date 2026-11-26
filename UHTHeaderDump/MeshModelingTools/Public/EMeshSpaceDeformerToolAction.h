#pragma once
#include "CoreMinimal.h"
#include "EMeshSpaceDeformerToolAction.generated.h"

UENUM(BlueprintType)
enum class EMeshSpaceDeformerToolAction : uint8 {
    NoAction,
    ShiftToCenter,
};


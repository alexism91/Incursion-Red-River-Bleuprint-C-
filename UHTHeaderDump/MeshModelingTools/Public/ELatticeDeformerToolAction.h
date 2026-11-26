#pragma once
#include "CoreMinimal.h"
#include "ELatticeDeformerToolAction.generated.h"

UENUM(BlueprintType)
enum class ELatticeDeformerToolAction : uint8 {
    NoAction,
    Constrain,
    ClearConstraints,
};


#pragma once
#include "CoreMinimal.h"
#include "EAIOptimizationLevel.generated.h"

UENUM(BlueprintType)
enum class EAIOptimizationLevel : uint8 {
    Level0,
    Level1,
    Level2,
    Level3,
    Level4,
    UnPossessed,
};


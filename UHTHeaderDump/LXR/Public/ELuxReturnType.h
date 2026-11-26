#pragma once
#include "CoreMinimal.h"
#include "ELuxReturnType.generated.h"

UENUM()
enum class ELuxReturnType : int32 {
    AverageByTargets,
    AverageByPassedTargets,
    MaxOfPassedTargets,
    WeightedSocketImportance,
};


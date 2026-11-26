#pragma once
#include "CoreMinimal.h"
#include "EPCGPathfindingGoalMappingMode.generated.h"

UENUM(BlueprintType)
enum class EPCGPathfindingGoalMappingMode : uint8 {
    EachStartToNearestGoal,
    EachStartToEachGoal,
    EachStartToPairwiseGoal,
};


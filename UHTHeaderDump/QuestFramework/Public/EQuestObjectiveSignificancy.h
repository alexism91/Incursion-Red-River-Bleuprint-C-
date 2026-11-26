#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectiveSignificancy.generated.h"

UENUM(BlueprintType)
enum class EQuestObjectiveSignificancy : uint8 {
    Regular,
    Optional,
    ForceComplete,
    ForceFailure,
    ForceCompleteAndFailure,
    RequiredToComplete,
};


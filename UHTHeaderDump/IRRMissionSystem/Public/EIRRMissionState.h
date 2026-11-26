#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionState.generated.h"

UENUM(BlueprintType)
enum class EIRRMissionState : uint8 {
    NotStarted,
    InProgress,
    Completed,
    Failed,
    Archived,
};


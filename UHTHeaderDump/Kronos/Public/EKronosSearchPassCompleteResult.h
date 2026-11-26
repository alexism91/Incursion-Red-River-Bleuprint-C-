#pragma once
#include "CoreMinimal.h"
#include "EKronosSearchPassCompleteResult.generated.h"

UENUM(BlueprintType)
enum class EKronosSearchPassCompleteResult : uint8 {
    Failure,
    NoSession,
    Success,
};


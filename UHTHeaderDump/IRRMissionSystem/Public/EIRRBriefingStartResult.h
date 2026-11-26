#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingStartResult.generated.h"

UENUM(BlueprintType)
enum class EIRRBriefingStartResult : uint8 {
    Started,
    NothingToPlay,
    Refused,
    GaveUp,
};


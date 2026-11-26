#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingWaitTimeout.generated.h"

UENUM(BlueprintType)
enum class EIRRBriefingWaitTimeout : uint8 {
    Reroll,
    PlayAnyway,
    Cancel,
};


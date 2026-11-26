#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingPlayLimit.generated.h"

UENUM(BlueprintType)
enum class EIRRBriefingPlayLimit : uint8 {
    EveryEntry,
    OncePerSession,
    OncePerPlaythrough,
};


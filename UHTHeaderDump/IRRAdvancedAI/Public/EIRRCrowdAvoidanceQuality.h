#pragma once
#include "CoreMinimal.h"
#include "EIRRCrowdAvoidanceQuality.generated.h"

UENUM(BlueprintType)
enum class EIRRCrowdAvoidanceQuality : uint8 {
    Low,
    Medium,
    Good,
    High,
};


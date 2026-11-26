#pragma once
#include "CoreMinimal.h"
#include "EIRRBodyRotationMode.generated.h"

UENUM(BlueprintType)
enum class EIRRBodyRotationMode : uint8 {
    FollowDesired,
    TurnAtAngle,
};


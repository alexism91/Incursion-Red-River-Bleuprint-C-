#pragma once
#include "CoreMinimal.h"
#include "EIRRMoveToEngagePhase.generated.h"

UENUM(BlueprintType)
enum class EIRRMoveToEngagePhase : uint8 {
    Moving,
    Shooting,
};


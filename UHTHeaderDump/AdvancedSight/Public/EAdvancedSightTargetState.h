#pragma once
#include "CoreMinimal.h"
#include "EAdvancedSightTargetState.generated.h"

UENUM(BlueprintType)
enum class EAdvancedSightTargetState : uint8 {
    NotPerceived,
    Spotted,
    Perceived,
    Lost,
};


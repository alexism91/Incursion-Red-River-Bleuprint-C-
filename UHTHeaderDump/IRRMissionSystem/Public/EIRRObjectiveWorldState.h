#pragma once
#include "CoreMinimal.h"
#include "EIRRObjectiveWorldState.generated.h"

UENUM(BlueprintType)
enum class EIRRObjectiveWorldState : uint8 {
    Hidden,
    Locked,
    Active,
    Complete,
};


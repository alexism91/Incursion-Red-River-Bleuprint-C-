#pragma once
#include "CoreMinimal.h"
#include "EIRROperationGateTimeout.generated.h"

UENUM(BlueprintType)
enum class EIRROperationGateTimeout : uint8 {
    Reroll,
    ActivateAnyway,
    Cancel,
};


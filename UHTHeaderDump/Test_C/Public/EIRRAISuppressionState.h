#pragma once
#include "CoreMinimal.h"
#include "EIRRAISuppressionState.generated.h"

UENUM(BlueprintType)
enum class EIRRAISuppressionState : uint8 {
    None,
    Light,
    Moderate,
    Heavy,
    Extreme,
};


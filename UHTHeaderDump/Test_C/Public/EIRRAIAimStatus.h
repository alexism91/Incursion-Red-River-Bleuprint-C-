#pragma once
#include "CoreMinimal.h"
#include "EIRRAIAimStatus.generated.h"

UENUM(BlueprintType)
enum class EIRRAIAimStatus : uint8 {
    None,
    Aborted,
    Turning,
    Aiming,
    AimComplete,
};


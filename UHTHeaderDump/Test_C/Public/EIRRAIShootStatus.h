#pragma once
#include "CoreMinimal.h"
#include "EIRRAIShootStatus.generated.h"

UENUM(BlueprintType)
enum class EIRRAIShootStatus : uint8 {
    None,
    Aborted,
    Recovering,
    Shooting,
};


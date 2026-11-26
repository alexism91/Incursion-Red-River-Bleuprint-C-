#pragma once
#include "CoreMinimal.h"
#include "EMVVMBindingMode.generated.h"

UENUM(BlueprintType)
enum class EMVVMBindingMode : uint8 {
    OneTimeToDestination,
    OneWayToDestination,
    TwoWay,
    OneTimeToSource,
    OneWayToSource,
};


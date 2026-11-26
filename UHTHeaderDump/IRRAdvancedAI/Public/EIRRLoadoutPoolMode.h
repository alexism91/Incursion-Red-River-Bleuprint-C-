#pragma once
#include "CoreMinimal.h"
#include "EIRRLoadoutPoolMode.generated.h"

UENUM(BlueprintType)
enum class EIRRLoadoutPoolMode : uint8 {
    WeightedList,
    AnyOfCategory,
    Fixed,
};


#pragma once
#include "CoreMinimal.h"
#include "EOverriddenState.generated.h"

UENUM(BlueprintType)
enum class EOverriddenState : uint8 {
    NoOverrides,
    HasOverrides,
    AllOverridden,
    SubObjectsHasOverrides,
    Added,
};


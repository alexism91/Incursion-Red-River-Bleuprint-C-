#pragma once
#include "CoreMinimal.h"
#include "ERigLogicRotationType.generated.h"

UENUM(BlueprintType)
enum class ERigLogicRotationType : uint8 {
    None,
    EulerAngles = 3,
    Quaternions,
};


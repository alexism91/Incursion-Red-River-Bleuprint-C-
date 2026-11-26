#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeInstancePoolingMode.generated.h"

UENUM(BlueprintType)
enum class EHTNNodeInstancePoolingMode : uint8 {
    ProjectDefault,
    Enabled,
    Disabled,
};


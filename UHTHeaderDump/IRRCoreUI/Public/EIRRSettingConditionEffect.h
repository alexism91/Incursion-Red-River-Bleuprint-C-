#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingConditionEffect.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingConditionEffect : uint8 {
    Hide,
    Disable,
    DisableOptions,
    ForceValue,
};


#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingApplyMode.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingApplyMode : uint8 {
    Immediate,
    OnApply,
};


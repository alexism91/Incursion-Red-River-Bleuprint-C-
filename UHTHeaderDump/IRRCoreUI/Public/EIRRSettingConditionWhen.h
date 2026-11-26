#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingConditionWhen.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingConditionWhen : uint8 {
    Matches,
    DoesNotMatch,
};


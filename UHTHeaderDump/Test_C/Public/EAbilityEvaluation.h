#pragma once
#include "CoreMinimal.h"
#include "EAbilityEvaluation.generated.h"

UENUM(BlueprintType)
enum class EAbilityEvaluation : uint8 {
    IsAlreadyActive,
    IsNotGranted,
    IsBlocked,
};


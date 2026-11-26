#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionPriority.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTransitionPriority : uint8 {
    None,
    Low,
    Normal,
    Medium,
    High,
    Critical,
};


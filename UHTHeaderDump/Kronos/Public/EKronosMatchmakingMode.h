#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingMode.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingMode : uint8 {
    Default,
    CreateOnly,
    SearchOnly,
    JoinOnly,
};


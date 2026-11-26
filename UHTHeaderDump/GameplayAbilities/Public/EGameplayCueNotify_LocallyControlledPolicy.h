#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueNotify_LocallyControlledPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8 {
    Always,
    LocalOnly,
    NotLocal,
};


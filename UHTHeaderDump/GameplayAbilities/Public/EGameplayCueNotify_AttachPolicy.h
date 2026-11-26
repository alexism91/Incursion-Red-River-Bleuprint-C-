#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueNotify_AttachPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayCueNotify_AttachPolicy : uint8 {
    DoNotAttach,
    AttachToTarget,
};


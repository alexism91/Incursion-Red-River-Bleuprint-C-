#pragma once
#include "CoreMinimal.h"
#include "EGameplayCameraComponentActivationMode.generated.h"

UENUM(BlueprintType)
enum class EGameplayCameraComponentActivationMode : uint8 {
    Push,
    PushAndInsert,
    InsertOrPush,
};


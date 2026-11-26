#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagEventHandle.generated.h"

UENUM(BlueprintType)
enum class EGameplayTagEventHandle : uint8 {
    NONE,
    AddTag,
    RemoveTag,
};


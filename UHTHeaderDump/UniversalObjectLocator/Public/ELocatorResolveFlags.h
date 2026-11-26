#pragma once
#include "CoreMinimal.h"
#include "ELocatorResolveFlags.generated.h"

UENUM(BlueprintType)
enum class ELocatorResolveFlags : uint8 {
    None,
    Load,
    Unload,
    Async = 4,
    WillWait = 8,
    AsyncWait = 12,
};


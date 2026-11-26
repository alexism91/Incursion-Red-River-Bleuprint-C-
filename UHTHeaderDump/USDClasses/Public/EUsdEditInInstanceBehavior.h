#pragma once
#include "CoreMinimal.h"
#include "EUsdEditInInstanceBehavior.generated.h"

UENUM(BlueprintType)
enum class EUsdEditInInstanceBehavior : uint8 {
    Ignore,
    RemoveInstanceable,
    ShowPrompt,
};


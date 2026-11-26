#pragma once
#include "CoreMinimal.h"
#include "EUsdStageState.generated.h"

UENUM(BlueprintType)
enum class EUsdStageState : uint8 {
    Closed,
    Opened,
    OpenedAndLoaded,
};


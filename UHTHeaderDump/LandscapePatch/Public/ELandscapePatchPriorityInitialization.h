#pragma once
#include "CoreMinimal.h"
#include "ELandscapePatchPriorityInitialization.generated.h"

UENUM(BlueprintType)
enum class ELandscapePatchPriorityInitialization : uint8 {
    AcquireHighest,
    KeepOriginal,
    SmallIncrement,
};


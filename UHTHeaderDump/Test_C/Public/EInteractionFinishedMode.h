#pragma once
#include "CoreMinimal.h"
#include "EInteractionFinishedMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionFinishedMode : uint8 {
    Completed,
    Failed,
    Cancelled,
};


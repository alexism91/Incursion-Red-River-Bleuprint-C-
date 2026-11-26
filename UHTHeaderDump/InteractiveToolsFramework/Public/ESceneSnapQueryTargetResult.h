#pragma once
#include "CoreMinimal.h"
#include "ESceneSnapQueryTargetResult.generated.h"

UENUM(BlueprintType)
enum class ESceneSnapQueryTargetResult : uint8 {
    NotSnapped,
    Snapped,
    Disabled,
    Unsupported,
};


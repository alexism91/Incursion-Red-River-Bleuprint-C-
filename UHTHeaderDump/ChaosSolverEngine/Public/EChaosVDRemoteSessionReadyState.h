#pragma once
#include "CoreMinimal.h"
#include "EChaosVDRemoteSessionReadyState.generated.h"

UENUM(BlueprintType)
enum class EChaosVDRemoteSessionReadyState : uint8 {
    Ready,
    Busy,
};


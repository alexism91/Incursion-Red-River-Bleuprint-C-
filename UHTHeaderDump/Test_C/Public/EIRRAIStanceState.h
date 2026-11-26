#pragma once
#include "CoreMinimal.h"
#include "EIRRAIStanceState.generated.h"

UENUM(BlueprintType)
enum class EIRRAIStanceState : uint8 {
    Relaxed,
    LowReady,
    Scanning,
    Tracking,
    Engaged,
};


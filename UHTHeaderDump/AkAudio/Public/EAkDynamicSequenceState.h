#pragma once
#include "CoreMinimal.h"
#include "EAkDynamicSequenceState.generated.h"

UENUM(BlueprintType)
enum class EAkDynamicSequenceState : uint8 {
    Stopped,
    Playing,
    Stopping,
};


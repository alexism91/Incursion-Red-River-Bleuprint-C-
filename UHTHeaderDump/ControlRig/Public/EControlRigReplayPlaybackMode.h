#pragma once
#include "CoreMinimal.h"
#include "EControlRigReplayPlaybackMode.generated.h"

UENUM(BlueprintType)
enum class EControlRigReplayPlaybackMode : uint8 {
    Live,
    ReplayInputs,
    GroundTruth,
    Max,
};


#pragma once
#include "CoreMinimal.h"
#include "EMassProcessingPhase.generated.h"

UENUM(BlueprintType)
enum class EMassProcessingPhase : uint8 {
    PrePhysics,
    StartPhysics,
    DuringPhysics,
    EndPhysics,
    PostPhysics,
    FrameEnd,
    MAX,
};


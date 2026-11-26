#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneTimeWarpType.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneTimeWarpType : uint8 {
    FixedPlayRate,
    Custom,
    FixedTime,
    FrameRate,
    Loop,
    Clamp,
    LoopFloat,
    ClampFloat,
};


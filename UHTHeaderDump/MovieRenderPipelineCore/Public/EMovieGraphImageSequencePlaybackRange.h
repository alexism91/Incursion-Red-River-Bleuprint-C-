#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphImageSequencePlaybackRange.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphImageSequencePlaybackRange : uint8 {
    FirstFrameOnly,
    FullRange,
};


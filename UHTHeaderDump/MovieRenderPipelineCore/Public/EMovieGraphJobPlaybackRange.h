#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphJobPlaybackRange.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphJobPlaybackRange : uint8 {
    FirstJobOnly,
    AllJobs,
};


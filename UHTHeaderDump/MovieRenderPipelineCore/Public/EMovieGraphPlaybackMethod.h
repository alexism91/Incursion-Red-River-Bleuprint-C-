#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphPlaybackMethod.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphPlaybackMethod : uint8 {
    OperatingSystem,
    CustomViewer,
};


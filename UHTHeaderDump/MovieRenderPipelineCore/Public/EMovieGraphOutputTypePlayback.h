#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphOutputTypePlayback.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphOutputTypePlayback : uint8 {
    UsePriorityOrder,
    PlayAllOutputTypes,
};


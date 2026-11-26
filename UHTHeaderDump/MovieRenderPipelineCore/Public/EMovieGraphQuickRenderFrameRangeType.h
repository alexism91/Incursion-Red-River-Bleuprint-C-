#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphQuickRenderFrameRangeType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphQuickRenderFrameRangeType : uint8 {
    PlaybackRange,
    SelectionRange,
    Custom,
};


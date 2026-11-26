#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphRenderLayerPlaybackRange.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphRenderLayerPlaybackRange : uint8 {
    FirstRenderLayerOnly,
    AllRenderLayers,
};


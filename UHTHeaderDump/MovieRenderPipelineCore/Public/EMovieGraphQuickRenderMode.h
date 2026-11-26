#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphQuickRenderMode.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphQuickRenderMode : uint8 {
    CurrentSequence,
    UseViewportCameraInSequence,
    CurrentViewport,
    SelectedCameras,
};


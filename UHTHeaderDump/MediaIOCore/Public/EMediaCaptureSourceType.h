#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureSourceType.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureSourceType : uint8 {
    RENDER_TARGET,
    SCENE_VIEWPORT,
    RHI_RESOURCE,
};


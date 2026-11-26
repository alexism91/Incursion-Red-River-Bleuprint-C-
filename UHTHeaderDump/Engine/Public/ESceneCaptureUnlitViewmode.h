#pragma once
#include "CoreMinimal.h"
#include "ESceneCaptureUnlitViewmode.generated.h"

UENUM(BlueprintType)
enum class ESceneCaptureUnlitViewmode : uint8 {
    Disabled,
    Capture,
    CaptureOrCustomRenderPass,
};


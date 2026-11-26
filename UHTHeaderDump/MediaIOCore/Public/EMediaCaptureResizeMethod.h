#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureResizeMethod.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureResizeMethod : uint8 {
    None,
    ResizeSource,
    ResizeInRenderPass,
    ResizeInCapturePass,
};


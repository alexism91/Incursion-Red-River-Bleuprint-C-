#pragma once
#include "CoreMinimal.h"
#include "EMediaCapturePhase.generated.h"

UENUM(BlueprintType)
enum class EMediaCapturePhase : uint8 {
    BeforePostProcessing,
    AfterMotionBlur,
    AfterToneMap,
    AfterFXAA,
    PostRender,
    EndFrame,
};


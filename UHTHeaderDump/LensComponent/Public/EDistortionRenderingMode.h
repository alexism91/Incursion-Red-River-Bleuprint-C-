#pragma once
#include "CoreMinimal.h"
#include "EDistortionRenderingMode.generated.h"

UENUM(BlueprintType)
enum class EDistortionRenderingMode : uint8 {
    PostProcessMaterial,
    SceneViewExtension,
};


#pragma once
#include "CoreMinimal.h"
#include "ESmoothCameraBlendType.generated.h"

UENUM()
enum class ESmoothCameraBlendType : int32 {
    SmoothStep,
    SmootherStep,
};


#pragma once
#include "CoreMinimal.h"
#include "ETextureRenderTargetSampleCount.generated.h"

UENUM(BlueprintType)
enum class ETextureRenderTargetSampleCount : uint8 {
    RTSC_1,
    RTSC_2,
    RTSC_4,
    RTSC_8,
};


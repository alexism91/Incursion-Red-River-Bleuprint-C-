#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererMotionVectorSetting.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRendererMotionVectorSetting : uint8 {
    AutoDetect,
    Precise,
    Approximate,
    Disable,
};


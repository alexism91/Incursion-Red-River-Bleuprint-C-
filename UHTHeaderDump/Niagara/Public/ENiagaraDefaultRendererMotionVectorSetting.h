#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDefaultRendererMotionVectorSetting.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8 {
    Precise,
    Approximate,
};


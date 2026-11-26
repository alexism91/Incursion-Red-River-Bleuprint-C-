#pragma once
#include "CoreMinimal.h"
#include "ECameraVariableSetterBlendType.generated.h"

UENUM(BlueprintType)
enum class ECameraVariableSetterBlendType : uint8 {
    None,
    Linear,
    SmoothStep,
    SmootherStep,
};


#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeEvaluationMode.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeEvaluationMode : uint8 {
    Inline,
    VisualLayer,
};


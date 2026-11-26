#pragma once
#include "CoreMinimal.h"
#include "EFIZEvaluationMode.generated.h"

UENUM(BlueprintType)
enum class EFIZEvaluationMode : uint8 {
    UseLiveLink,
    UseCameraSettings,
    UseRecordedValues,
    Manual,
    DoNotEvaluate,
};


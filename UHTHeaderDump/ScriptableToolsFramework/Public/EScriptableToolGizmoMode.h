#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoMode.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoMode : uint8 {
    TranslationOnly,
    RotationOnly,
    ScaleOnly,
    Combined,
    FromViewportSettings,
};


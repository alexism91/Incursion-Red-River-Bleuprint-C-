#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoRotation.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoRotation : uint8 {
    None,
    RotateAxisX = 2,
    RotateAxisY = 4,
    RotateAxisZ = 8,
    FreeRotate = 128,
    All = 255,
};


#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoScale.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoScale : uint8 {
    None,
    ScaleAxisX = 2,
    ScaleAxisY = 4,
    ScaleAxisZ = 8,
    ScalePlaneXY = 16,
    ScalePlaneXZ = 32,
    ScalePlaneYZ = 64,
    ScaleUniform = 128,
    All = 255,
};


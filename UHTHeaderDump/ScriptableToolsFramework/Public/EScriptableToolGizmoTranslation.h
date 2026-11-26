#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoTranslation.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoTranslation : uint8 {
    None,
    TranslateAxisX = 2,
    TranslateAxisY = 4,
    TranslateAxisZ = 8,
    TranslatePlaneXY = 16,
    TranslatePlaneXZ = 32,
    TranslatePlaneYZ = 64,
    FreeTranslate = 128,
    All = 255,
};


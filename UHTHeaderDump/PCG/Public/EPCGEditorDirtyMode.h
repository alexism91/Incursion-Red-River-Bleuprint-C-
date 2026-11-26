#pragma once
#include "CoreMinimal.h"
#include "EPCGEditorDirtyMode.generated.h"

UENUM(BlueprintType)
enum class EPCGEditorDirtyMode : uint8 {
    Normal,
    Preview,
    LoadAsPreview,
};


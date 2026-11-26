#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoStateChangeType.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoStateChangeType : uint8 {
    BeginTransform,
    EndTransform,
    UndoRedo,
};


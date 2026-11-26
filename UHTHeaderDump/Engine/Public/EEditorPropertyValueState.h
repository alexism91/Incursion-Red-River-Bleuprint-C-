#pragma once
#include "CoreMinimal.h"
#include "EEditorPropertyValueState.generated.h"

UENUM(BlueprintType)
enum class EEditorPropertyValueState : uint8 {
    Default,
    Overridden,
    NotFound,
    AccessDenied,
};


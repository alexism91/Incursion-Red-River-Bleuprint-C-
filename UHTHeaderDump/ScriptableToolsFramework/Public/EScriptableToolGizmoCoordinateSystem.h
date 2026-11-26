#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolGizmoCoordinateSystem.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolGizmoCoordinateSystem : uint8 {
    World,
    Local,
    FromViewportSettings,
};


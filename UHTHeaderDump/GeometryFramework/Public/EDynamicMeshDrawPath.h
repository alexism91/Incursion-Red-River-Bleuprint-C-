#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshDrawPath.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshDrawPath : uint8 {
    DynamicDraw,
    StaticDraw,
};


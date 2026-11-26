#pragma once
#include "CoreMinimal.h"
#include "ERuntimeNavAllowedComponentType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeNavAllowedComponentType : uint8 {
    None,
    SplineComponents,
    StaticMeshComponents,
    InstancedStaticMeshComponents = 4,
    RuntimeNavDataComponents = 8,
};


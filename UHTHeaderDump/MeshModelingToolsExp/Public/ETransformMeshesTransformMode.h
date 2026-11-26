#pragma once
#include "CoreMinimal.h"
#include "ETransformMeshesTransformMode.generated.h"

UENUM(BlueprintType)
enum class ETransformMeshesTransformMode : uint8 {
    SharedGizmo,
    SharedGizmoLocal,
    PerObjectGizmo,
    LastValue,
};


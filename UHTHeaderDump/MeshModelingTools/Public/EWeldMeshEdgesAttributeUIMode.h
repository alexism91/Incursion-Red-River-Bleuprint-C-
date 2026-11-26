#pragma once
#include "CoreMinimal.h"
#include "EWeldMeshEdgesAttributeUIMode.generated.h"

UENUM(BlueprintType)
enum class EWeldMeshEdgesAttributeUIMode : uint8 {
    None,
    OnWeldedMeshEdgesOnly,
    OnFullMesh,
};


#pragma once
#include "CoreMinimal.h"
#include "ECreateMeshObjectSourceMeshType.generated.h"

UENUM(BlueprintType)
enum class ECreateMeshObjectSourceMeshType : uint8 {
    MeshDescription,
    DynamicMesh,
};


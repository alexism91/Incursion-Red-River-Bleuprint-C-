#pragma once
#include "CoreMinimal.h"
#include "EAkMeshType.generated.h"

UENUM(BlueprintType)
enum class EAkMeshType : uint8 {
    StaticMesh,
    CollisionMesh,
};


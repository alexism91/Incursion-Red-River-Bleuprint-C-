#pragma once
#include "CoreMinimal.h"
#include "ECreateObjectTypeHint.generated.h"

UENUM(BlueprintType)
enum class ECreateObjectTypeHint : uint8 {
    Undefined,
    StaticMesh,
    Volume,
    DynamicMeshActor,
};


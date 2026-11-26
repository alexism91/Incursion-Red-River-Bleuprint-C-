#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.generated.h"

UENUM(BlueprintType)
enum class ECreateModelingObjectResult : uint8 {
    Ok,
    Cancelled,
    Failed_Unknown,
    Failed_NoAPIFound,
    Failed_InvalidWorld,
    Failed_InvalidMesh,
    Failed_InvalidTexture,
    Failed_AssetCreationFailed,
    Failed_ActorCreationFailed,
    Failed_InvalidMaterial,
    Failed_InvalidActor,
};


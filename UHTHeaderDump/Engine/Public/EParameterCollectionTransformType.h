#pragma once
#include "CoreMinimal.h"
#include "EParameterCollectionTransformType.generated.h"

UENUM(BlueprintType)
enum class EParameterCollectionTransformType : uint8 {
    Position,
    Vector,
    Projection,
    LocalToWorld,
    WorldToLocal,
};


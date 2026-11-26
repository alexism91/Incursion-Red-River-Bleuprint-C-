#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMeshCollision.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMeshCollision : uint8 {
    Box,
    Sphere,
    Capsule,
    Convex10DOP_X,
    Convex10DOP_Y,
    Convex10DOP_Z,
    Convex18DOP,
    Convex26DOP,
    None = 255,
};


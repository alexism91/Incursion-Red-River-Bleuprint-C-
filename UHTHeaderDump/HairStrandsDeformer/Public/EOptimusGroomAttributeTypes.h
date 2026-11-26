#pragma once
#include "CoreMinimal.h"
#include "EOptimusGroomAttributeTypes.generated.h"

UENUM(BlueprintType)
enum class EOptimusGroomAttributeTypes : uint8 {
    None,
    Bool,
    Int,
    IntVector2,
    IntVector3,
    IntVector4,
    Uint,
    Float,
    Vector2,
    Vector3,
    Vector4,
    LinearColor,
    Quat,
    Rotator,
    Transform,
    Matrix3x4,
};


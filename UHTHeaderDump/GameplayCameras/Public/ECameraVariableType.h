#pragma once
#include "CoreMinimal.h"
#include "ECameraVariableType.generated.h"

UENUM()
enum class ECameraVariableType : int32 {
    Boolean,
    Integer32,
    Float,
    Double,
    Vector2f,
    Vector2d,
    Vector3f,
    Vector3d,
    Vector4f,
    Vector4d,
    Rotator3f,
    Rotator3d,
    Transform3f,
    Transform3d,
    BlendableStruct,
};


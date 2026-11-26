#pragma once
#include "CoreMinimal.h"
#include "EMaterialExpressionConvertType.generated.h"

UENUM(BlueprintType)
enum class EMaterialExpressionConvertType : uint8 {
    Scalar,
    Vector2,
    Vector3,
    Vector4,
};


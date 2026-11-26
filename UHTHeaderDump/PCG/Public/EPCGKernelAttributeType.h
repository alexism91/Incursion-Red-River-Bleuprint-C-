#pragma once
#include "CoreMinimal.h"
#include "EPCGKernelAttributeType.generated.h"

UENUM(BlueprintType)
enum class EPCGKernelAttributeType : uint8 {
    Bool = 1,
    Int,
    Float,
    Float2,
    Float3,
    Float4,
    Rotator,
    Quat,
    Transform,
    StringKey,
    Name,
    Invalid = 255,
};


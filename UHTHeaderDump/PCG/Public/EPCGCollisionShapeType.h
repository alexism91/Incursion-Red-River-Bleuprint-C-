#pragma once
#include "CoreMinimal.h"
#include "EPCGCollisionShapeType.generated.h"

UENUM(BlueprintType)
enum class EPCGCollisionShapeType : uint8 {
    Line,
    Box,
    Sphere,
    Capsule,
};


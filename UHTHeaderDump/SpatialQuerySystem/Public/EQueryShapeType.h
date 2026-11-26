#pragma once
#include "CoreMinimal.h"
#include "EQueryShapeType.generated.h"

UENUM(BlueprintType)
namespace EQueryShapeType {
    enum Type {
        Point,
        Sphere,
        Box,
        Capsule,
    };
}


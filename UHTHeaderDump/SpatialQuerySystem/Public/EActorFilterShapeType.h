#pragma once
#include "CoreMinimal.h"
#include "EActorFilterShapeType.generated.h"

UENUM(BlueprintType)
namespace EActorFilterShapeType {
    enum Type {
        Any,
        Point,
        Sphere,
        Box,
        Capsule,
    };
}


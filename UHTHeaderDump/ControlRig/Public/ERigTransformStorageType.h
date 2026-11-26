#pragma once
#include "CoreMinimal.h"
#include "ERigTransformStorageType.generated.h"

UENUM(BlueprintType)
namespace ERigTransformStorageType {
    enum Type {
        Pose,
        Offset,
        Shape,
        NumStorageTypes,
    };
}


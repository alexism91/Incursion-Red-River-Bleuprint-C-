#pragma once
#include "CoreMinimal.h"
#include "EMakeMeshTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EMakeMeshTypeEnum : uint8 {
    Sphere,
    Capsule,
    Cylinder,
};


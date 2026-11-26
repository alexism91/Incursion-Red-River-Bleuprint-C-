#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialSoftCollisionMode.generated.h"

UENUM(BlueprintType)
enum class EPhysicalMaterialSoftCollisionMode : uint8 {
    None,
    RelativeThickness,
    AbsoluteThickess,
};


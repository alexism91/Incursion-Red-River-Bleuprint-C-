#pragma once
#include "CoreMinimal.h"
#include "EConvexDecompositionMethod.generated.h"

UENUM()
enum class EConvexDecompositionMethod : int32 {
    NavigationDriven,
    VolumetricError,
};


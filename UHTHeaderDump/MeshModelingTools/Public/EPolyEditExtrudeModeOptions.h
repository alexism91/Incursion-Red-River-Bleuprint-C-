#pragma once
#include "CoreMinimal.h"
#include "EPolyEditExtrudeModeOptions.generated.h"

UENUM()
enum class EPolyEditExtrudeModeOptions : int32 {
    SingleDirection = 3,
    SelectedTriangleNormals = 0,
    SelectedTriangleNormalsEven,
};


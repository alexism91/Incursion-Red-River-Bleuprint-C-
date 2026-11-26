#pragma once
#include "CoreMinimal.h"
#include "EPolyEditOffsetModeOptions.generated.h"

UENUM()
enum class EPolyEditOffsetModeOptions : int32 {
    VertexNormals = 2,
    SelectedTriangleNormals = 0,
    SelectedTriangleNormalsEven,
};


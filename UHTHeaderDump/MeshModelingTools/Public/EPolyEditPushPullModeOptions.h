#pragma once
#include "CoreMinimal.h"
#include "EPolyEditPushPullModeOptions.generated.h"

UENUM()
enum class EPolyEditPushPullModeOptions : int32 {
    SelectedTriangleNormals,
    SelectedTriangleNormalsEven,
    SingleDirection = 3,
    VertexNormals = 2,
};


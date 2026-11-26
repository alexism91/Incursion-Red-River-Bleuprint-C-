#pragma once
#include "CoreMinimal.h"
#include "EPolyEditCutPlaneOrientation.generated.h"

UENUM()
enum class EPolyEditCutPlaneOrientation : int32 {
    FaceNormals,
    ViewDirection,
};


#pragma once
#include "CoreMinimal.h"
#include "EConvertToPolygonsMode.generated.h"

UENUM()
enum class EConvertToPolygonsMode : int32 {
    FaceNormalDeviation,
    FindPolygons,
    FromMaterialIDs = 7,
    FromUVIslands = 2,
    FromNormalSeams,
    FromConnectedTris,
    FromFurthestPointSampling,
    CopyFromLayer,
};


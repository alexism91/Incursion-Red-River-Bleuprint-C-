#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptOffsetFacesType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptOffsetFacesType : uint8 {
    VertexNormal,
    FaceNormal,
    ParallelFaceOffset,
};


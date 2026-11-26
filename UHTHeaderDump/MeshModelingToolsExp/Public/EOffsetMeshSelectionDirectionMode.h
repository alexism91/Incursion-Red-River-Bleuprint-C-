#pragma once
#include "CoreMinimal.h"
#include "EOffsetMeshSelectionDirectionMode.generated.h"

UENUM(BlueprintType)
enum class EOffsetMeshSelectionDirectionMode : uint8 {
    VertexNormals,
    FaceNormals,
    ConstantWidth,
};


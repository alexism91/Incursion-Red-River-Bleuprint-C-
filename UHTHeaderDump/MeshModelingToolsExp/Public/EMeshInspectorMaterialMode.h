#pragma once
#include "CoreMinimal.h"
#include "EMeshInspectorMaterialMode.generated.h"

UENUM(BlueprintType)
enum class EMeshInspectorMaterialMode : uint8 {
    Original,
    FlatShaded,
    Grey,
    Transparent,
    TangentNormal,
    VertexColor,
    GroupColor,
    Checkerboard,
    Override,
};


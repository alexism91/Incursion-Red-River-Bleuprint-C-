#pragma once
#include "CoreMinimal.h"
#include "EGeometrySelectionElementType.generated.h"

UENUM(BlueprintType)
enum class EGeometrySelectionElementType : uint8 {
    Vertex = 1,
    Edge,
    Face = 4,
};


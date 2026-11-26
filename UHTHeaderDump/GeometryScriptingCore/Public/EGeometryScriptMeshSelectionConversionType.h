#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshSelectionConversionType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMeshSelectionConversionType : uint8 {
    NoConversion,
    ToVertices,
    ToTriangles,
    ToPolygroups,
};


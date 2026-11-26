#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshEditPolygroupMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMeshEditPolygroupMode : uint8 {
    PreserveExisting,
    AutoGenerateNew,
    SetConstant,
};


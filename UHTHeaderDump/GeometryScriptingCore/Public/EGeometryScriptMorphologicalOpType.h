#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMorphologicalOpType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMorphologicalOpType : uint8 {
    Dilate,
    Contract,
    Close,
    Open,
};


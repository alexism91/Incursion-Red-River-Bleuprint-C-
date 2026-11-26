#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexSculptBrushFilterType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexSculptBrushFilterType : uint8 {
    None,
    Component,
    PolyGroup,
};


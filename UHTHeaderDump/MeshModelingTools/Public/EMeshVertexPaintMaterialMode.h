#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintMaterialMode.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintMaterialMode : uint8 {
    LitVertexColor,
    UnlitVertexColor,
    OriginalMaterial,
};


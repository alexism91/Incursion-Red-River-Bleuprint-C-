#pragma once
#include "CoreMinimal.h"
#include "EMeshEditingMaterialModes.generated.h"

UENUM()
enum class EMeshEditingMaterialModes : int32 {
    ExistingMaterial,
    Diffuse,
    Grey,
    Soft,
    Transparent,
    TangentNormal,
    VertexColor,
    CustomImage,
    Custom,
};


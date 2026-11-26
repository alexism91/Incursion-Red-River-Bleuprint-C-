#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMaterialType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeVirtualTextureMaterialType : uint8 {
    BaseColor,
    Mask4,
    BaseColor_Normal_Roughness,
    BaseColor_Normal_Specular,
    BaseColor_Normal_Specular_YCoCg,
    BaseColor_Normal_Specular_Mask_YCoCg,
    WorldHeight,
    Displacement,
    Count,
};


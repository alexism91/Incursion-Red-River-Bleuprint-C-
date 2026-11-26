#pragma once
#include "CoreMinimal.h"
#include "EBodyTextureType.generated.h"

UENUM(BlueprintType)
enum class EBodyTextureType : uint8 {
    Body_Basecolor,
    Body_Normal,
    Body_Cavity,
    Body_Underwear_Basecolor,
    Body_Underwear_Normal,
    Body_Underwear_Mask,
    Chest_Basecolor,
    Chest_Normal,
    Chest_Cavity,
    Chest_Underwear_Basecolor,
    Chest_Underwear_Normal,
    Count,
};


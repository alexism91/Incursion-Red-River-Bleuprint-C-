#pragma once
#include "CoreMinimal.h"
#include "EFaceTextureType.generated.h"

UENUM(BlueprintType)
enum class EFaceTextureType : uint8 {
    Basecolor,
    Basecolor_Animated_CM1,
    Basecolor_Animated_CM2,
    Basecolor_Animated_CM3,
    Normal,
    Normal_Animated_WM1,
    Normal_Animated_WM2,
    Normal_Animated_WM3,
    Cavity,
    Count,
};


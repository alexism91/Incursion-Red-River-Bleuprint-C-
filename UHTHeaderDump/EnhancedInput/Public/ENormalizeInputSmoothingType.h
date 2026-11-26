#pragma once
#include "CoreMinimal.h"
#include "ENormalizeInputSmoothingType.generated.h"

UENUM(BlueprintType)
enum class ENormalizeInputSmoothingType : uint8 {
    None,
    Lerp,
    Interp_To,
    Interp_Constant_To,
    Interp_Circular_In,
    Interp_Circular_Out,
    Interp_Circular_In_Out,
    Interp_Ease_In,
    Interp_Ease_Out,
    Interp_Ease_In_Out,
    Interp_Expo_In,
    Interp_Expo_Out,
    Interp_Expo_In_Out,
    Interp_Sin_In,
    Interp_Sin_Out,
    Interp_Sin_In_Out,
};


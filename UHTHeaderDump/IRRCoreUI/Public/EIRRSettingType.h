#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingType.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingType : uint8 {
    Switcher,
    Selector,
    Slider,
    Keybind,
    Color,
};


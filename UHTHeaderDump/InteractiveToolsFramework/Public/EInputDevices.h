#pragma once
#include "CoreMinimal.h"
#include "EInputDevices.generated.h"

UENUM()
enum class EInputDevices : int32 {
    None,
    Keyboard,
    Mouse,
    Gamepad = 4,
    OculusTouch = 8,
    HTCViveWands = 16,
    AnySpatialDevice = 24,
    TabletFingers = 1024,
};


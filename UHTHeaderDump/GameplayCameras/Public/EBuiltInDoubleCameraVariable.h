#pragma once
#include "CoreMinimal.h"
#include "EBuiltInDoubleCameraVariable.generated.h"

UENUM()
enum class EBuiltInDoubleCameraVariable : int32 {
    None,
    Yaw,
    Pitch,
    Roll,
    Zoom,
};


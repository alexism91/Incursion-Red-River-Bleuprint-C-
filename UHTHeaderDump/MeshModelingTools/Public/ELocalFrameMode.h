#pragma once
#include "CoreMinimal.h"
#include "ELocalFrameMode.generated.h"

UENUM()
enum class ELocalFrameMode : int32 {
    FromObject,
    FromGeometry,
};


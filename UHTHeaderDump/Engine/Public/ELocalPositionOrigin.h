#pragma once
#include "CoreMinimal.h"
#include "ELocalPositionOrigin.generated.h"

UENUM()
enum class ELocalPositionOrigin : int32 {
    Instance,
    InstancePreSkinning,
    Primitive,
};


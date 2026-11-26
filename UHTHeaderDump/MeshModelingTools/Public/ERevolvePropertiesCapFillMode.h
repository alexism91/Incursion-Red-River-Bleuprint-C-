#pragma once
#include "CoreMinimal.h"
#include "ERevolvePropertiesCapFillMode.generated.h"

UENUM(BlueprintType)
enum class ERevolvePropertiesCapFillMode : uint8 {
    None,
    CenterFan,
    Delaunay,
    EarClipping,
};


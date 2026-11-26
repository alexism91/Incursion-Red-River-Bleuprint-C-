#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMaterialQuality.generated.h"

UENUM(BlueprintType)
enum class ERuntimeVirtualTextureMaterialQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
};


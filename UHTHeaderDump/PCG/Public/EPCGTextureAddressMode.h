#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureAddressMode.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureAddressMode : uint8 {
    Clamp,
    Wrap,
};


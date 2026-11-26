#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeBitDepth.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeBitDepth : uint8 {
    ChannelBits8,
    ChannelBits16,
};


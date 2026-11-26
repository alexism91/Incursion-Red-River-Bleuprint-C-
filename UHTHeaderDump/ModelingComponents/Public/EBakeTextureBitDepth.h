#pragma once
#include "CoreMinimal.h"
#include "EBakeTextureBitDepth.generated.h"

UENUM()
enum class EBakeTextureBitDepth : int32 {
    ChannelBits8,
    ChannelBits16,
};


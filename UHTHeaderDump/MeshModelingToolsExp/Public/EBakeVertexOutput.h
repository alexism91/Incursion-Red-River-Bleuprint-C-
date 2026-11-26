#pragma once
#include "CoreMinimal.h"
#include "EBakeVertexOutput.generated.h"

UENUM()
enum class EBakeVertexOutput : int32 {
    RGBA,
    PerChannel,
};


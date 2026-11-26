#pragma once
#include "CoreMinimal.h"
#include "EBakeVertexChannel.generated.h"

UENUM()
enum class EBakeVertexChannel : int32 {
    R,
    G,
    B,
    A,
    RGBA,
};


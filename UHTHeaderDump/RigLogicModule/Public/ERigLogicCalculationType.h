#pragma once
#include "CoreMinimal.h"
#include "ERigLogicCalculationType.generated.h"

UENUM(BlueprintType)
enum class ERigLogicCalculationType : uint8 {
    Scalar,
    SSE,
    AVX,
    NEON,
    AnyVector,
};


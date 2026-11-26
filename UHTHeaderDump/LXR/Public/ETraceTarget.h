#pragma once
#include "CoreMinimal.h"
#include "ETraceTarget.generated.h"

UENUM(BlueprintType)
enum class ETraceTarget : uint8 {
    None,
    ActorLocation,
    Sockets,
    VectorArray,
    ActorBounds,
};


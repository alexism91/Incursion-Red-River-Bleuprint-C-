#pragma once
#include "CoreMinimal.h"
#include "ELXRDebugFeature.generated.h"

UENUM(BlueprintType)
enum class ELXRDebugFeature : uint8 {
    None,
    Direct,
    Sense,
    Capture,
    Sockets,
};


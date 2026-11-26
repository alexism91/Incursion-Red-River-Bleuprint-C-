#pragma once
#include "CoreMinimal.h"
#include "EOverrideBlockOnSlowStreaming.generated.h"

UENUM(BlueprintType)
enum class EOverrideBlockOnSlowStreaming : uint8 {
    NoOverride,
    Blocking,
    NotBlocking,
};


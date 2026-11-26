#pragma once
#include "CoreMinimal.h"
#include "EInputBufferMode.generated.h"

UENUM(BlueprintType)
enum class EInputBufferMode : uint8 {
    Disabled,
    FirstCommand,
    LastCommand,
};


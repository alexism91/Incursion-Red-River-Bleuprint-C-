#pragma once
#include "CoreMinimal.h"
#include "EUpdateReady.generated.h"

UENUM(BlueprintType)
enum class EUpdateReady : uint8 {
    None,
    Ready,
    Skip,
    Fail,
};


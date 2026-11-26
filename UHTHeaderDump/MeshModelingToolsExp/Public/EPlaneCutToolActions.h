#pragma once
#include "CoreMinimal.h"
#include "EPlaneCutToolActions.generated.h"

UENUM(BlueprintType)
enum class EPlaneCutToolActions : uint8 {
    NoAction,
    Cut,
    FlipPlane,
};


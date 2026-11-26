#pragma once
#include "CoreMinimal.h"
#include "EQueryMovementState.generated.h"

UENUM(BlueprintType)
namespace EQueryMovementState {
    enum Type {
        Static,
        Dynamic,
    };
}


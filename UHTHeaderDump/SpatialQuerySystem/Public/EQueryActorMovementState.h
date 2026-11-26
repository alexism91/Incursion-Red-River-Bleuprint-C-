#pragma once
#include "CoreMinimal.h"
#include "EQueryActorMovementState.generated.h"

UENUM(BlueprintType)
namespace EQueryActorMovementState {
    enum Type {
        All,
        Static,
        Dynamic,
    };
}


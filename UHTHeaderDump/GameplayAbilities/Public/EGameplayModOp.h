#pragma once
#include "CoreMinimal.h"
#include "EGameplayModOp.generated.h"

UENUM(BlueprintType)
namespace EGameplayModOp {
    enum Type {
        AddBase,
        MultiplyAdditive,
        DivideAdditive,
        MultiplyCompound = 4,
        AddFinal,
        Max,
        Additive = AddBase,
        Multiplicitive = MultiplyAdditive,
        Division = DivideAdditive,
        Override,
    };
}


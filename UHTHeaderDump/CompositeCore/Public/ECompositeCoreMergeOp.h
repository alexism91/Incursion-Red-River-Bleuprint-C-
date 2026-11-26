#pragma once
#include "CoreMinimal.h"
#include "ECompositeCoreMergeOp.generated.h"

UENUM(BlueprintType)
enum class ECompositeCoreMergeOp : uint8 {
    None,
    Over,
    Add,
    Multiply,
    Divide,
};


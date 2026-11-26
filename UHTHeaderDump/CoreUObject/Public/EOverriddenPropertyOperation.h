#pragma once
#include "CoreMinimal.h"
#include "EOverriddenPropertyOperation.generated.h"

UENUM(BlueprintType)
enum class EOverriddenPropertyOperation : uint8 {
    None,
    Modified,
    Replace,
    Add,
    Remove,
    SubObjectsShadowing,
};


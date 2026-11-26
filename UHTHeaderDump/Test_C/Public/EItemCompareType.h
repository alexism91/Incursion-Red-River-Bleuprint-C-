#pragma once
#include "CoreMinimal.h"
#include "EItemCompareType.generated.h"

UENUM(BlueprintType)
enum class EItemCompareType : uint8 {
    Add,
    Remove,
    Replace,
};


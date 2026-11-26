#pragma once
#include "CoreMinimal.h"
#include "EStatItemModifyType.generated.h"

UENUM(BlueprintType)
enum class EStatItemModifyType : uint8 {
    None,
    Base,
    Add,
    Multiply,
};


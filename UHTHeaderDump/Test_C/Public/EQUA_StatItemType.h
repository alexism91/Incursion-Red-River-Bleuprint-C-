#pragma once
#include "CoreMinimal.h"
#include "EQUA_StatItemType.generated.h"

UENUM(BlueprintType)
enum class EQUA_StatItemType : uint8 {
    StaticValue,
    Modifier,
};


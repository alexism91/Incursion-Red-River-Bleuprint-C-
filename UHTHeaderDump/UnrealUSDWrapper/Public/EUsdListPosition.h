#pragma once
#include "CoreMinimal.h"
#include "EUsdListPosition.generated.h"

UENUM(BlueprintType)
enum class EUsdListPosition : uint8 {
    FrontOfPrependList,
    BackOfPrependList,
    FrontOfAppendList,
    BackOfAppendList,
};


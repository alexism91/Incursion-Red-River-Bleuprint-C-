#pragma once
#include "CoreMinimal.h"
#include "ENetworkHandleMethod.generated.h"

UENUM(BlueprintType)
enum class ENetworkHandleMethod : uint8 {
    KeepEnabled,
    Disable,
};


#pragma once
#include "CoreMinimal.h"
#include "EPickupState.generated.h"

UENUM(BlueprintType)
enum class EPickupState : uint8 {
    None,
    Pending,
    InCart,
};


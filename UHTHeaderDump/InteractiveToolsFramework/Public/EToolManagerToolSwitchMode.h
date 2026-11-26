#pragma once
#include "CoreMinimal.h"
#include "EToolManagerToolSwitchMode.generated.h"

UENUM(BlueprintType)
enum class EToolManagerToolSwitchMode : uint8 {
    AcceptIfAble,
    CancelIfAble,
    CustomizableAcceptIfAble,
    CustomizableCancelIfAble,
};


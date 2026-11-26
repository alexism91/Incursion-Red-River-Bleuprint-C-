#pragma once
#include "CoreMinimal.h"
#include "EOccludedAction.generated.h"

UENUM(BlueprintType)
enum class EOccludedAction : uint8 {
    Remove,
    SetNewGroup,
};


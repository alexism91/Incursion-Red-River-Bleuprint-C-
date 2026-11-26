#pragma once
#include "CoreMinimal.h"
#include "EOnSenseEvent.generated.h"

UENUM(BlueprintType)
enum class EOnSenseEvent : uint8 {
    SenseCurrent,
    SenseNew,
    SenseLost,
    SenseForget,
};


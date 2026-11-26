#pragma once
#include "CoreMinimal.h"
#include "EActivationState.generated.h"

UENUM(BlueprintType)
enum class EActivationState : uint8 {
    Inactive,
    Active,
    OneShot,
};


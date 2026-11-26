#pragma once
#include "CoreMinimal.h"
#include "EEnemyActionState.generated.h"

UENUM(BlueprintType)
enum class EEnemyActionState : uint8 {
    ReadyForActivation,
    Active,
    Aborting,
};


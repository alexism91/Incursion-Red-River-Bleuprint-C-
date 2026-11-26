#pragma once
#include "CoreMinimal.h"
#include "EAirdropState.generated.h"

UENUM(BlueprintType)
enum class EAirdropState : uint8 {
    Idle,
    Warning,
    InAir,
    Landing,
    Landed,
    Aborted,
    Despawned,
};


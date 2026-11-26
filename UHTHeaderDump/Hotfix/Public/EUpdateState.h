#pragma once
#include "CoreMinimal.h"
#include "EUpdateState.generated.h"

UENUM(BlueprintType)
enum class EUpdateState : uint8 {
    UpdateIdle,
    UpdatePending,
    CheckingForPatch,
    CheckingForHotfix,
    WaitingOnInitialLoad,
    InitialLoadComplete,
    UpdateComplete,
};


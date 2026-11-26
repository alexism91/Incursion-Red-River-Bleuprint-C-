#pragma once
#include "CoreMinimal.h"
#include "EMassCommandOperationType.generated.h"

UENUM(BlueprintType)
enum class EMassCommandOperationType : uint8 {
    None,
    Create,
    Add,
    Remove,
    ChangeComposition,
    Set,
    Destroy,
    MAX,
};


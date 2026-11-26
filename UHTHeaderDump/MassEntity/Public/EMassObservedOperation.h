#pragma once
#include "CoreMinimal.h"
#include "EMassObservedOperation.generated.h"

UENUM(BlueprintType)
enum class EMassObservedOperation : uint8 {
    Add,
    Remove,
    MAX,
};


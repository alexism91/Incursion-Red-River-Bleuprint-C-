#pragma once
#include "CoreMinimal.h"
#include "ETaskProcessType.generated.h"

UENUM(BlueprintType)
enum class ETaskProcessType : uint8 {
    Sync,
    Multithread,
};


#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTaskCompletionType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTaskCompletionType : uint8 {
    All,
    Any,
};


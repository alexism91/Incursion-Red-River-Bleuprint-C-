#pragma once
#include "CoreMinimal.h"
#include "ESuccessState.generated.h"

UENUM(BlueprintType)
enum class ESuccessState : uint8 {
    Success,
    Failed,
};


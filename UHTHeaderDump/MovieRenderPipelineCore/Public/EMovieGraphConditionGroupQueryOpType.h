#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphConditionGroupQueryOpType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphConditionGroupQueryOpType : uint8 {
    Add,
    Subtract,
    And,
};


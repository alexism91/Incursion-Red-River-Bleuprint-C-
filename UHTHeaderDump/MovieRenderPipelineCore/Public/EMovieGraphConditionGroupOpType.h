#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphConditionGroupOpType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphConditionGroupOpType : uint8 {
    Add,
    Subtract,
    And,
};


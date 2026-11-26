#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneGroupConditionOperator.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneGroupConditionOperator : uint8 {
    And,
    Or,
    Xor,
};


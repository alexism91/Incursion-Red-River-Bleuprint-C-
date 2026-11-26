#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneScalabilityConditionOperator.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneScalabilityConditionOperator : uint8 {
    LessThan,
    LessThanOrEqualTo,
    EqualTo,
    GreaterThanOrEqualTo,
    GreaterThan,
};


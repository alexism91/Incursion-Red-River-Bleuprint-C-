#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneConditionScope.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneConditionScope : uint8 {
    Global,
    Binding,
    OwnerObject,
};


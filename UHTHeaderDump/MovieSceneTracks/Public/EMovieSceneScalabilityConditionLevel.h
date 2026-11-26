#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneScalabilityConditionLevel.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneScalabilityConditionLevel : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
};


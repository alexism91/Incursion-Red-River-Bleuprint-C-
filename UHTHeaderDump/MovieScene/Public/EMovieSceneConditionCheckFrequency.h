#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneConditionCheckFrequency.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneConditionCheckFrequency : uint8 {
    Once,
    OnTick,
};


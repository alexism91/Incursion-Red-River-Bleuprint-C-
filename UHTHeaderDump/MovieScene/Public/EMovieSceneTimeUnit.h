#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneTimeUnit.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneTimeUnit : uint8 {
    DisplayRate,
    TickResolution,
};


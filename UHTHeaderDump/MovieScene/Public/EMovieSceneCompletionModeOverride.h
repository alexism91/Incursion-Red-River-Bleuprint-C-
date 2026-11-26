#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionModeOverride.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneCompletionModeOverride : uint8 {
    None,
    ForceKeepState,
    ForceRestoreState,
};


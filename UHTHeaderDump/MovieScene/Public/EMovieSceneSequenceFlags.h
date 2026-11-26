#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSequenceFlags.generated.h"

UENUM(BlueprintType, Flags)
enum class EMovieSceneSequenceFlags : uint8 {
    None,
    Volatile,
    BlockingEvaluation,
    DynamicWeighting = 4,
    InheritedFlags = Volatile,
    EMovieSceneSequenceFlags_MAX = 8 UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSequenceCompilerMask.generated.h"

UENUM(BlueprintType, Flags)
enum class EMovieSceneSequenceCompilerMask : uint8 {
    Hierarchy = 1,
    EvaluationTemplate,
    EvaluationTemplateField = 4,
    EntityComponentField = 8,
    None = 0,
    EMovieSceneSequenceCompilerMask_MAX = 16 UMETA(Hidden),
};


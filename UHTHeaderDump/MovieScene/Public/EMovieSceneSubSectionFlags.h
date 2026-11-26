#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSubSectionFlags.generated.h"

UENUM(BlueprintType, Flags)
enum class EMovieSceneSubSectionFlags : uint8 {
    None,
    OverrideKeepState,
    OverrideRestoreState,
    IgnoreHierarchicalBias = 4,
    BlendHierarchicalBias = 8,
    AnyRestoreStateOverride = 3,
    EMovieSceneSubSectionFlags_MAX = 16 UMETA(Hidden),
};


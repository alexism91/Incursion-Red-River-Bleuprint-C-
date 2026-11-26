#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphQuickRenderViewportLookFlags.generated.h"

UENUM(BlueprintType, Flags)
enum class EMovieGraphQuickRenderViewportLookFlags : uint8 {
    None,
    Ocio,
    ShowFlags,
    ViewMode = 4,
    Visibility = 8,
    EditorOnlyActors = 16,
    EMovieGraphQuickRenderViewportLookFlags_MAX = 32 UMETA(Hidden),
};


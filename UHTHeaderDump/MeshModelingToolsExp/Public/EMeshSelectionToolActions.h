#pragma once
#include "CoreMinimal.h"
#include "EMeshSelectionToolActions.generated.h"

UENUM(BlueprintType)
enum class EMeshSelectionToolActions : uint8 {
    NoAction,
    SelectAll,
    SelectAllByMaterial,
    ClearSelection,
    InvertSelection,
    GrowSelection,
    ShrinkSelection,
    ExpandToConnected,
    SelectLargestComponentByTriCount,
    SelectLargestComponentByArea,
    OptimizeSelection,
    DeleteSelected,
    DisconnectSelected,
    SeparateSelected,
    DuplicateSelected,
    FlipSelected,
    CreateGroup,
    SmoothBoundary,
    CycleSelectionMode,
    CycleViewMode,
};


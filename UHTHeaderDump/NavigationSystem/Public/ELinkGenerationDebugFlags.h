#pragma once
#include "CoreMinimal.h"
#include "ELinkGenerationDebugFlags.generated.h"

UENUM()
enum class ELinkGenerationDebugFlags {
    WalkableSurface = 1,
    WalkableBorders,
    SelectedEdge = 4,
    SelectedEdgeTrajectory = 8,
    SelectedEdgeLandingSamples = 16,
    SelectedEdgeCollisions = 32,
    SelectedEdgeCollisionsSamples = 64,
    Links = 128,
    FilteredLinks = 256,
};


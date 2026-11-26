#pragma once
#include "CoreMinimal.h"
#include "EPCGExportMode.generated.h"

UENUM(BlueprintType)
enum class EPCGExportMode : uint8 {
    NoExport,
    ComputeGraphOutput,
    Inspection,
    DebugVisualization = 4,
};


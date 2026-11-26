#pragma once
#include "CoreMinimal.h"
#include "EFSRMoviePipelineQuality.generated.h"

UENUM(BlueprintType)
enum class EFSRMoviePipelineQuality : uint8 {
    Unused,
    Native,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};


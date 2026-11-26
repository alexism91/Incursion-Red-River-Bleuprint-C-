#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineMP4EncodeProfile.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineMP4EncodeProfile : uint8 {
    Baseline,
    Main,
    High,
};


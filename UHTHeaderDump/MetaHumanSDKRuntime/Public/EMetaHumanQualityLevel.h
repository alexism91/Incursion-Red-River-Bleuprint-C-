#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanQualityLevel : uint8 {
    Low,
    Medium,
    High,
    Cinematic,
    Count,
};


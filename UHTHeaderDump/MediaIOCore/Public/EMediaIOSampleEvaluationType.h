#pragma once
#include "CoreMinimal.h"
#include "EMediaIOSampleEvaluationType.generated.h"

UENUM(BlueprintType)
enum class EMediaIOSampleEvaluationType : uint8 {
    Latest,
    PlatformTime,
    Timecode,
};


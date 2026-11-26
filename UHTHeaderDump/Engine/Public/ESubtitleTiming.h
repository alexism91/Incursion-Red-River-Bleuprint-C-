#pragma once
#include "CoreMinimal.h"
#include "ESubtitleTiming.generated.h"

UENUM(BlueprintType)
enum class ESubtitleTiming : uint8 {
    InternallyTimed,
    ExternallyTimed,
};


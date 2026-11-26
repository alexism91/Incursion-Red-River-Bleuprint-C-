#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerOptionTrackSelectMode.generated.h"

UENUM(BlueprintType)
enum class EMediaPlayerOptionTrackSelectMode : uint8 {
    UseMediaPlayerDefaults,
    UseTrackOptionIndices,
    UseLanguageCodes,
};


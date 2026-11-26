#pragma once
#include "CoreMinimal.h"
#include "ESubtitleType.generated.h"

UENUM(BlueprintType)
enum class ESubtitleType : uint8 {
    Subtitle,
    ClosedCaption,
    AudioDescription,
};


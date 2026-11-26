#pragma once
#include "CoreMinimal.h"
#include "EDistortionSource.generated.h"

UENUM(BlueprintType)
enum class EDistortionSource : uint8 {
    LensFile,
    LiveLinkLensSubject,
    Manual,
};


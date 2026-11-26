#pragma once
#include "CoreMinimal.h"
#include "EChaosVDRecordingMode.generated.h"

UENUM(BlueprintType)
enum class EChaosVDRecordingMode : uint8 {
    Invalid,
    Live,
    File,
};


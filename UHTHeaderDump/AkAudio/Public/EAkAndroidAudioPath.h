#pragma once
#include "CoreMinimal.h"
#include "EAkAndroidAudioPath.generated.h"

UENUM()
enum class EAkAndroidAudioPath : uint32 {
    Legacy,
    LowLatency,
    Exclusive,
};


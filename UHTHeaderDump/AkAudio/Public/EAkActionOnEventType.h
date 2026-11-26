#pragma once
#include "CoreMinimal.h"
#include "EAkActionOnEventType.generated.h"

UENUM(BlueprintType)
enum class EAkActionOnEventType : uint8 {
    Stop,
    Pause,
    Resume,
    Break,
    ReleaseEnvelope,
    Last,
};


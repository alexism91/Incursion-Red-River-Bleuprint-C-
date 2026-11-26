#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkSubjectState.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkSubjectState : uint8 {
    Connected,
    Unresponsive,
    Disconnected,
    InvalidOrDisabled,
    Paused,
    Unknown,
};


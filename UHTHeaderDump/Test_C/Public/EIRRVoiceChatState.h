#pragma once
#include "CoreMinimal.h"
#include "EIRRVoiceChatState.generated.h"

UENUM(BlueprintType)
enum class EIRRVoiceChatState : uint8 {
    Disconnected,
    Connecting,
    Connected,
};


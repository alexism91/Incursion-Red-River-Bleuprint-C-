#pragma once
#include "CoreMinimal.h"
#include "EIRRVoiceChatSetting.generated.h"

UENUM(BlueprintType)
enum class EIRRVoiceChatSetting : uint8 {
    PushToTalk,
    InputDevice,
    OutputDevice,
};


#pragma once
#include "CoreMinimal.h"
#include "OnIRRVoiceChatTalkingChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIRRVoiceChatTalkingChanged, APlayerState*, Player, bool, bIsTalking);


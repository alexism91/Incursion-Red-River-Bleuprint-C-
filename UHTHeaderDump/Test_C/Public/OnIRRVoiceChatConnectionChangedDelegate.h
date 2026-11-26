#pragma once
#include "CoreMinimal.h"
#include "EIRRVoiceChatState.h"
#include "OnIRRVoiceChatConnectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIRRVoiceChatConnectionChanged, EIRRVoiceChatState, NewState, const FString&, Status);


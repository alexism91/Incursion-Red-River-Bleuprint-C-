#pragma once
#include "CoreMinimal.h"
#include "OnKronosPartyPlayerStateChangedDelegate.generated.h"

class AKronosPartyPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosPartyPlayerStateChanged, AKronosPartyPlayerState*, PlayerState);


#pragma once
#include "CoreMinimal.h"
#include "OnKronosPartyLeaderMatchmakingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosPartyLeaderMatchmaking, bool, bMatchmaking);


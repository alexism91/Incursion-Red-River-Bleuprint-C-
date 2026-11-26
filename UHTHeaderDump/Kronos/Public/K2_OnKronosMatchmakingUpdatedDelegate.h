#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingState.h"
#include "K2_OnKronosMatchmakingUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FK2_OnKronosMatchmakingUpdated, const EKronosMatchmakingState, MatchmakingState, const int32, MatchmakingTime);


#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingState.h"
#include "K2_OnKronosMatchmakingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FK2_OnKronosMatchmakingStateChanged, const EKronosMatchmakingState, OldState, const EKronosMatchmakingState, NewState);


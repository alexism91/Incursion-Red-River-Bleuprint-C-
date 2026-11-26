#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingCompleteResult.h"
#include "K2_OnKronosMatchmakingCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FK2_OnKronosMatchmakingComplete, const FName, SessionName, const EKronosMatchmakingCompleteResult, Result);


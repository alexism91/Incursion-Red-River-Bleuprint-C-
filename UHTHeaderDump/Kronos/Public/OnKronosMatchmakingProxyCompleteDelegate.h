#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingCompleteResult.h"
#include "OnKronosMatchmakingProxyCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosMatchmakingProxyComplete, const EKronosMatchmakingCompleteResult, Result);


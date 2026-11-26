#pragma once
#include "CoreMinimal.h"
#include "OnRaidTradeCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRaidTradeCompleted, bool, bSuccess, FText, reason);


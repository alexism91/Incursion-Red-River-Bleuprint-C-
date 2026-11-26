#pragma once
#include "CoreMinimal.h"
#include "OnSplitAmountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSplitAmountChanged, int32, SplitAmount);


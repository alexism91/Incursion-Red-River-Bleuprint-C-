#pragma once
#include "CoreMinimal.h"
#include "OnCurrencyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrencyChanged, int32, Cash, int32, BloodDiamonds);


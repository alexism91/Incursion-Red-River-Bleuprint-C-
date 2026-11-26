#pragma once
#include "CoreMinimal.h"
#include "OnMinValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMinValueChanged, float, NewValue, float, NewModifiedValue);


#pragma once
#include "CoreMinimal.h"
#include "OnMaxValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMaxValueChanged, float, NewValue, float, NewModifiedValue);


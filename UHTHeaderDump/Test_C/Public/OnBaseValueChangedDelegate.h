#pragma once
#include "CoreMinimal.h"
#include "OnBaseValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBaseValueChanged, float, NewValue, float, NewModifiedValue);


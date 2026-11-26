#pragma once
#include "CoreMinimal.h"
#include "OnWeightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeightChanged, float, Weight);


#pragma once
#include "CoreMinimal.h"
#include "OnAimTransitionMultiplierChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAimTransitionMultiplierChanged, float, NewMultiplier);


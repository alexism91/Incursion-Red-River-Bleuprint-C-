#pragma once
#include "CoreMinimal.h"
#include "OnCrouchTransitionMultiplierUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrouchTransitionMultiplierUpdated, float, NewMultiplier);


#pragma once
#include "CoreMinimal.h"
#include "OnStaminaUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaUpdated, float, NewStamina);


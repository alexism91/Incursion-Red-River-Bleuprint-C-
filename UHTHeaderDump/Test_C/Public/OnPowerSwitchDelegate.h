#pragma once
#include "CoreMinimal.h"
#include "OnPowerSwitchDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerSwitch, bool, bPowerOn);


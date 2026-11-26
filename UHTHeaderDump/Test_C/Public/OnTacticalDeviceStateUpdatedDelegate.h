#pragma once
#include "CoreMinimal.h"
#include "EIRRTacticalDeviceState.h"
#include "OnTacticalDeviceStateUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTacticalDeviceStateUpdated, EIRRTacticalDeviceState, NewState);


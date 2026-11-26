#pragma once
#include "CoreMinimal.h"
#include "ELightState.h"
#include "OnLightStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLightStateChanged, ELightState, OldLightState, ELightState, NewLightState);


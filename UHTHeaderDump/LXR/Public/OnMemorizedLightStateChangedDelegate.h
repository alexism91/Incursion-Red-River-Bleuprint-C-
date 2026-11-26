#pragma once
#include "CoreMinimal.h"
#include "ELightState.h"
#include "OnMemorizedLightStateChangedDelegate.generated.h"

class ULXRSourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMemorizedLightStateChanged, const ULXRSourceComponent*, LightSourceComponent, ELightState, OldLightState, ELightState, NewLightState);


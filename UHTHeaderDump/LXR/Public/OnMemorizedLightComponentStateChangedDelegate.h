#pragma once
#include "CoreMinimal.h"
#include "ELightState.h"
#include "OnMemorizedLightComponentStateChangedDelegate.generated.h"

class ULXRSourceComponent;
class ULightComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMemorizedLightComponentStateChanged, const ULXRSourceComponent*, LightSourceComponent, const ULightComponent*, LightComponent, ELightState, OldLightComponentState, ELightState, NewLightComponentState);


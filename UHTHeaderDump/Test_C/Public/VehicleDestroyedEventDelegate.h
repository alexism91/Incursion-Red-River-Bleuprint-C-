#pragma once
#include "CoreMinimal.h"
#include "VehicleDamageEvent.h"
#include "VehicleDestroyedEventDelegate.generated.h"

class ABaseVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehicleDestroyedEvent, ABaseVehicle*, Vehicle, FVehicleDamageEvent, DamageEvent);


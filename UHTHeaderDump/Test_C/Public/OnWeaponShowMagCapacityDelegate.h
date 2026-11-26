#pragma once
#include "CoreMinimal.h"
#include "OnWeaponShowMagCapacityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWeaponShowMagCapacity, bool, Trigger, int32, MagCapacity, int32, MaxMagCapacity);


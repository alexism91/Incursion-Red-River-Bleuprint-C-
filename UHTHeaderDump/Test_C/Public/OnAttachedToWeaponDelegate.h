#pragma once
#include "CoreMinimal.h"
#include "OnAttachedToWeaponDelegate.generated.h"

class UWeaponComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttachedToWeapon, UWeaponComponent*, NewWeapon);


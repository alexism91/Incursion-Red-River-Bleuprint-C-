#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeaponData.h"
#include "IRRAIWeaponSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIWeaponSignature, const FIRRAIWeaponData&, CurrentWeaponData);


#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeaponLoadout.h"
#include "IRRAILoadoutSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAILoadoutSignature, const FIRRAIWeaponLoadout&, Loadout);


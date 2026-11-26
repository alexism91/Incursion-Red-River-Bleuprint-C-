#pragma once
#include "CoreMinimal.h"
#include "IRRDamageData.h"
#include "OnReceivedDamagedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReceivedDamaged, FIRRDamageData, DamageData, bool, bPlayerHurt, bool, bArmorBreak);


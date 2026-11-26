#pragma once
#include "CoreMinimal.h"
#include "IRRDamageData.h"
#include "OnDeathDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, FIRRDamageData, DamageData);


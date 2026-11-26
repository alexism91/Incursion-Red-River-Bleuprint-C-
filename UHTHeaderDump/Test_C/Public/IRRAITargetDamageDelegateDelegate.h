#pragma once
#include "CoreMinimal.h"
#include "IRRDamageData.h"
#include "IRRAITargetDamageDelegateDelegate.generated.h"

class UIRRAITarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRAITargetDamageDelegate, UIRRAITarget*, Target, const FIRRDamageData&, DamageData);


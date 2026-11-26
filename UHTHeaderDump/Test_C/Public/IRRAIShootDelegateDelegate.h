#pragma once
#include "CoreMinimal.h"
#include "EIRRAIShootStatus.h"
#include "IRRAIShootDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIShootDelegate, const EIRRAIShootStatus, ShootStatus);


#pragma once
#include "CoreMinimal.h"
#include "EIRRAIAimStatus.h"
#include "IRRAIAimDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIAimDelegate, const EIRRAIAimStatus, AimStatus);


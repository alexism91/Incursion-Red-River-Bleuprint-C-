#pragma once
#include "CoreMinimal.h"
#include "IRRAIActiveTargetChangeDelegateDelegate.generated.h"

class UIRRAITarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIActiveTargetChangeDelegate, UIRRAITarget*, NewTarget);


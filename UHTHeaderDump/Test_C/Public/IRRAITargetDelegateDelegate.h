#pragma once
#include "CoreMinimal.h"
#include "IRRAITargetDelegateDelegate.generated.h"

class UIRRAITarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAITargetDelegate, UIRRAITarget*, Target);


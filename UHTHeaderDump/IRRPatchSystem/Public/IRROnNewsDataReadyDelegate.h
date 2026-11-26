#pragma once
#include "CoreMinimal.h"
#include "IRROnNewsDataReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRROnNewsDataReady, bool, bSuccess);


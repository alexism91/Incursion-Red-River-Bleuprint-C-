#pragma once
#include "CoreMinimal.h"
#include "IRROnModelPendingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRROnModelPendingChanged, bool, bHasPendingChanges);


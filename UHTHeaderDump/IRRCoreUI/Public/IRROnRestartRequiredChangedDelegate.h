#pragma once
#include "CoreMinimal.h"
#include "IRROnRestartRequiredChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRROnRestartRequiredChanged, bool, bRestartRequired);


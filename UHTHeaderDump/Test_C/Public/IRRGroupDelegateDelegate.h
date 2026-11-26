#pragma once
#include "CoreMinimal.h"
#include "IRRGroupDelegateDelegate.generated.h"

class AIRRAIGroupController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRGroupDelegate, AIRRAIGroupController*, Group);


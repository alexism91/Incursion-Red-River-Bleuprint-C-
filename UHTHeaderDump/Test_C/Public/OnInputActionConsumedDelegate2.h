#pragma once
#include "CoreMinimal.h"
#include "OnInputActionConsumedDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputActionConsumed, FText, Action);


#pragma once
#include "CoreMinimal.h"
#include "OnUpdateKronosPartyCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateKronosPartyComplete, bool, bWasSuccessful);


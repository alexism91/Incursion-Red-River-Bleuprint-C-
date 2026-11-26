#pragma once
#include "CoreMinimal.h"
#include "OnUpdateKronosMatchCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateKronosMatchComplete, bool, bWasSuccessful);


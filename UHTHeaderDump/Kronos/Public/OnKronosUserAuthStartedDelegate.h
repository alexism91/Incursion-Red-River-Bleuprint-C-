#pragma once
#include "CoreMinimal.h"
#include "OnKronosUserAuthStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosUserAuthStarted, bool, bIsInitialAuth);


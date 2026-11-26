#pragma once
#include "CoreMinimal.h"
#include "OnKeypadLockChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeypadLockChanged, bool, bLocked);


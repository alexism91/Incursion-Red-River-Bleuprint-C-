#pragma once
#include "CoreMinimal.h"
#include "OnDoorSwingFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorSwingFinished, bool, bClosed);


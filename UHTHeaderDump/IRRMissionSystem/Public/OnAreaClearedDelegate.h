#pragma once
#include "CoreMinimal.h"
#include "OnAreaClearedDelegate.generated.h"

class UIRRClearAreaComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAreaCleared, UIRRClearAreaComponent*, ClearArea);


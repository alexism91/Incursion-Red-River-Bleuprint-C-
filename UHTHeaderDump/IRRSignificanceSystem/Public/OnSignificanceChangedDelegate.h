#pragma once
#include "CoreMinimal.h"
#include "OnSignificanceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSignificanceChanged, int32, NewLevel, bool, bIsHidden);


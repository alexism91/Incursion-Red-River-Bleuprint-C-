#pragma once
#include "CoreMinimal.h"
#include "MarkerRemovedDelegate.generated.h"

class UIRRMarkerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarkerRemoved, UIRRMarkerComponent*, OutData);


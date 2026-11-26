#pragma once
#include "CoreMinimal.h"
#include "MarkerAddedDelegate.generated.h"

class UIRRMarkerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarkerAdded, UIRRMarkerComponent*, OutData);


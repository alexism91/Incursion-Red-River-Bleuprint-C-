#pragma once
#include "CoreMinimal.h"
#include "OnMissionGraphsUpdatedDelegate.generated.h"

class UIRRGraphData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionGraphsUpdated, const TArray<UIRRGraphData*>&, OutData);


#pragma once
#include "CoreMinimal.h"
#include "OnTrackedMissionDataArrayUpdatedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrackedMissionDataArrayUpdated, const TArray<UIRRMissionData*>&, OutData);


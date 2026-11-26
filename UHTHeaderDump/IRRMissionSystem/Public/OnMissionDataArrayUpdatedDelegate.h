#pragma once
#include "CoreMinimal.h"
#include "OnMissionDataArrayUpdatedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionDataArrayUpdated, const TArray<UIRRMissionData*>&, OutData);


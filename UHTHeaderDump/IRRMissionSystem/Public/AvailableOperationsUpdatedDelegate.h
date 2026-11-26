#pragma once
#include "CoreMinimal.h"
#include "AvailableOperationsUpdatedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAvailableOperationsUpdated, const TArray<UIRRMissionData*>&, AvailableOperations);


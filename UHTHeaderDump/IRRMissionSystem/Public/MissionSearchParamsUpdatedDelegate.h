#pragma once
#include "CoreMinimal.h"
#include "IRRMissionSearchParams.h"
#include "MissionSearchParamsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionSearchParamsUpdated, FIRRMissionSearchParams, OutParams);


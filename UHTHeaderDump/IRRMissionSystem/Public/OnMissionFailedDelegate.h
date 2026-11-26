#pragma once
#include "CoreMinimal.h"
#include "OnMissionFailedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionFailed, UIRRMissionData*, OutMission);


#pragma once
#include "CoreMinimal.h"
#include "OnMissionCompletedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionCompleted, UIRRMissionData*, OutMission);


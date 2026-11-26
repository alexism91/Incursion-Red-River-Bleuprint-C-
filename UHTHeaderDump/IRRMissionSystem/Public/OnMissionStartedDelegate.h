#pragma once
#include "CoreMinimal.h"
#include "OnMissionStartedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStarted, UIRRMissionData*, OutMission);


#pragma once
#include "CoreMinimal.h"
#include "OnMissionBriefingTriggerStateChangedDelegate.generated.h"

class UIRRMissionBriefingTriggerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionBriefingTriggerStateChanged, UIRRMissionBriefingTriggerComponent*, BriefingTrigger);


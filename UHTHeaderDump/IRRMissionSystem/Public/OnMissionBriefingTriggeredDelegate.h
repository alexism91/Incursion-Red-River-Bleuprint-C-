#pragma once
#include "CoreMinimal.h"
#include "OnMissionBriefingTriggeredDelegate.generated.h"

class APawn;
class UIRRMissionBriefingTriggerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionBriefingTriggered, UIRRMissionBriefingTriggerComponent*, BriefingTrigger, APawn*, Pawn);


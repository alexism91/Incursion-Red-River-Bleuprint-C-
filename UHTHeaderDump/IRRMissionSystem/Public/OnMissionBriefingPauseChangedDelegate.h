#pragma once
#include "CoreMinimal.h"
#include "IRRMissionBriefing.h"
#include "OnMissionBriefingPauseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionBriefingPauseChanged, FIRRMissionBriefing, BriefingData, bool, bPaused);


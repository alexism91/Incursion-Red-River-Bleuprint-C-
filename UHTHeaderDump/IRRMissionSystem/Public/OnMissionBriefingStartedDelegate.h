#pragma once
#include "CoreMinimal.h"
#include "IRRMissionBriefing.h"
#include "OnMissionBriefingStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionBriefingStarted, FIRRMissionBriefing, BriefingData);


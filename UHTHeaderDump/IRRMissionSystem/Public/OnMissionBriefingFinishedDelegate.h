#pragma once
#include "CoreMinimal.h"
#include "IRRMissionBriefing.h"
#include "OnMissionBriefingFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionBriefingFinished, FIRRMissionBriefing, BriefingData);


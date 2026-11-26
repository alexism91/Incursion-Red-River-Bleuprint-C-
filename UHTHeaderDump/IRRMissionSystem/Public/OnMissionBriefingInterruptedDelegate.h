#pragma once
#include "CoreMinimal.h"
#include "IRRMissionBriefing.h"
#include "OnMissionBriefingInterruptedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionBriefingInterrupted, FIRRMissionBriefing, BriefingData);


#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionState.h"
#include "MissionStateUpdatedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionStateUpdated, EIRRMissionState, NewState, UIRRMissionData*, MissionData);


#pragma once
#include "CoreMinimal.h"
#include "MissionLeaderComponentUpdatedDelegate.generated.h"

class UIRRMissionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionLeaderComponentUpdated, UIRRMissionComponent*, NewMissionLeaderComponent);


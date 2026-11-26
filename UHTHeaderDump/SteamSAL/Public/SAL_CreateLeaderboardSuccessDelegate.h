#pragma once
#include "CoreMinimal.h"
#include "SAL_LeaderboardHandle.h"
#include "SAL_CreateLeaderboardSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_CreateLeaderboardSuccess, FSAL_LeaderboardHandle, LeaderboardHandle);


#pragma once
#include "CoreMinimal.h"
#include "SAL_LeaderboardHandle.h"
#include "SAL_FindLeaderboardSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_FindLeaderboardSuccess, FSAL_LeaderboardHandle, LeaderboardHandle);


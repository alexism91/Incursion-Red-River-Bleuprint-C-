#pragma once
#include "CoreMinimal.h"
#include "SAL_LeaderboardEntriesData.h"
#include "SAL_OnDownloadEntriesForUsersSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSAL_OnDownloadEntriesForUsersSuccess, const FSAL_LeaderboardEntriesData&, EntriesData, int32, EntryCount);


#pragma once
#include "CoreMinimal.h"
#include "SAL_OnLeaderboardEntriesFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnLeaderboardEntriesFailure, const FString&, ErrorMessage);


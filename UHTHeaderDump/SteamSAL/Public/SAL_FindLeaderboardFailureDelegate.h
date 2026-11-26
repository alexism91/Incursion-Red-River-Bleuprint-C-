#pragma once
#include "CoreMinimal.h"
#include "SAL_FindLeaderboardFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_FindLeaderboardFailure, const FString&, ErrorMessage);


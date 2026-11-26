#pragma once
#include "CoreMinimal.h"
#include "SAL_CreateLeaderboardFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_CreateLeaderboardFailure, const FString&, ErrorMessage);


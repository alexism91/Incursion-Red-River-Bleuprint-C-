#pragma once
#include "CoreMinimal.h"
#include "SAL_RequestCurrentStatsFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_RequestCurrentStatsFailure, const FString&, ErrorMessage);


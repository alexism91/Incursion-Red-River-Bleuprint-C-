#pragma once
#include "CoreMinimal.h"
#include "SAL_StoreStatsAndAchievementsFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_StoreStatsAndAchievementsFailure, const FString&, ErrorMessage);


#pragma once
#include "CoreMinimal.h"
#include "CurrentStatItem.h"
#include "OnItemStatsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemStatsChanged, TArray<FCurrentStatItem>, NewStats);


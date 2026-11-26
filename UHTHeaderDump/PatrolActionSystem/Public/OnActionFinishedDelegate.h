#pragma once
#include "CoreMinimal.h"
#include "EEnemyActionFinishResult.h"
#include "OnActionFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionFinished, EEnemyActionFinishResult, FinishResult);


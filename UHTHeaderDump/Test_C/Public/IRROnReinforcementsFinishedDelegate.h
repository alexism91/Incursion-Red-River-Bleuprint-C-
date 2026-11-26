#pragma once
#include "CoreMinimal.h"
#include "IRROnReinforcementsFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnReinforcementsFinished, int32, RequestID, int32, SpawnedCount);


#pragma once
#include "CoreMinimal.h"
#include "DragonIKTraceKeyValuePair.h"
#include "DragonIKFootSolverTraceDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragonIKFootSolverTraceData, const TArray<FDragonIKTraceKeyValuePair>&, hit_data_pair);


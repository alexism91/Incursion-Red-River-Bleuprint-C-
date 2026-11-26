#pragma once
#include "CoreMinimal.h"
#include "BatchTraceResult.h"
#include "BatchLineTraceCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FBatchLineTraceCompleteDelegate, const TArray<FBatchTraceResult>&, Results, int32, BatchID);


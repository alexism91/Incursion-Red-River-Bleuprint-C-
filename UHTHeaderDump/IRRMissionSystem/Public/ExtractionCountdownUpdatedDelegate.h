#pragma once
#include "CoreMinimal.h"
#include "ExtractionCountdownUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtractionCountdownUpdated, int32, Counter);


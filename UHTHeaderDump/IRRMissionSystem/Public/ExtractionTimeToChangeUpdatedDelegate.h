#pragma once
#include "CoreMinimal.h"
#include "IRRDayTime.h"
#include "ExtractionTimeToChangeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtractionTimeToChangeUpdated, FIRRDayTime, NewTime);


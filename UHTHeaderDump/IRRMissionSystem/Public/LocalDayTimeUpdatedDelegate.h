#pragma once
#include "CoreMinimal.h"
#include "IRRDayTime.h"
#include "LocalDayTimeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocalDayTimeUpdated, FIRRDayTime, NewDayTime);


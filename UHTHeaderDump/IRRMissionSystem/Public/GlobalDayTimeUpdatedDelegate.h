#pragma once
#include "CoreMinimal.h"
#include "IRRDayTime.h"
#include "GlobalDayTimeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalDayTimeUpdated, FIRRDayTime, NewDayTime);


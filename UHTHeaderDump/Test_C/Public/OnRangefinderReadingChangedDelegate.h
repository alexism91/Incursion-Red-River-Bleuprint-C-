#pragma once
#include "CoreMinimal.h"
#include "IRRRangefinderReading.h"
#include "OnRangefinderReadingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRangefinderReadingChanged, const FIRRRangefinderReading&, Reading);


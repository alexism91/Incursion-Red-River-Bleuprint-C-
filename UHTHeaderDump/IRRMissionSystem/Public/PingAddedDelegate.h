#pragma once
#include "CoreMinimal.h"
#include "IRRPingData.h"
#include "PingAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPingAdded, FIRRPingData, OutData);


#pragma once
#include "CoreMinimal.h"
#include "IRRPingData.h"
#include "PingRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPingRemoved, FIRRPingData, OutData);


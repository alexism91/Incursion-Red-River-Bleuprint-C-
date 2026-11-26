#pragma once
#include "CoreMinimal.h"
#include "OnQueryActionScanProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryActionScanProgress, float, Progress);


#pragma once
#include "CoreMinimal.h"
#include "MontageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMontageEvent, FName, LinkedAnimGraph);


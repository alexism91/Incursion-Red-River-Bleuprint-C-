#pragma once
#include "CoreMinimal.h"
#include "IRROnFXPreloadFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnFXPreloadFinished, int32, ReadyCount, int32, NotReadyCount);


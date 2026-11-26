#pragma once
#include "CoreMinimal.h"
#include "OnGCPSObjectiveLedsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGCPSObjectiveLeds, int32, Count);


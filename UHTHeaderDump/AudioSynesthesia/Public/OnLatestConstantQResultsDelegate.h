#pragma once
#include "CoreMinimal.h"
#include "ConstantQResults.h"
#include "OnLatestConstantQResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLatestConstantQResults, int32, ChannelIndex, const FConstantQResults&, LatestConstantQResults);


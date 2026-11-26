#pragma once
#include "CoreMinimal.h"
#include "ConstantQResults.h"
#include "OnConstantQResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConstantQResults, int32, ChannelIndex, const TArray<FConstantQResults>&, ConstantQResults);


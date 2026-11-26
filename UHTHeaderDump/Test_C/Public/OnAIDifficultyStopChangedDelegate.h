#pragma once
#include "CoreMinimal.h"
#include "OnAIDifficultyStopChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIDifficultyStopChanged, int32, StopIndex, FName, VariantId);


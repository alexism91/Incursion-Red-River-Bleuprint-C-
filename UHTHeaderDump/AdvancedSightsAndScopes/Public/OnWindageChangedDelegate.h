#pragma once
#include "CoreMinimal.h"
#include "OnWindageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWindageChanged, float, OldAdjustment, float, NewAdjustment);


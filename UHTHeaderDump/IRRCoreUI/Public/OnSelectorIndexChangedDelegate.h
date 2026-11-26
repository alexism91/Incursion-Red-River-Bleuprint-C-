#pragma once
#include "CoreMinimal.h"
#include "OnSelectorIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectorIndexChanged, int32, Index, FName, Entry);


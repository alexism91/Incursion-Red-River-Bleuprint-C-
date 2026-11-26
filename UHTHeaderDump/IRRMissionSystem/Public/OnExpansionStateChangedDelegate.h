#pragma once
#include "CoreMinimal.h"
#include "OnExpansionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExpansionStateChanged, bool, bIsExpanded);


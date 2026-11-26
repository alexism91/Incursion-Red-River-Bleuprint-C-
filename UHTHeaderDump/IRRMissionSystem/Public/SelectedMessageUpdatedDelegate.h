#pragma once
#include "CoreMinimal.h"
#include "IRRInboxItem.h"
#include "SelectedMessageUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedMessageUpdated, FIRRInboxItem, OutData);


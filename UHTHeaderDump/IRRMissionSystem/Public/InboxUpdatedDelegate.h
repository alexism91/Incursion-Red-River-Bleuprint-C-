#pragma once
#include "CoreMinimal.h"
#include "IRRInboxItem.h"
#include "InboxUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInboxUpdated, const TArray<FIRRInboxItem>&, OutData);


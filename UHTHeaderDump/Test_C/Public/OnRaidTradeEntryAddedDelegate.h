#pragma once
#include "CoreMinimal.h"
#include "OnRaidTradeEntryAddedDelegate.generated.h"

class URaidTradeOfferWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidTradeEntryAdded, URaidTradeOfferWidget*, Entry);


#pragma once
#include "CoreMinimal.h"
#include "OnRaidTradeSessionChangedDelegate.generated.h"

class ARaidTraderSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidTradeSessionChanged, ARaidTraderSession*, Session);


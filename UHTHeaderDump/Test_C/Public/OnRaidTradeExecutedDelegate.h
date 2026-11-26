#pragma once
#include "CoreMinimal.h"
#include "RaidTradeResult.h"
#include "OnRaidTradeExecutedDelegate.generated.h"

class APlayerController;
class ARaidTrader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRaidTradeExecuted, ARaidTrader*, Trader, APlayerController*, Player, const FRaidTradeResult&, Result);


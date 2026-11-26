#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDangerStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDangerStateChanged, bool, bInDanger);

